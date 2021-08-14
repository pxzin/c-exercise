#include <stdio.h>

int main(){
  //abre arquivo e prepara a linha
  FILE *f = fopen("valores.val", "r");
  char linha[256];

  //enquanto tiver linha pra ser lida
  while (fgets(linha, sizeof(linha), f)) {
    //printa a linha
    printf("%s", linha); 
  }

  //fecha arquivo
  fclose(f);
  return 0;
}
