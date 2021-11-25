/* Structure Pour cree un compte */
typedef struct 
{
    char CIN[10];
    char Nom[15];
    char Prenom[15];
    float Montant;
    
}Un_Compte;


/* Declaration des variables global */
 Un_Compte compte[100];

/* Fonction Pour Afficher Menu Principale */
void Menu();
/* Fonction Pour cree un seul compte */
void Cree_Compte();
/* Fonction de Recherche */
void recherche();



  
 
 
 
 
#include <stdio.h>
#include <windows.h>
#include <string.h>

 int nbr,VR,affichage,Vquitter,i,j,temp,Nombre_Operations,Choix,dh;

int main()
{
     Menu();
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
    switch (Choix)
    {
        case 1:
	            Cree_Compte();
        
                printf("\nPour Reteur le Menu Principal Tapez 1 Pour Quitter Programme Tapez 2 : \n");
                scanf("%d",&VR);
                if(VR==1)
                {
                    Menu();
                }
                else 
                {
                    printf("Merci");
                    system("cls");
                }
               

        break;
        
        case 2:
                printf("Donner Votre Nombre de Operations :\n");
				printf("1 : Retrait.\n2 : Depot.\n");
				scanf("%d",&Nombre_Operations);
				switch(Nombre_Operations)
				{
					case 1:
                           
                            recherche();
                            if (temp == 1)
                            {
                                printf("entrez un Montant de retrait ");
                                scanf("%f",&dh);
                                if (dh > compte[nbr].Montant)
                                {
                                    printf("");
                                }
                                else
                                {
                                    compte[nbr].Montant -= dh;
                                    printf("le Montant apres le retrait est :"compte[nbr].Montant);
                                }
                                
                            }
                    break;
				
					case 2:
                    break;     
			    }   	
        break;    
        case 3:
                 printf("1 : Par Ordre Ascendant.\n2 : Par Ordre Descendant. \n3 : Recherche par CIN.");
                    printf("Donner Votre Nombre d'affichage :\n");
                    scanf("%d",&affichage);
                    
                switch (affichage)
                {
                   
                    case 1: 
                           for ( i = 0; i < nbr; i++)
                           {
                               for ( j = i+1; j < nbr; j++)
                               {
                                   if (compte[i].Montant > compte[j].Montant)
                                   {
                                             temp = compte[i].Montant;
                                             compte[i].Montant = compte[j].Montant;
                                             compte[j].Montant = temp;
                                   }
                                   
                               }
                               for ( i = 0; i < nbr; i++)
                               {
                                   printf("%f",compte[i].Montant);
                               }
                               
                            
                               
                           }
                           
                    break;
                    case 2:

                    break;
                    case 3:

                    break;
                   
                }
        break;  
        case 4:

        break;  
        case 5:
               system("cls");
        break;    
        default:Menu();

    }

}
    


void Cree_Compte()
{
    printf("Donner le nombre des comptes :\n");
    scanf("%d",&nbr);
    for (int i=1;i<=nbr;i++)
    {
        printf("Donner les infomations de Compte %d : \n",i);
        printf("Entrez votre CIN :\n\n");
        scanf("%s",compte[i].CIN);
        printf("Entrez votre Nom :\n");
        scanf("%s",compte[i].Nom);
        printf("Entrez votre Prenom :\n");
        scanf("%s",compte[i].Prenom);
        printf("Entrez votre Montant :\n");
        scanf("%f",&compte[i].Montant);
        printf("\nle CIN :%s\n le NOM :%s\nle PRENOM :%s\nle MONTANT :%f",compte[i].CIN,compte[i].Nom,compte[i].Prenom,compte[i].Montant);
    
    }

}

void recherche()
{
    char CN[15];
    int temp;
    printf("Donnerr votre CIN :\n");
    scanf("%s",CN);
    for ( i = 0; i < nbr; i++)
    {
        if (strcmp(compte[nbr].Montant,CN)==0)
        {
            temp = 1;
        }
        if (temp == 1)
        {
            printf("%s %s %s %.2f DH \n",compte[i].CIN,compte[i].Nom,compte[i].Prenom,compte[i].Montant);
        }
        else
        printf("COMPTE INTROUVABLE \n");
        
        
    }
    
}

   













