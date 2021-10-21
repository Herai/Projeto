#include <stdio.h>
#include <locale.h>

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
            while(i<30){
                printf("Digite Qual seria a ocorrencia \n\n");
                scanf("%s", &Ocorrencia[i]); 
            }
            break;
    case 2 :

    return 0;

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