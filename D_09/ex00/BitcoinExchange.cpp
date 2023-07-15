#include "BitcoinExchange.hpp"

Btc::Btc() {}

Btc::Btc(const Btc &obj) {
    *this = obj;
}

Btc& Btc::operator = (const Btc &obj) {
    btc_map = obj.btc_map;
    return *this;
}

void Btc::parse_csv_file() {
    std::ifstream file("data.csv", std::ios::in);
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        std::exit(1);
    }

    std::string file_data;
    while(file) {
        file >> file_data;
        std::string key = file_data.substr(0, file_data.find(","));
        std::string value = file_data.substr(file_data.find(",") + 1);
        float floatValue = std::atof(value.c_str());
        btc_map[key] = floatValue;
    }
}

bool Btc::check_format(std::string &line, std::string &key, std::string &val) {
    int year = -1, month = -1, day = -1;
    double value = -1; 
    char str[3] = {0};
    

    if (key.length() > 10) {
        std::cerr << "Error: bad input => " << key << std::endl;
        return false;
    }

    sscanf(line.c_str(),"%d-%d-%d %s %lf", &year, &month, &day, str, &value);

    if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31) {
        std::cerr << "Error: bad input => " << key << std::endl;
        return false;
    }


    if (value > 1000) {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    if (value < 0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }


    for(size_t i = 0; i < val.length(); i++) {
        if (!std::isdigit(val[i]) && val[i] != '.') {
            std::cerr << "Error: invalid value => " << val << std::endl;
            return false;
        }
    }

    return true;
}

void Btc::get_values(char *file_name) {
    std::ifstream file(file_name, std::ios::in);
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        std::exit(1);
    }

    std::string file_data;
    std::getline(file, file_data);
    while(std::getline(file, file_data)) {
        std::string key = file_data.substr(0, file_data.find(" | "));
        std::string value = file_data.substr(file_data.find(" | ") + 3);
        if (!check_format(file_data, key, value))
            continue;
        float floatValue = std::atof(value.c_str());

        std::map<std::string, float>::iterator it = btc_map.find(key);
        if (it != btc_map.end()) {
            std::cout << key << " => " << floatValue << " = " << floatValue * btc_map[key] << std::endl;
        }
        else {
            std::map<std::string, float>::iterator lowerBound = btc_map.lower_bound(key);

            if (lowerBound != btc_map.begin()) {
                --lowerBound;
                std::cout << key << " => " << floatValue << " = " << floatValue * (*lowerBound).second << std::endl;
            } else {
                std::cerr << "Error: bad input => " << key << std::endl;
            }
        }
    }
}

Btc::~Btc() {}