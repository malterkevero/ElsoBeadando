#include <stdio.h>
#include <stdlib.h>
//Asus2
int main()
{
    printf("Elso beadando - Pokoraczki Peter Roland - IJ3B1Q\n");
    printf("Valassza ki a feladatot 1-5\n");
    int valasztas;
    scanf("%d",&valasztas);
    switch (valasztas){

    case 1:
    	printf("Kerd be a viz hofokat, allapitsd meg belole a halmazallapotat!\n");
    	int fok=0;
    	printf("Adja meg a viz hofokat:");
 	scanf("%d",&fok);
	if (fok<=0) printf("A viz halmazallapota szilard (jeg)");
	else if (fok<100 && fok>0) printf("A viz halmazallapota folyekony (viz)");
	else if (fok>=100) printf("A viz halmazallapota legnemu (goz)");
    break;
    case 2:
        printf("Kerd be harom gerelyhajito legjobb eredmenyet (meterben) es hirdess gyoztest!\n");
        int e1,e2,e3;
        printf("Adja meg a harom eredmenyt szokozzel elvalasztva:\n");
        scanf(" %d %d %d",&e1,&e2,&e3);
		(e1 > e2 && e1 > e3) ? printf("Az elso nyert") :
		((e2 > e1 && e2 > e3) ? printf("A masodik nyert") :
		((e3 > e1 && e3 > e2) ? printf("A harmadik nyert") :
		printf("Dontetlen")));
    break;
    case 3:
        printf("Keszits egy programot, ami egy dolgozat pontszamabol kiszamitja a szazalekos eredmenyt, majd kiiratja a jegyet! Egy dolgozatra legfeljebb 20 pont adhato, az eredmenyek:60% - 2, 70% - 3, 80% - 4, 90% - 5\n");
        printf("Adja meg az elert pontszamot:");
        double max=20.0, szam;
        scanf(" %lf",&szam);
        double e=(szam/max*100);
        // printf("%lf",e);
            if (e<60)
            {printf("1");}
            else if (e<70)
            {printf("2");}
            else if (e<80)
            {printf("3");}
            else if (e<90)
            {printf("4");}
            else if (e>=90)
            {printf("5");}
    break;
    case 4:
    break;
    }

    return 0;
}
