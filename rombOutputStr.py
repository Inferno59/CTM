# Считываем строку и выводим в слудеющем виде:
# t
# te
# tes
# test
# est
# st
# t
strIn = input()

for i in range(len(strIn) + 1):
  print(strIn[:i])

for i in range(1,len(strIn)):
  print(strIn[i:len(strIn)])