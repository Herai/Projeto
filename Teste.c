#include <stdio.h>
#include <stdlib.h>

int choose = 1;
int salario, salarioTotal, gasto[];

void Entrada(){
do{
    printf("Deseja iniciar o programa:\n \n1-Sim \n2-Nao \n");
    scanf("%i", &choose);

    D1();
    D2();

    } while (choose == 1);
}

void D1(){
    
    printf("Digite seus salario: ");
    scanf("%i", &salario);

    for (int i = 0; i < 2; i++)
    {
        printf("Digite seu gasto: ");
        scanf("%i", &gasto[i]);

    }   
    /*while (salarioTotal < salario)
    {
        
    }*/
}

void D2(){

    for (int i = 0; i < 2; i++)
    {
        printf("\nSeus Gastos Foram:\n %i", &gasto[i]);
    }
}

int main(void){

Entrada();

}