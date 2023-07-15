#include "BitcoinExchange.hpp"

Btc::Btc() {}

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
    float floatValue = std::atof(value.c_str());

    if (floatValue < 0)
      std::cerr << "Error: not a positive number." << std::endl;
    else if (floatValue > 2.14747e+09)
      std::cerr << "Error: too large a number." << std::endl;
    else {
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
          std::cerr << "Error: bad input => " << (*lowerBound).first  << std::endl;
        }
      }
    }
  }
}

Btc::~Btc() {}