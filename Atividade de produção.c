//Caroline-Ciattei
#include <stdio.h>

void main(){
    char nome[] = "Caroline ciattei soupiquet roale martins";
    char curso[] = "ADS";
    char universidade[] = "Unilasalle-RJ";
    int matricula = 202211298;
    printf("nome = %s curso = %s universidade = %s matrícula = %d",nome, curso,universidade, matricula);
    char opçao[] = "soma, subtraçao , divisao, multiplicaçao, raiz quadrada , potencia ";
    printf("Qual foi sua operação escolhida?    ");
    scanf("%s", &opçao);
    printf("opcao: %s /n" ,opcao);
};