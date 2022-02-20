/*
  Принимаем количество треугольников, по принятому количеству считываем 3 значения длин, 
  Длины суммируем и выводим в отсортированном по возрастанию, если правильно запомнил задание:)
*/
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>
#include <utility>

std::map<int, std::array<int, 3>> rectanglesSquere;

int main()
{
  unsigned int cntRectangles = 0;
  std::cout << "Please, enter the number of the rectangles:" << std::endl;
  std::cin >> cntRectangles;

  std::cout << "Rectangles count:" << cntRectangles << std::endl;
  std::array<int, 3> buf;

  for (int i = 0; i < cntRectangles; ++i)
  {
    std::cout << "Enter lenths of " << i << " the rectangles:n" << std::endl;
    std::cin >> buf[0] >> buf[1] >> buf[2];

    int square = buf[0] + buf[1] + buf[2];
    rectanglesSquere.insert(std::make_pair(square, buf));
  }

  for (auto &kv : rectanglesSquere)
  {
    std::cout << kv.first << " has value " << kv.second[0] << kv.second[1] << kv.second[2] << std::endl;
  }

  system("pause");
  return 0;
}