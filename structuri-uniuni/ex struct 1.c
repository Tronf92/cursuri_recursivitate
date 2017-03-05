// sursa: http://info64.ro/Structuri_de_date-Uniuni/
#include<stdio.h>
#include <stdlib.h>    //pentru malloc
/* structurile declarate, in principiu vor fi declarate in afara
oricarei functii, pentru a putea fi utilizata in intreg programul */
struct angajat
{
    int cod_angajat;
    char* nume;
    char* prenume;
    struct
        {
        int an;
        char luna;
        char zi;
        }data_angajarii;
    float sal_incadrare;
};
int main()
{
    struct angajat x;
    struct angajat *px;
    x.cod_angajat=1021;
    x.nume="Popescu";
    x.prenume="Ioan";
    x.data_angajarii.an=2002;
    x.data_angajarii.luna=9;
    x.data_angajarii.zi=10;
    x.sal_incadrare=1250;
    printf("struct angajat x are dimensiunea: %lu\n",sizeof(x));

    printf("angajat: %s %s\n",x.nume,x.prenume);
    printf("data angajarii: %d/%d/%d\n",x.data_angajarii.zi, x.data_angajarii.luna, x.data_angajarii.an);
    printf("salariu incadrare: %.2f\n",x.sal_incadrare);
    // acum folosesc pointeri la structrura si memorie heap
    // pentru incepul initilaizez pointerul px ca sa indice variabila x
    px = &x;
    printf("\npointer-ul px la struct angajat are dimensiunea: %lu\n",sizeof(px));
    printf("angajat: %s %s\n",px->nume,px->prenume);
    printf("data angajarii: %d/%d/%d\n",px->data_angajarii.zi, px->data_angajarii.luna, px->data_angajarii.an);
    printf("salariu incadrare: %.2f\n",px->sal_incadrare);
    // acum initializez poinerul px cu o adresa de memorie luat-a din heap
    px = (struct angajat *)malloc(sizeof(struct angajat));
    px->cod_angajat=1021;
    px->nume="Vasilescu";
    px->prenume="Dan";
    px->data_angajarii.an=2010;
    px->data_angajarii.luna=2;
    px->data_angajarii.zi=28;
    px->sal_incadrare=1450;
    printf("\npointer-ul px acum indica o adresa din heap\n");
    printf("angajat: %s %s\n",px->nume,px->prenume);
    printf("data angajarii: %d/%d/%d\n",px->data_angajarii.zi, px->data_angajarii.luna, px->data_angajarii.an);
    printf("salariu incadrare: %.2f\n",px->sal_incadrare);
    // acum eliberez memoria alocata
    // ATENTIE!! intotdeauna cand alocati memorie sa o si eliberati!
    free(px);

    return 0;
}
