#include <stdlib.h>
#include <stdio.h>

float salario, Gastos[];
int Decisao, i;


//Talvez Usar 2 Vetores,um para o gasto e outro para a Descrição
//E Posteriormente Usar BubbleSort para organizalos e Mostra-los Organizados no Final do Programa 


float Entrada(){
    printf("Ola,Por Favor Digite sua renda salarial: ");
    scanf("%f", &salario);

    for(i=0; i<1000; i++){

        printf("Digite seu gasto: ");
        scanf("%f", &Gastos[i]);   

        printf("Deseja inserir outro gasto? \n1- Sim \n2-Nao");
        scanf("%f", &Decisao);

        if (Decisao == 1)
        {
            
        }
        
    }
    for(i=0; i < 200; i++)
    {
      printf("Seus gastos foram %f", &Gastos[i]);  
    }
}

int main(void){

Entrada();

}