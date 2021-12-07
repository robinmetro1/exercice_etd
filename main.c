#include <stdio.h>
#include <stdlib.h>
#include"etudiant.h"
int main()

{
    typedef struct etudiant ETUDIANT;
    ETUDIANT etdtab;
    int NbEtd;
    printf("saisir nombre des etudiants :");
    scanf("%d",&NbEtd);
    (etdtab)=saisir_etd();

    /*for (int i=0 ; i<NbEtd; i++)
    {
        (etdtab)=saisir_etd();


    }
    for (int i=0 ; i<NbEtd; i++)
    {*/
         affiche_etd(etdtab);

    //}


}
