#include <fstream>
#include <iostream>

std::string ft_replace(std::string buffer, std::string s1, std::string s2) {
    std::string str = buffer;
    int len = 0;

    size_t index = buffer.find(s1);
    while(index < buffer.length()) {
        buffer.erase(index, s1.length());
        str.erase(index + (len * s2.length()), s1.length());
        str.insert(index + (len * s2.length()), s2);
        index = buffer.find(s1);
        len++;
    }

    return str;
}

int main(int argc, char **argv) {
    std::ifstream ifs;
    std::ofstream ofs;
    std::string line;
    std::string buffer = "";

    if (argc == 4) {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
    
        ifs.open(filename);
        if (!ifs) {
            std::cerr << "Error: opening file" << std::endl;
            return 1;
        }

        while (!ifs.eof()) {
            std::getline(ifs, line);
            buffer += line;
            if (!ifs.eof())
                buffer += "\n";
        }

        if (s1.length() > 0) {
            buffer = ft_replace(buffer, s1, s2);

            ofs.open(filename + ".replace", std::ofstream::out | std::ofstream::trunc);
            if (!ofs) {
                std::cerr << "Error: opening file" << std::endl;
                return 1;
            }
            ofs << buffer;
            ofs.close();
        }
        ifs.close();
    } else {
        std::cerr << "Error: not enough of two many arguments" << std::endl;
        return 1;
    }

    return 0;
}