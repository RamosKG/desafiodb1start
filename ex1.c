#include <stdio.h>
int main (){
float num;
printf("Digite um n�mero: ");
scanf("%f",&num);

printf("Voc� digitou %f \n", num);


if((int)num%2==0){
    printf("� Par, \n. N�o � �mpar \n");
}
else{
    printf("�mpar, \n. N�o � par \n");
}

if(num>10){
    printf("O n�mero � maior  que 10: %d \n");
}
else if (num<10){
    printf("O n�mero n�o � menor que 10: %d \n");
}
else if (num==10){
    printf("O n�mero � igual a 10: %d \n");
}

printf("O dobro de %f � %f \n", num, num*2);


if ((int)num%2==0){
printf("\n.O n�mero � primo\n");
}else{
printf("\n. O numero n�o primo\n");
}
return (0);

}

