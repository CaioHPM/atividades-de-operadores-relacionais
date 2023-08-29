#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num1, num2, num3, maior, meio, menor;

    printf("Digite 3 valores:");
    scanf("%d %d %d", &num1, &num2, &num3);

    getchar();

    if ((num1 > num2) && (num1 > num3)){
        maior = num1;
    }
    else if ((num2 > num1) && (num2 > num3)){
        maior = num2;
    }
    else if ((num3 > num2) && (num3 > num1)){
        maior = num3;
    }


    if ((num1 < num2) && (num1 < num3)){
        menor = num1;
    }
    else if ((num2 < num1) && (num2 < num3)){
        menor = num2;
    }
    else if ((num3 < num2) && (num3 < num1)){
        menor = num3;
    }
    

    meio = (num1 + num2 + num3) - (maior + menor);

    printf("Na ordem do menor para o maior fica:%d, %d, %d", menor, meio, maior);






    return 0;
}