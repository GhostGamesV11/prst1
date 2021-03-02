//Bartosz Okoñski gr3
#include <stdio.h>
#include <stdlib.h>

int main()
{
//zad 1.3.3
    int a, b, c, wynik;
    printf("Podaj trzy liczby calkowite: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=b)
        if(a>c)
            wynik=a;
        else
            wynik=c;
    if(b>=a)
        if(b>c)
            wynik=b;
        else
            wynik=c;
    printf("Najwieksza liczba z tych trzech podanych to: %d", wynik);
//zad 1.3.7
    int L1,L2,L3;
    float delta,pierw,x1,x2;
    printf("Podaj trzy liczby ktore zostana wstawione do wzoru lLX^2 + L2X + L3 odpowiednio wstawiajac za liczby L1,L2,L3:\n");
    scanf("%ld",&L1);
    scanf("%ld",&L2);
    scanf("%ld",&L3);
    delta=L2*L2 - 4*L1*L3;
    printf("delta = %f\n",delta);
    pierw=sqrt(delta);
    if(delta<0){
        printf("Brak pierwisatkow rzeczywistych");}
    else if(delta>0){
        x1=(-L2-pierw)/2*L1;
        x2=(-L2+pierw)/2+L1;
        printf("Z tymi liczbami to rownanie ma dwa rozwiazania rowne x1=%f i x2=%f",x1,x2);}
    else if(delta==0){
        x1=-L2/(2*L1);
    printf("Z tymi liczbami to rownanie ma jedno rozwiazanie rowne x1=%f",x1);}

//zad 1.3.9
    int k,l,x
    float wynik
    printf("1=dodawanie\n");
    printf("2=odejmowanie\n");
    printf("3=mnozenie\n");
    printf("4=dzielenie\n");
    printf("Wybierz dzialanie jakie chcesz wykojnac:");
    scanf("%d",&x);
    if(x==1)
        printf("Podaj dwie liczby do wzory a+b:\n");
        scanf("%d"&k);
        scanf("%d"&l);
        wynik=a+b;
        printf("Wybik tego dzialania wynosi = %d",wynik);
    else if(x==2)
        printf("Podaj dwie liczby do wzory a-b:\n");
        scanf("%d"&k);
        scanf("%d"&l);
        wynik=a-b;
        printf("Wybik tego dzialania wynosi = %d",wynik);
    else if(x==3)
        printf("Podaj dwie liczby do wzory a*b:\n");
        scanf("%d"&k);
        scanf("%d"&l);
        wynik=a*b;
        printf("Wybik tego dzialania wynosi = %d",wynik);
    else if(x==4)
        printf("Podaj dwie liczby do wzory a/b:\n");
        scanf("%d"&k);
        scanf("%d"&l);
        wynik=a/b;
        printf("Wybik tego dzialania wynosi = %d",wynik);

//zad 1.4.5
    int i,d,suma=0;
    printf("Podaj liczbe nieujemna calkowita: ");
    scanf("%d",&d);
    if(d<0)
        printf("Podales nie prawidlowa liczbe!!!!!!\n");
    else
        for(i=1;i<d+1;i++)
        {
        suma+=(i*i);
        }
    printf("Suma wynosi: %d",suma);



    return 0;
}
