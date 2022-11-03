#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>


int main(void){

    char comando[9] = "cor ";
    char cores[2];

    setlocale(LC_ALL,"Portuguese");// serve para colocar acentos nas palavras etc...//
    SetConsoleTitle("controlando cores com system");

    printf("_____________________________________________________\n");
    printf("|----------------------------------------------------|\n");
    printf("|        #APRENDENDO# #LINGUAGEM# C                  |\n");
    printf("|____________________________________________________|\n");
    printf("|             TABELA DE CORES:                       |\n");
    printf("|----------------------------------------------------|\n");
    printf("|             COM SYSTEM                             |\n");
    printf("|----------------------------------------------------| \n");
    printf("|\t0 ------ PRETO\t8 ------  Cinza              |\n");
    printf("|\t1 ------ Azul \t9 ------ Azul Claro          |\n");
    printf("|\t2 ------ verde\tA ------ Verde Claro         |\n");
    printf("|\t3 ------ Verde-Agua\tB - Verde agua claro |\n");
    printf("|\t4 ------ vermelho\tc --- vermelho claro |\n");
    printf("|\t5 ------ Roxo\tD     --- Lilás             |\n");
    printf("|\t6 ------ Amarelo\tE  --- Amarelo Claro |\n");
    printf("|\t7 ------ Branco\tF   --- Branco Brilhante     |\n");
    printf("|                                                    |\n");
    printf("|____________________________________________________|\n");


	system("pause");
    system("cls");




}
