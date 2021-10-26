
#include<stdio.h>
//#include<math.h>
//#include<limits.h>
//#include<float.h>
//#include<string.h>
//#include<ctype.h>
//#include<stdlib.h>
//#include<time.h>


int tab[5];
int size = 100;

void msg();
void saisie();
void moy();
void M_supp();
void m_supp();
void add_val();

void main(){
    msg();
}

void msg(){

    char selec;

    printf("A- Saisie et affichage\n"
            "B- Moyenne\n"
            "C- Suppression du Max et affichage\n"
            "D- Suppression du Min et affichage\n"
            "E- Ajout d un entier a une position donnee\n"
            "Q- Quitter\n\n");


    while(selec!='Q'){
        printf("Selectionnez la fonction souhaite : ");
        scanf(" %c", &selec);
        printf("Votre choix est : %c\n\n", selec);

        switch(selec){
            case 'A': saisie(); break;
            case 'B': moy(); break;
            case 'C': M_supp(); break;
            case 'D': m_supp(); break;
            case 'E': add_val(); break;
            case 'Q': quit(); break;
        }
        printf("\n\nA- Saisie et affichage\n"
            "B- Moyenne\n"
            "C- Suppression du Max et affichage\n"
            "D- Suppression du Min et affichage\n"
            "E- Ajout d un entier a une position donnee\n"
            "Q- Quitter\n\n");
    }
}

void saisie(){

    printf("Entrer la taille du tableau : ");
    scanf("%d", &size);

    printf("Veuillez saisir votre tableau : \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &tab[i]);
    }
    printf("Votre tableau est : ");
    for(int i = 0; i < size; i++){
        printf("%d ", tab[i]);
    }
}

void moy(){
    float m;

    for(int i = 0; i < size; i++){
        m = m + tab[i];
    }
    printf("Voici votre moyenne %.2f", m/4);
}

void M_supp(){
    int num_max = tab[0];
    int indiceP = 0;

    int temp;

    for(int i = 0; i < size; i++){
        if(tab[i] > num_max){
            num_max = tab[i];
            indiceP = i;

            temp = tab[0];
            tab[0] = tab[indiceP];
            tab[indiceP] = temp;
        }
    }

    printf("Le nouveau tableau est :");

    size = size-1;

    for(int i = 0; i < size; i++){
        tab[i] = tab[i+1];
        printf(" %d", tab[i]);
    }
}

void m_supp(){
    int num_min = tab[0];
    int indiceP = 0;

    int temp;

    for(int i = 0; i < size; i++){
        if(tab[i] < num_min){
            num_min = tab[i];
            indiceP = i;

            temp = tab[0];
            tab[0] = tab[indiceP];
            tab[indiceP] = temp;
        }
    }

    printf("Le nouveau tableau est : ");

    size = size-1;

    for(int i = 0; i < size; i++){
        tab[i] = tab[i+1];
        printf(" %d", tab[i]);
    }
}

void add_val(){

    int pos_val, new_val;


    printf("Entrez la position de votre nouvelle valeur (la premiere valeur commence a 0) : ");
    scanf("%d", &pos_val);

    printf("Entrez la valeur a inserer: ");
    scanf("%d", &new_val);

    for (int i = size - 1; i >= pos_val - 1; i--){
        tab[i+1] = tab[i];
    }

    tab[pos_val-1] = new_val;

    printf("Le nouveau tableau est : ");

    for (int i = 0; i <= size; i++){
        printf("%d ", tab[i]);
    }
}

void quit(){
    system("quit");
}

