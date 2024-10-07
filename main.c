#include<stdio.h>
int main(){
    int altura;
    int peso;
    int imc;
    printf("Digite seu peso");
    scanf("&d", &peso);
    printf("qual sua altura em cm");
    scanf("%d", &altura);
    imc = peso / (altura * altura);
    printf ("%d", imc);

}
