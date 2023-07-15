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
    void parse_csv_file();
    void get_values(char *file_name);
    ~Btc();
};


#endif