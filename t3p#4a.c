#include <stdio.h>
int main (void)
#define TEMPERATURAS 5
{
  int n = 1, cBoa = 0, cMa = 0, cPess = 0, i = 0, soma=0;
  float media = 0, media2 = 0;
  while (i < TEMPERATURAS)	// 1ªentrada: automaticamente entrará no ciclo e. 2-Se não satisfazer nenhum dos if Hip1:virá com classae em branco  
    {
      scanf ("%d", &n);		// qdo desse um valor negativo sair do ciclo, e estudo é inconclusivo - parâmetros INDICES desconsiderados..
      if (n < 35 && n > 0)
		cBoa++;
      if (n > 35 && n < 65)
		++cMa;			// não está a considerar! (35<n<65)
      if (n > 65)
		cPess += 1;
      i++;
      media += (n - media) / i;
      soma = n + soma;
      //media=(media+n)/ i;
    }				// ou (cBoa + cMa + cPess) tinha de incluir o caso de ser invalido, ou seja, <0 e então c++
  media2 = soma / TEMPERATURAS;
  printf("QUALIDADE DO AR:%d :)'s,%d :/'s,%d :('s\n já a media vale\v %f\n\na media calculada pelos slides daria: %f\v está bem? \t a verificar...\n",cBoa, cMa, cPess, media,media2);
  if ((int) media2 == (int) media)
    puts ("Correct");
  else
    puts ("Incorrect");
}
