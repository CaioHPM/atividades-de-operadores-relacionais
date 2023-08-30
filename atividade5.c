#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num, resposta;

    printf("Digite um valor:");
    scanf("%d", &num);

    getchar();

    if (num == 5){
        resposta = num;
        printf("Numero %d", resposta);
    }
    else if (num == 200){
        resposta = num;
        printf("Numero %d", resposta);
    }
    else if(num == 400){
        resposta = num;
        printf("Numero %d", resposta);
    }
    else if((num >= 500) && (num <= 1000)){
        printf("Entre 500 e 1000");
    } 
    else{
        printf("Fora dos escopos!");
    }











    return 0;
}