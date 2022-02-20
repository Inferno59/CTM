#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>

int main()
{
  std::string strIn;
  std::cin >> strIn;

  for (auto el : strIn)
  {
    std::cout << el << std::endl;
  }

  system("pause");
  return 0;
}