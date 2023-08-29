#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num1, num2, num3, num4, maior, menor;

    printf("Digite 4 valores diferentes:");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    getchar();

    if ((num1 > num2) && (num1 > num3) && (num1 > num4)){
        maior = num1;
    }
    else if ((num2 > num1) && (num2 > num3) && (num2 > num4)){
        maior = num2;
    }
    else if ((num3 > num2) && (num3 > num1) && (num3 > num4)){
        maior = num3;
    }
    else if ((num4 > num2) && (num4 > num3) && (num4 > num1)){
        maior = num4;
    }
    
    if ((num1 < num2) && (num1 < num3) && (num1 < num4)){
        menor = num1;
    }
    else if ((num2 < num1) && (num2 < num3) && (num2 < num4)){
        menor = num2;
    }
    else if ((num3 < num2) && (num3 < num1) && (num3 < num4)){
        menor = num3;
    }
    else if ((num4 < num2) && (num4 < num3) && (num4 < num1)){
        menor = num4;
    }


    printf("O maior numero e %d, e o menor e %d", maior, menor);


    return 0;
}