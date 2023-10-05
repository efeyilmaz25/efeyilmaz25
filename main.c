#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long int sayi = 9999999999999;
    long long int j, asal;
    int flag1 = 0;
    int flag2 = 0;

    /*
    while(  (sayi>999999999999) && (flag2==0)  ){
        printf("Kontrol edilen sayi: %lld\n", sayi);
        flag1 = 0;

        for( j=3; j<sayi/2 + 1; j++){
            printf("Denenen j degeri: %lld\n", j);
            if(sayi%j == 0){
                //printf("bolen j degeri %lld\n", j);
                flag1=1;
                break;
            }
        }
        if(flag1==0){
            asal = sayi;
            flag2 = 1;
        }


        sayi = sayi-2;
    }*/

    asal = 9999999999971;
    char kucukharf = 999;
    char buyukharf = 71;
    printf("sifre : \n%c99999999%c\n", kucukharf, buyukharf);


    return 0;
}

