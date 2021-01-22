#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void addition(){

    float nombre1 = 0, nombre2 = 0;

    printf("entrez le premier nombre :");
    scanf("%f",&nombre1);
    printf("entrez le segond nombre : ");
    scanf("%f",&nombre2);

    printf("resultat : %f \n\n\n",nombre1 + nombre2);
}

void soustraction(){
    float nombre1 = 0, nombre2 = 0;

    printf("entrez le premier nombre :");
    scanf("%f",&nombre1);
    printf("entrez le segond nombre : ");
    scanf("%f",&nombre2);

    printf("resultat : %f \n\n\n",nombre1 - nombre2);
}

void division(){
    float nombre1 = 0, nombre2 = 0;

    printf("entrez le premier nombre :");
    scanf("%f",&nombre1);
    printf("entrez le segond nombre : ");
    scanf("%f",&nombre2);

    printf("resultat : %f \n\n\n",nombre1 / nombre2);
}

void multiplication(){
    float nombre1 = 0, nombre2 = 0;

    printf("entrez le premier nombre :");
    scanf("%f",&nombre1);
    printf("entrez le segond nombre : ");
    scanf("%f",&nombre2);

    printf("resultat : %f \n\n\n",nombre1 * nombre2);
}

void puissance(){
    float nombre1 = 0, nombre2 = 0, result = 1;
    printf("entrez le premier nombre :");
    scanf("%f",&nombre1);
    printf("entrez le segond nombre : ");
    scanf("%f",&nombre2);

    if(nombre2 == 0){
        printf("resultat : 1 \n\n\n");
    }
    else if(nombre2 > 0){

        for(int i = 0; i < nombre2; i++){
            result = result * nombre1;
        }

        printf("resultat : %f \n\n\n",result);
    }
    else if(nombre2 < 0){

        for(int i = 0; i > nombre2; i--){
            result = result * nombre1;
        }
        printf("resultat : %f \n\n\n", 1/result);
    }


}

void factorielle(){
    int nombre1 = 0;
    int result = 1;

    printf("entrez le nombre :");
    scanf("%d",&nombre1);

    while(nombre1 > 0){
        result = result * nombre1;
        nombre1--;
    }

    printf("resultat : %d \n\n\n", result);
}

void pgcd(){
    int nombre1 = 0;
    int nombre2 = 0;
    int pgcd = 0;
    int max = 0;

    printf("entrez le premier nombre :");
    scanf("%d",&nombre1);
    printf("entrez le segond nombre : ");
    scanf("%d",&nombre2);

    if(nombre1 > nombre2){
        max = nombre2;
    }
    else{
        max = nombre1;
    }

    for( int i = 1; i <= max; i++){
        if(nombre1%i == 0 && nombre2%i == 0){
            pgcd = i;
        }
    }

    printf("resultat : %d \n\n\n", pgcd);
}

void ppmc(){
    int ppmc = 0;
    int max = 0;
    int min = 0;
    int i = 1;
    int nombre1 = 0;
    int nombre2 = 0;

    printf("entrez le premier nombre :");
    scanf("%d",&nombre1);
    printf("entrez le segond nombre : ");
    scanf("%d",&nombre2);

    if(nombre1 < nombre2){
        max = nombre2;
        min = nombre1;
    }
    else{
        max = nombre1;
        min = nombre2;
    }

    ppmc = max;

    while(ppmc % min != 0){
        ppmc = max * i;
        i++;
    }

    printf("resultat : %d \n\n\n", ppmc);
}

int main()
{
    printf("********************* CALCULATRICE ***************************** \n\n\n\n");
    bool on = true;
    char operation ;
    char percent = '%';

    printf(" quelle operation voulez vous effectuez ? \n\n");
    printf("- LISTE \n\n");
    printf(".     + -> addition \n");
    printf(".     - -> soustraction \n");
    printf(".     / -> division \n");
    printf(".     * -> multiplication \n");
    printf(".     %c -> reste de la division \n", percent);
    printf(".     ^ -> puissance \n");
    printf(".     ! -> factorielle \n");
    printf(".     g -> PGCD \n");
    printf(".     p -> PPMC \n\n\n");
    printf(".     q -> pour fermer la clculatrice \n\n\n");


    while(on){
            printf(" votre choix d'operation : ");
            scanf("%c", &operation);

            switch (operation){

                // addition
                case '+':
                    addition();
                    break;

                //soustraction
                case '-':
                    soustraction();
                    break;

                //division
                case '/':
                    division();
                    break;

                //multiplication
                case '*':
                    multiplication();
                    break;

                //puissance
                case '^':
                    puissance();
                    break;

                //factorielle
                case '!':
                    factorielle();
                    break;

                //PGCD
                case 'g':
                    pgcd();
                    break;

                //ppmc
                case 'p':
                    ppmc();
                    break;

                //quitter
                case 'q':
                    on = false;
                    break;

                default:
                    printf("operation non reconnu \n\n\n");
                    break;
            }

    }

    return 0;
}


