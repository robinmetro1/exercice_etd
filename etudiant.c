#include"etudiant.h"

int* allocation(int n)
{
    int* t;
    t=(int*)malloc(n*sizeof(int));
    if(!t)exit (-1);
    return t;
}
float*allocation2(int n )
{
    float*t;
    t=(float*)malloc(n*sizeof(float));
    if(!t) exit (-1);

}
void remplirNotes(int** t, int n)
{
    for (int i =0 ;i<n ;i++ )
    {
        scanf("%d",t+i);
    }
}
float moyenne (float* t,int n)
{
    float  s=0;
    for (int i=0; i<n; i++ )
    {
        s=s+t[i];
    }
    return (s/n);

}

ETUDIANT saisir_etd()
{
    ETUDIANT etd ;
    float moy;
    printf("\n saisir ce : ");
    scanf("%d", &etd.ce);
    printf("\n saisir date de naissance ");
    scanf("%d%d%d", &etd.dateNaidd.jour,&etd.dateNaidd.mois,&etd.dateNaidd.annee);
    printf ("\n saisir nbre des notes");
    scanf("%d",&etd.nbNotes);
    etd.notes=allocation2(etd.nbNotes);
    remplirNotes(&etd.nbNotes,etd.nbNotes);
    moy= moyenne(etd.notes,etd.nbNotes);




}
void affiche_etd(ETUDIANT etd)
{
    printf("\n code etd : %d",etd.ce);
    printf("\n date de naissance %d/%d/%d", etd.dateNaidd.jour,etd.dateNaidd.mois,etd.dateNaidd.annee);
    for (int i =0;i<etd.nbNotes;i++ )
    {
        printf("%d \t",etd.notes[i] );

    }
    printf("\n");
    printf("motenne :%f ",etd.moy);

}























