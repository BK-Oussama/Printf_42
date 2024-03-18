





#include "ft_printf.h"
#include<limits.h>
int main()
{
  int i;
  int x;
  i = ft_printf(" >H{`J-%dZ%pV%%\\r-\f>IZ%pp|%uLP%pQa\n*%pJKCys%X3}9w[", 98090755, (void *)-1196579647893228601, (void *)-509261003616793543, -491166635, (void *)-2923365796551904655, (void *)3312209108380512693, 591339631);
  x = printf(" >H{`J-%dZ%pV%%\\r-\f>IZ%pp|%uLP%pQa\n*%pJKCys%X3}9w[", 98090755, (void *)-1196579647893228601, (void *)-509261003616793543, -491166635, (void *)-2923365796551904655, (void *)3312209108380512693, 591339631);
  // int i = printf("this string is: %s%p\\\\\t%x%d", "kola", "lalalal", 555555, 999);
  // printf("\n");
  // int x = ft_printf("this string is: %s%p\\\\\t%x%d", "kola", "lalalal", 555555, 999);

  // char *str = NULL; 
  // int i = printf ("%s", str);
  
  // printf("\n");
  
  // int x = ft_printf ("%s", str);

  
  printf("\nprintf return value: %d\n", x);
  printf("\nFT_printf return value: %d\n", i);

  
 // printf("\n printf_return value: %d\n ft_printf_return Value: %d\n", x, m);
    return 0;

}


