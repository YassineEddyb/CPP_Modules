#include "BitcoinExchange.hpp"

int main (int ac, char **argv) {
  if (ac == 1)
    std::cerr << "Error: could not open file." << std::endl;

  if (ac > 2)
    std::cerr << "Error: too many arguments." << std::endl;

  Btc b;
  b.parse_csv_file();
  b.get_values(argv[1]);
}