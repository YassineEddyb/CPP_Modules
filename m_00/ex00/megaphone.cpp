#include <iostream>

char my_toupper(char ch)
{
    return static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
}

std::string str_toupper(char *str)
{
   int i = -1;

   std::string new_str = str;
   while(str[++i])
      new_str[i] = my_toupper(str[i]);

   return new_str;
}

int main(int argc, char **argv) {

   (void)argv;
   if (argc <= 1)
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
   else
   {
      int i = 0;
      while(argv[++i])
      {
         if (argv[i + 1])
            std::cout << str_toupper(argv[i]) + " ";
         else
            std::cout << str_toupper(argv[i]);
      }
      std::cout << "" << std::endl;
   }
}