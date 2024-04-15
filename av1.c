#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void montyHall(void){
    int portaPremiada, portaEscolhida, portaVazia;
    char opcao;
  
    srand (time(NULL));
    portaPremiada = rand() % 3 + 1;
  
    printf("Escolha uma porta (1, 2 ou 3):\n");
    scanf("%d", &portaEscolhida);

    printf("A porta premiada e': %d\n", portaPremiada);
}

int main(){
    montyHall();

    return 0;
}