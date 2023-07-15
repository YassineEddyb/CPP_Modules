#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <cstdlib>

class Btc {
  private:
    std::map<std::string, float> btc_map;
  public:
    Btc();
    Btc(const Btc &obj);
    Btc& operator = (const Btc &obj);

    void parse_csv_file();
    bool check_format(std::string &line, std::string &key, std::string &value);
    void get_values(char *file_name);
    
    ~Btc();
};


#endif