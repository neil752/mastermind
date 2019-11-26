                          ////**////
///                     Travail entre aide
///     Jérémy FAIVRE   - Neil FEDDA - Nicolas Bauer
                          ///**////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 4 //initialisation de la taille max


int main() //emplacement de tout les programmes
{
int tabjoueur[TAILLE];
int nba[4]={0};
int i=0;
int j=0;

    rdmtab(nba);
    affichetab(nba);
    gagne(nba,tabjoueur);
    //while j<12 on fait un j+1 "tour" tant que le joueur cherche une rep , et si il y tour =12 on met perdue si il gagne il sort de la boucle
 while ( j<12 )
    { Jentree(tabjoueur);
      veripresque(nba,tabjoueur,j);
    j++;
    }
    printf("tu as perdu \n");


return 0;

}

void rdmtab (int nba[4])
{
    srand(time(NULL));//initialisation de la reponse avec un srand (time(NULL))

     for (int i =0 ;i<4;i++) //un for qui va faire en sorte à ce que la reponse contiendra 4 chiffres
     {

         nba[i] = rand()%9;    //entre 1-9

     }

}
//afficher la reponse..
void affichetab (int nba[4] ){

      for (int i=0;i<4;i++)

       { printf("%d",nba[i]);// teste affichage
       }
                             }
//entrée des nombre du joueur
void Jentree( int tabjoueur [TAILLE]){
int rep;
       printf(" Entrez une suite de 4 chiffres.\n");

       scanf("  %4d", &rep); //la reponse du joueur


        tabjoueur[0]=rep%10000/1000; //separation de la reponse en millieme, centieme, dizaine et unités  pour mieux les repartir dans un tableau à 4 cell
        printf("mille %d \n",tabjoueur[0]);
        tabjoueur[1]=rep%1000/100;
        printf("cent %d\n",tabjoueur[1]);
        tabjoueur[2]=rep%100/10;
        printf("dizaine %d\n",tabjoueur[2]);
        tabjoueur[3]=rep%10;
        printf("Unitee %d\n",tabjoueur[3]);

}
//verification du presque,parfait,non
void veripresque (int nba [4], int tabjoueur[TAILLE], int j){


for( int i=0;i<TAILLE;i++)  {
//for pour pas qu'il y aie une seul verification ensuite un grand if pour le "parfait" et ensuite à l'interieur un petit if pour le presque et
//l'écriture du "presque" ou "parfait" et le else du grand if ecris le "non"


   if ((nba[i]==tabjoueur[0])||(nba[i]==tabjoueur[1])||(nba[i]==tabjoueur[2])||(nba[i]==tabjoueur[3])){
      if (nba[i]==tabjoueur[i])
           {printf( "parfait \n");}
   else {printf( "presque \n");
}

}
   else {printf ("non \n") ;}

}
}

//la valeur de victoire sera fais facilement par un if avec un && si toute les cases sont "parfaites"
void gagne (int nba[4],int tabjoueur [TAILLE], int j){

    if ((nba[0]==tabjoueur[0])&&(nba[1]==tabjoueur[1])&&(nba[2]==tabjoueur[2])&&(nba[3]==tabjoueur[3]))

    {printf( "bravo à vous 8V \n");}

}



