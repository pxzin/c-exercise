#include <stdio.h>

int main(){

  int numLinha = 0;
  int contaLinha = 1;
  printf("informe o numero da sequencia: ");
  scanf("%d",&numLinha);

  //se a linha/sequencia for maior que zero
  if(numLinha>0){
    //abre arquivo e prepara a linha
    FILE *f = fopen("valores.val", "r");
    char linha[256];
    
    //enquanto tiver linha pra ser lida
    while (fgets(linha, sizeof(linha), f)) {
      //se for a linha esperada
      if(contaLinha == numLinha){
        //printa a linha
        printf("%s", linha);
        //sai do looping
        break; 
      }
      contaLinha = contaLinha +1;
    }
    if(contaLinha < numLinha){
      printf("Sequencia nao encontrada");
    }
    //fecha arquivo
    fclose(f);
  }
  
  return 0;
}
