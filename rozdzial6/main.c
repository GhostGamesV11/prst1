#include <stdio.h>
#include <stdlib.h>
#define RZAD 6
int main()
{
//zad 1
    //char tablica[26]={'a','a','b','b','c','c','d','d','e','e','f','f','g','g','h','h','i','i','j','j','k','k','l','l','m','m'};
    //printf("%s\n",tablica);
//zad 2
//    for(int i=0;i<RZAD;i++)
//    {
//        for(int j=0;j<=i;j++)
//            printf("$");
//        printf("\n");
//    }



//zad 3
//    char x='F';
//    for(int i=0;i<RZAD;i++)
//    {
//        for(int j=0;j<=i;j++)
//            printf("%c",(x - j));
//        printf("\n");
//    }

//zad 5
    int a,b;
    printf("Podaj najwieksza i najmniejsza liczbe w tabeli:\n");
    printf("Podaj najwieszka liczbe w tabeli: ");
    scanf("%d",&a);
    printf("Podaj najmniejsza liczbe w tabeli: ");
    scanf("%d",&b);
    for(int i=b;i<=a;i++)
        printf("%d||%d||%d\n",i,i*i,i*i*i);


    return 0;
}



