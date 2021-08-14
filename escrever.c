#include <stdio.h>
#include <string.h>
// Pede para informar número
float pedeNumero(){

  float num = 0;
  printf("informe um numero: ");
  scanf("%f",&num);
  return num;
}

int main(){
  // inicia sequencia
  int seq  = 1;
  float num = pedeNumero();
  //abre arquivo
  FILE *f = fopen("valores.val", "w");
  //enquanto usuário não informar 0
  while ( num != 0)
  {
    //escreve no arquivo
    fprintf(f,"%d %.1f\n",seq,num);
    //incrementa sequencia
    seq = seq+1;
    //pede o numero novamente
    num = pedeNumero();
  }
  //fecha arquivo
  fclose(f);
  return 0;
  
}


