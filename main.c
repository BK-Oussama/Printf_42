





#include "ft_printf.h"
#include<limits.h>
int main()
{
  int i;
  int x;
  i = printf("r%s\ru%xM|%%tD\wOIq\fD%dv%Xul%ue``bUF8 E%X~lFq7 %xu:ISDAiD%p", ".;D0\\p", -1739495033, -868786175, 1787349353, 1768924579, -2109999058, 1230795302, (void *)-2012497321707584045);
  printf("\n");
  x = ft_printf("r%s\ru%xM|%%tD\wOIq\fD%dv%Xul%ue``bUF8 E%X~lFq7 %xu:ISDAiD%p", ".;D0\\p", -1739495033, -868786175, 1787349353, 1768924579, -2109999058, 1230795302, (void *)-2012497321707584045);
  
  // int i = printf("this string is: %s%p\\\\\t%x%d", "kola", "lalalal", 555555, 999);
  // printf("\n");
  // int x = ft_printf("this string is: %s%p\\\\\t%x%d", "kola", "lalalal", 555555, 999);

  // char *str = NULL; 
  // int i = printf ("%s", str);
  
  // printf("\n");
  
  // int x = ft_printf ("%s", str);

  
  printf("\nprintf return value: %d\n", i);
  printf("\nFT_printf return value: %d\n", x);

  
 // printf("\n printf_return value: %d\n ft_printf_return Value: %d\n", x, m);
    return 0;

}