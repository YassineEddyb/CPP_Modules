#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
    std::fstream ifs;
    std::fstream ofs;
    std::string line;
    std::string buffer = "";

    if (argc == 4) {
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        ifs.open(argv[1]);
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
            size_t index = buffer.find(s1);
            while(index < buffer.length()) {
                buffer.erase(index, s1.length());
                buffer.insert(index, s2);
                index = buffer.find(s1);
            }

            ofs.open("newFile.txt", std::ofstream::out | std::ofstream::trunc);
            if (!ofs)
                std::cerr << "Error: opening file" << std::endl;
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