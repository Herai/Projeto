#include <stdio.h>
#include <locale.h>

    /*Ideias Projeto : Aplicação que calcula Primeiramente se o usuario esta com o peso ideal,se necessita emagrecer ou engordar e passar uma
    dieta para o usuario seguir dividida em café da manhã,almoço e janta tendo em parametros o quanto o usuario necessita para chegar em seu
    objetivo(Para deixar mais complexo,poderia pegar se o usuario é MesoMorfo,endomorfo ou ectomorfo) */

int Decisao1,NivelOcorrencia[];
char Ocorrencia[];

void menu(){
    for(int i=0; i<30; i++){
    printf("Deseja inserir uma solicitacao? \n1-Sim \n2-Nao \n");
    scanf("%i", &Decisao1);

    switch (Decisao1){
    case 1 :
        printf("Digite qual seria o Nivel da ocorrencia sendo \n1-Baixo \n3-Medio \n5-Alto \n");
        scanf("%i", &NivelOcorrencia[i]);
            printf("Digite Qual seria a ocorrencia \n\n");
            scanf("%s", &Ocorrencia[i]); 
            break;
    case 2 :
        for(int j=0; j<30; j++){
        printf("Segue Todas As Ocorrencia do dia de hoje %s", &Ocorrencia[i]);
        return 0;
            }
        }
    }
}

void Principal(){
    printf("Digite qual seria o Nivel da ocorrencia sendo \n1-Baixo \n3- Medio \n5-Alto");
        scanf("%i", &NivelOcorrencia);
}

int main(){

    menu();

    return 0;
}