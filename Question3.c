#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char Placa[10];
    char dayWeek[30];

    scanf("%s", Placa);
    scanf("%s", dayWeek);

    //for (int i = 0; i < strlen(dayWeek); i++) {
   //     dayWeek[i] = toupper(dayWeek[i]);
   // }

    if ((strlen(Placa) == 8 && Placa[3] == '-' && isalpha(Placa[0]) && isalpha(Placa[1]) && isalpha(Placa[2]) && isdigit(Placa[4]) && isdigit(Placa[5]) && isdigit(Placa[6]) && isdigit(Placa[7])) ||
        (strlen(Placa) == 7 && isalpha(Placa[0]) && isalpha(Placa[1]) && isalpha(Placa[2]) && isdigit(Placa[3]) && isalpha(Placa[4]) && isdigit(Placa[5]) && isdigit(Placa[6]))) {

            char ultimo = Placa[strlen (Placa)-1];
            
        if (strcmp(dayWeek, "SEGUNDA-FEIRA") == 0) {
            if (ultimo == '0' || ultimo == '1') {
                printf("%s nao pode circular segunda-feira\n", Placa);
            } else {
                printf("%s pode circular segunda-feira\n", Placa);
            }
        } else if (strcmp(dayWeek, "TERCA-FEIRA") == 0) {
            if (ultimo == '2' || ultimo == '3') {
                printf("%s nao pode circular terca-feira\n", Placa);
            } else {
                printf("%s pode circular terca-feira\n", Placa);
            }
        } else if (strcmp(dayWeek, "QUARTA-FEIRA") == 0) {
            if (ultimo == '4' || ultimo == '5') {
                printf("%s nao pode circular quarta-feira\n", Placa);
            } else {
                printf("%s pode circular quarta-feira\n", Placa);
            }
        } else if (strcmp(dayWeek, "QUINTA-FEIRA") == 0) {
            if (ultimo == '6' || ultimo == '7') {
                printf("%s nao pode circular quinta-feira\n", Placa);
            } else {
                printf("%s pode circular quinta-feira\n", Placa);
            }
        } else if (strcmp(dayWeek, "SEXTA-FEIRA") == 0) {
            if (ultimo == '8' || ultimo == '9') {
                printf("%s nao pode circular sexta-feira\n", Placa);
            } else {
                printf("%s pode circular sexta-feira\n", Placa);
            }
        } else if (strcmp(dayWeek, "SABADO") == 0 || strcmp(dayWeek, "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        } 
        else {
            printf("Dia da semana invalido\n");

        }
    } else {
        printf("Placa invalida\n");
        if( strcmp(dayWeek,"SEGUNDA-FEIRA" ) != 0 &&
        strcmp(dayWeek,"TERCA-FEIRA" ) != 0 &&
        strcmp(dayWeek,"QUARTA-FEIRA" ) != 0 &&
        strcmp(dayWeek,"QUINTA-FEIRA" ) != 0 &&
        strcmp(dayWeek,"SEXTA-FEIRA" ) != 0 &&
        strcmp(dayWeek,"SABADO" ) != 0 &&
        strcmp(dayWeek,"DOMINGO" ) != 0 
        ) {
            printf("Dia da semana invalido\n");
        }
    }

    return 0;
}