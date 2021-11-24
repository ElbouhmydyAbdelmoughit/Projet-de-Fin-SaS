/* Structure Pour cree un seul compte */
typedef struct 
{
    char CIN[10];
    char Nom[15];
    char Prenom[15];
    float Montant;
    
}Un_Compte;

/* Declaration des variables global */
 Un_Compte compte;

/* Fonction Pour Afficher Menu Principale */
void Menu();

/* Fonction Pour cree un seul compte */
void Cree_Compte();



 int Nombre_Operations,Choix,nbr,i;
 
 
#include <stdio.h>
int main()
{   
   int reut;
    do{
    
    
    /* Appel des fonctions */
    Menu();
    
    switch (Choix)
    {
        case 1:
	            Cree_Compte();
                
        
        
        case 2:
               
                printf("Donner Votre Nombre de Operations :\n");
				printf("1 : Retrait.\n2 : Depot.\n");
				scanf("%d",&Nombre_Operations);
				switch(Nombre_Operations)
				{
					case 1:
                    
				
					case 2:
                         
			    	
                }
        
        default:Menu();

    }

    printf("Return Menu principale :si OUI tapez 1,si NON tapez 0 ");
    scanf("%d",reut);
    
 }while (reut==1);
}
void Menu()
{
    
    
    printf("\n\n===== MENU PRINCIPALE ===== \n");
    printf(" 1- Creer un compte bancaire.\n");
    printf(" 2- Operations.\n");
    printf(" 3- Affichage.\n");
    printf(" 4- Fidelisation.\n");
    printf(" 5- Quitter l'application.\n");
    printf("Donner Votre Choix :\n");
    scanf("%d",&Choix);
}
    


void Cree_Compte()
{
            
            
                 printf("Donner les infomations de Compte  : \n");
				printf("Entrez votre CIN :\n\n");
				scanf("%s",compte.CIN);
				printf("Entrez votre Nom :\n");
				scanf("%s",compte.Nom);
				printf("Entrez votre Prenom :\n");
				scanf("%s",compte.Prenom);
				printf("Entrez votre Montant :\n");
				scanf("%f",&compte.Montant);
                printf("\nle CIN :%s\n le NOM :%s\nle PRENOM :%s\nle MONTANT :%f",compte.CIN,compte.Nom,compte.Prenom,compte.Montant);
            
            
    
               			
}













