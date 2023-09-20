#include "main.h"

int _strcmp(char *s1, char *s2)
{
  while(*str1 && *str2)
  if(*str1 != *str2)
    return 0;
    str1++;
    str2++;
  if(*str1 || *str2)
    return 0;
  return 1;
}
