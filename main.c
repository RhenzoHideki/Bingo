#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randomizar(){
    return rand() % 99+0;
}

struct bingo {
    int jogadores;
    int cartela[5][5];
}jogo,*aux;


void func_cartela(struct bingo *aux1){
    int x=0,y=0;
    while(5>x){
        y=0;
        while(5>y){
            aux1->cartela[x][y]=randomizar();
            y++;
        }
        x++;
    }

}


int main() {
    aux= &jogo;
    int a=0;

    
    printf("Digite o numero de jogadores:\n->");
    scanf("%d",&jogo.jogadores);

    srand(time(NULL));

    while(aux->jogadores>=a){
        func_cartela(aux->cartela);
        a++;
    }

    return 0;
}
