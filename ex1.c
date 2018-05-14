#include <stdio.h>
int main (){
float num;
printf("Digite um número: ");
scanf("%f",&num);

printf("Você digitou %f \n", num);


if((int)num%2==0){
    printf("É Par, \n. Não é ímpar \n");
}
else{
    printf("Ímpar, \n. Não é par \n");
}

if(num>10){
    printf("O número é maior  que 10: %d \n");
}
else if (num<10){
    printf("O número não é menor que 10: %d \n");
}
else if (num==10){
    printf("O número é igual a 10: %d \n");
}

printf("O dobro de %f é %f \n", num, num*2);


if ((int)num%2==0){
printf("\n.O número é primo\n");
}else{
printf("\n. O numero não primo\n");
}
return (0);

}

