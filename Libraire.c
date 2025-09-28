#include <stdio.h>
#include <string.h>
// declarer la structure
 typedef struct {
    char Titre[20];
    char  Auteur[20];
   float  Prix;
    int QuantiteStock;
}Livre;
Livre  livres[100] ;
int nbrLivres=0;

//prototype
void Modifquantite ();
void AjouterLivre();
void menu();
void AfficherLivre();
void SupprimerLivre();
void CalcLivreStock();
 //function de menu......................................................


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

}while (choix !=1 && choix!=2 && choix!=3 && choix!=4 && choix!=5);
 
switch(choix){
    case 1:AjouterLivre() ;break;
    case 2:AfficherLivre();break;
    case 3:Modifquantite() ;break;
    case 4:SupprimerLivre();break;
    case 5:CalcLivreStock();break;
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
        nbrLivres++;
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
    int trouve = 0;
  char titreL[50]; ;
printf("entrer le titre de livre que tu veaux le supprimer ");
scanf("%s",titreL);
for( int i=0;i<nbrLivres;i++){
if (strcmp(titreL,livres[i].Titre)==0){
for (int j = i; j < nbrLivres - 1; j++) {
      livres[j] = livres[j + 1];
}
    nbrLivres--;
    trouve=1;  
    break;  
      
}
}
if (trouve){
  printf("la suppression en succses");
   getchar();
   getchar();
   menu(); 
}else{
  printf("le livre est  introuvable");
  getchar();
  getchar();
   menu(); 
}
}
//modifier la quantite de stock ..........................................
void Modifquantite (){
  char titreL[50];
  int nvQuantite ;
  int i;
  int modif=0;

  printf ("entrer le titre de livre que tu peut le modifier  ");
  scanf("%s",titreL);
  printf("entrer la nouvelle quntite ");
  scanf("%d",&nvQuantite);
  for (i=0;i<nbrLivres;i++){
    if(strcmp(titreL,livres[i].Titre)==0){
      
           livres[i].QuantiteStock=nvQuantite;
           modif=1;
          getchar();
          getchar();
          menu(); 
  }

}
if (modif){
    printf("modification en succes\n");
   
     getchar();
   getchar();
   menu(); 
}else{
    printf(" ce livre est introuvable\n");
  getchar();
   getchar();
   menu(); 
}
}
//calculer le nombre de livres en stock ....................................
  void CalcLivreStock(){
    int count=0;
    for ( int i=0;i<nbrLivres;i++){
      if(nbrLivres==0 ){
        printf("pas des livres disponibles ");
        getchar();
        getchar();
        menu();
      }else{
        printf ("%d", nbrLivres) ;
        getchar();
        getchar();
        menu();
      }
     

       
    }
  }


int main(){
  

    menu();
    //SupprimerLivre()
    //AjouterLivre();
   //AfficherLivre();
    return 0;
  
}


