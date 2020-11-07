#include <stdio.h>
int main(){
  int x,n, soma = 0, n1=0, mult;

  scanf("%d" ,&x);
  scanf("%d" ,&n);

  while (n != 0){
    if( x < n){
      soma += n;
    }
    n1 = n;
    scanf("%d",&n);
  }

  if(soma == 0){
    if (x%n1 == 0){
      printf("o %d e multiplo de %d\n\n",x,n1);
    }
    else 
      printf("o %d nao e multiplo de %d\n\n",x,n1);
  }
  else
    printf("soma: %d\n\n",soma);
    
    return 0;
}

