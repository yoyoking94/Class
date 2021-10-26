#include<stdio.h>
//#include<math.h>
//#include<limits.h>
//#include<float.h>
//#include<string.h>
//#include<ctype.h>
#include<stdlib.h>
//#include<time.h>


int time = 3 ;



struct Teacher{
    char nom_pren[40];
    char nom[20];
    char pren[20];
    int NH[3];
};

struct Teacher teachers[];

void main(){
    msg();
}

void msg(){

    char selec;

    printf("A- Saisie et affichage\n"
            "B- Affichage\n"
            "C- Modifier et affichage\n"
            "D- Tri et affichage\n"
            "Q- Quitter\n\n");


    while(selec!='Q'){
        printf("Selectionnez la fonction souhaite : ");
        scanf(" %c", &selec);
        printf("Votre choix est : %c\n\n", selec);

        switch(selec){
            case 'A': saisie(); break;
            case 'B': affichage(); break;
            case 'C': modif(); break;
            case 'D': tri(); break;
            case 'Q': quit(); break;
        }
        printf("\n\nA- Saisie et affichage\n"
            "B- Affichage\n"
            "C- Modifier et affichage\n"
            "D- Tri  et affichage\n"
            "Q- Quitter\n\n");
    }
}
void saisie(){
    for(int i = 0; i < time; i++){

        printf("Entrer le prenom de l'enseignant : ");
        scanf("%s", teachers[i].pren);
        printf("L'enseingnant porte le nom : %s\n", teachers[i].pren);

        printf("Entrer le nom de l'enseignant : ");
        scanf("%s", teachers[i].nom);
        printf("L'enseingnant porte le nom : %s\n", teachers[i].nom);

        printf("Entrer le nombre d'heure par module de l'enseignant : ");
        scanf("%s", teachers[i].NH);
        printf("L'enseingnant a %sh par modules\n\n", teachers[i].NH);
    }
}

void affichage(){
    printf("Les enseignants sont : \n");
    for(int i = 0; i < time; i++){
        printf("%s %s ", teachers[i].pren , teachers[i].nom);
        printf("et a %sh par module\n",teachers[i].NH);
    }
}

void modif(){
    int index;
    printf("Entrer l'index souhaite : ");
    scanf("%d", &index);
    printf("L'enseignants selectionner est : ");
    printf("%s %s %s\n\n", teachers[index].pren, teachers[index].nom, teachers[index].NH);

    printf("Entrer le prenom de l'enseignant : ");
    scanf("%s", teachers[index].pren);
    printf("L'enseingnant porte le nom : %s\n", teachers[index].pren);

    printf("Entrer le nom de l'enseignant : ");
    scanf("%s", teachers[index].nom);
    printf("L'enseingnant porte le nom : %s\n", teachers[index].nom);

    printf("Entrer le nombre d'heure par module de l'enseignant : ");
    scanf("%s", teachers[index].NH);
    printf("L'enseingnant a %sh par modules\n\n", teachers[index].NH);

    printf("le nouveau enseignant est %s %s ", teachers[index].pren , teachers[index].nom);
    printf("et a %sh par module\n",teachers[index].NH);
}

void tri(){
    struct Teacher temp;

    for(int i = 0; i < time - 1; ++i){
        for(int j = i + 1; j < time; ++j){
            if(strcmp(teachers[i].pren, teachers[j].pren) > 0){
                temp = teachers[i];
                teachers[i] = teachers[j];
                teachers[j] = temp;
            };
        }
    }

    affichage();
}

void quit(){
    system("quit");
}

