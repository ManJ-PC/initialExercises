#include <stdio.h>
int
main (void)
{
  int meses_ano;
  puts ("diz o mes em causa pelo seu ordinal");
  scanf ("%d", &meses_ano);
  if (meses_ano == 1)
    puts ("Janeiro = 31 dias");
  if (meses_ano == 2)
    puts ("Fevereiro = 28 dias");
  if (meses_ano == 3)
    puts ("Março = 31 dias");
  if (meses_ano == 4)
    puts ("Abril = 30 dias");
  if (meses_ano == 5)
    puts ("Maio = 31 dias");
  if ((meses_ano == 6))
    puts ("Junho = 31 dias");
  if (meses_ano == 7)
    puts ("Julho = 31 dias");
  if (meses_ano == 8)
    puts ("Agosto = 31 dias");
  if (meses_ano == 9)
    puts ("Setembro = 30 dias");
  if (meses_ano == 10)
    puts ("Outubro = 31 dias");
  if (meses_ano == 11)
    puts ("Novembro = 30 dias");
  if (meses_ano == 12)
    puts ("Dezembro = 31 dias");
  return 0;
}
