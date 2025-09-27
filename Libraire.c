#include <stdio.h>
#include <string.h>

// declarer la structure
 typedef struct {
    char Titre[20];
    char  Auteur[20];
   float   Prix;
    int QuantiteStock;
}Livre;


Livre  livres[100] ;
int nbrLivres=0;


//prototype
void AjouterLivre();
void menu();
void AfficherLivre();
void SupprimerLivre();

 //function de menu..............................................
void menu (){
int choix;
printf("1-Ajouter livre\n");
printf("2-Afficher les livres  \n");
printf("3-Modifier  la quntite de stock de livre \n");
printf("4-Supprimer un livre \n");
printf("5-Aficher le nombre total de livre en stock \n");



do{
    printf("entrer un choix: ");
    scanf("%d",&choix);

}while (choix !=1 && choix!=2 );
 
switch(choix){
    case 1:AjouterLivre() ;break;
    case 2:AfficherLivre();break;
    case 3:AjouterLivre() ;break;
    //case 4:AfficherLivre();break;

}
}

 // Ajouter livre ..............................................
 void AjouterLivre(){
        printf("entrer le titre de livre \n");
       scanf("%s", livres[nbrLivres].Titre);


        printf("entrer le nom de l'auteure: \n");
        scanf(" %[^\n]", livres[nbrLivres].Auteur);

        printf("entrer le prix de livre: \n ");
        scanf("%f", &livres[nbrLivres].Prix);

        printf("entrer la quantite de stock: \n");
        scanf("%d", &livres[nbrLivres].QuantiteStock);
        (nbrLivres)++;
        getchar();
        getchar();
     
        menu();
  
 }
 // pour afficher les livres ..............................................
 void  AfficherLivre(){
   
      for ( int i = 0; i < nbrLivres; i++) {
        printf("Livre %d -> Titre: %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",
               i+1, livres[i].Titre, livres[i].Auteur, livres[i].Prix, livres[i].QuantiteStock);
              
      }
        getchar();
        getchar();

        menu();
      }
//pour supprimer un livre 
void SupprimerLivre( ){
  
  char titreL ;
printf("entrer le titre de livre que tu veaux le supprimer ");
scanf("%s",&titreL);
for( int i=0;i<100;i++){
if (strcmp(titreL,livres[i].Tite)==0)
 livres[i]=livres[i+1];
}





}




int main(){
  

    menu();
    //SupprimerLivre( )
    //AjouterLivre();
   //AfficherLivre();
    return 0;
  
}
      

    



