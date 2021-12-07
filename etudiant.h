#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
struct date
{
    int jour;
    int mois;
    int annee;

};
typedef struct date DATE ;
struct etudiant
{
    int ce;
    DATE dateNaidd;
    int nbNotes;
    int* notes;
    float moy;
};
typedef struct etudiant ETUDIANT;
int somme(int ,int , int);
ETUDIANT saisir_etd();

int* allocation(int );
void remplirNotes(int** , int) ;
float moyenne (float* ,int );
void affiche_etd(ETUDIANT );
float*allocation2(int  );



#endif // ETUDIANT_H_INCLUDED
