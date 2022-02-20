#  Принимаем количество треугольников, по принятому количеству считываем 3 значения длин, 
#  Длины суммируем и выводим в отсортированном по возрастанию, если правильно запомнил задание:)
from functools import reduce

rectanglesCnt = int(input())

mapRectangles = {}
for i in range(rectanglesCnt):
  nums = list(map(int, input().split()))
  mapRectangles[reduce(lambda x,y: x + y, nums)] = nums

sorted_dict = {}
sorted_keys = sorted(mapRectangles, key=mapRectangles.get)

for i in sorted_keys:
  sorted_dict[i] = mapRectangles[i]

print(rectanglesCnt)
for i in sorted_dict.values():
  print(i)