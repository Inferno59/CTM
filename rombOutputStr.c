/* Считываем строку и выводим в слудеющем виде:
 t
 te
 tes
 test
 est
 st
 t
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char inStr[255];
  fgets(inStr, 255, stdin);

  char buf[255];
  memset(buf, 0, 255);

  for (int i = 0; i < strlen(inStr); ++i)
  {
    strncpy(buf, inStr, i);
    printf("%s\n", buf);
  }

  if (strlen(inStr) >=2)
  {
    for (int i = strlen(inStr) - 2, j = 1; i >= 0; --i, j++)
    {
      printf("%s", &inStr[j]);
    }
  }

  system("pause");
  return 0;
}
