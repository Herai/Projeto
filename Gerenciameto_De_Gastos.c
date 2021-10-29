#include <stdlib.h>
#include <stdio.h>

float salario, Gastos[], SalarioFinal;
int Decisao, i ,j;


//Talvez Usar 2 Vetores,um para o gasto e outro para a Descrição
//E Posteriormente Usar BubbleSort para organizalos e Mostra-los Organizados no Final do Programa 


float Entrada(){
    printf("Ola,Por Favor Digite sua renda salarial: ");
    scanf("%f", &salario);
}

float Processo(){
    SalarioFinal = salario;

    for(i=0; i<5; i++){

        printf("Digite seu gasto: ");
         scanf("%f", &Gastos[i]);
         break;          
      }
        for(i=0; i<5; i++){
          printf("Seus gastos foram : \n%f", Gastos[i]);
        }
        
        /*if(SalarioFinal <= 500){

          for(j=0; j <1000; j++){

          printf("Seu gastos foram : %f", &Gastos[j]);

          break;

          }
        }*/
        //printf("Deseja inserir outro gasto? \n1- Sim \n2-Nao");
        //scanf("%f", &Decisao);
}


float Saida(){
for(i=0; i < 200; i++){
  printf("Seus gastos foram %f", &Gastos[i]);  
  }
}


int main(void){

Entrada();
Processo();

}