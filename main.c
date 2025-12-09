#include <stdio.h>
#include <stdlib.h>

int choperation, choperation2;
float nombreEntre, resultat;

void menu(void); // prototype

void menu(void)
{
    printf(" === Convertisseur ===\n");
    printf("1. Kilometres <--> Miles\n");
    printf("2. Degres Celcius <--> Degre Fahreinheit\n");
    printf("3. Euros <--> Dollars\n");
    printf("4. Kilogrammes <--> Livre (lb)\n");
    printf("5. Quitter \n");
    printf("Choisir le numero d'une operation : ");
    scanf("%d", &choperation);
    printf("\n\n");

    while (choperation > 5 || choperation < 1){
            printf("ERREUR : Le numero n'est pas entre 1 et 5 !\n");
            printf("Reessayer : ");
            scanf("%d", &choperation);
        }

}

int main(int argc, char *argv[])
{
    menu();
    while (choperation != 5)
    {
        switch(choperation)
        {
            // operation 1 kilometres en miles et miles en kilometres
            case 1:
                printf("1. Kilometre en Miles\n");
                printf("2. Miles en Kilometres\n");
                printf("3. Retour au menu\n");
                printf("Choisir le numero d'une sous - operation : ");
                scanf("%d", &choperation2);

                while (choperation2 >= 4|| choperation2 < 1)
                {
                    printf("ERREUR : Le numero n'est pas entre 1 et 3 !\n");
                    printf("Reessayer : ");
                    scanf("%d", &choperation2);
                }
                if (choperation2 == 1)
                {
                    printf("Entrer le nombre de kilometres : ");
                    scanf("%f", &nombreEntre);
                    resultat = nombreEntre * 0.621371;
                    printf("%.2f kilometres est egal a %.2f miles \n\n\n", nombreEntre, resultat);
                    menu();
                }
                else if (choperation2 == 2)
                    {
                    printf("Entrer le nombre de miles : ");
                    scanf("%f", &nombreEntre);
                    resultat = nombreEntre * 1.60934;
                    printf("%.2f miles est egal a %.2f kilometres\n\n\n", nombreEntre, resultat);
                    menu();
                    }
                else
                {
                    printf("\n\n\n");
                    menu();
                }
                break;

            // operation 2 celcius en farhenheit et farhenheit en celcius
            case 2:
                printf("1. Degre celcius --> Farhrenheit\n");
                printf("2. Farhrenheit --> Degree celcius\n");
                printf("3. Retour au menu\n");
                printf("Entrer le chiffre d'une sous operation : ");
                scanf("%d", &choperation2);

                while (choperation2 >= 4| choperation2 < 1)
                {
                    printf("ERREUR : Le numero n'est pas entre 1 et 3 !\n");
                    printf("Reessayer : ");
                    scanf("%d", &choperation2);
                }
                if (choperation2 == 1)
                {
                    printf("Entrer le nombre de degree celcius : ");
                    scanf("%f", &nombreEntre);
                    resultat = (nombreEntre * (9/5)) + 32;
                    printf("%.2f est egal a %.2f degree farhenheit\n\n\n", nombreEntre, resultat);
                    menu();
                }
                else if (choperation2 == 2)
                {
                    printf("Entrer le nombre de degree farhenheit : ");
                    scanf("%f", &nombreEntre);
                    resultat = (nombreEntre - 32) * 5/9;
                    printf("%.2f est egal a %.2f degree celcius \n\n\n", nombreEntre, resultat);
                    menu();
                }
                else
                {
                    printf("\n\n\n");
                    menu();
                }
                break;

            // operation 3 : euros en dollars et dollars en euros
            case 3:
                printf("1. Euros en dollars \n");
                printf("2. Dollars en euros\n");
                printf("3. Retour au menu\n");
                printf("Choisir le numero d'une sous - operation : ");
                scanf("%d", &choperation2);

                while (choperation2 >= 4|| choperation2 < 1)
                {
                    printf("ERREUR : Le numero n'est pas entre 1 et 3 !\n");
                    printf("Reessayer : ");
                    scanf("%d", &choperation2);
                }
                if (choperation2 == 1)
                {
                    printf("Entrer le nombre d'euros : ");
                    scanf("%f", &nombreEntre);
                    resultat = nombreEntre * 1.16;
                    printf("%.2f euros est egal a %.2f dollars \n\n\n", nombreEntre, resultat);
                    menu();
                }
                else if (choperation2 == 2)
                    {
                    printf("Entrer le nombre de dollars: ");
                    scanf("%f", &nombreEntre);
                    resultat = nombreEntre * 0.86;
                    printf("%.2f dollars est egal a %.2f euros\n\n\n", nombreEntre, resultat);
                    menu();
                    }
                else
                {
                    printf("\n\n\n");
                    menu();
                }
                break;

                // operation 4 : kilogrammes en livres et livres en kilogrammes
            case 4:
                printf("1. Kilogrammes (kg) en livres (lb) \n");
                printf("2. Livres (lb) en kilogrammes(kg) \n");
                printf("3. Retour au menu\n");
                printf("Choisir le numero d'une sous - operation : ");
                scanf("%d", &choperation2);

                while (choperation2 >= 4|| choperation2 < 1)
                {
                    printf("ERREUR : Le numero n'est pas entre 1 et 3 !\n");
                    printf("Reessayer : ");
                    scanf("%d", &choperation2);
                }
                if (choperation2 == 1)
                {
                    printf("Entrer le nombre de kilogrammes: ");
                    scanf("%f", &nombreEntre);
                    resultat = nombreEntre * 2.20462262185;
                    printf("%.2f kilogrammes est egal a %.2f livres (lb) \n\n\n", nombreEntre, resultat);
                    menu();
                }
                else if (choperation2 == 2)
                    {
                    printf("Entrer le nombre de livres: ");
                    scanf("%f", &nombreEntre);
                    resultat = nombreEntre / 2.205;
                    printf("%.2f livres est egal a %.2f kilogrammes\n\n\n", nombreEntre, resultat);
                    menu();
                    }
                else
                {
                    printf("\n\n\n");
                    menu();
                }
                break;
        }

    }
    if (choperation == 5)
    {
        printf("Merci d'avoir utilise Convertisseur !\n");
        printf("Au revoir !");
        exit(0);
    }
    return 0;
}

