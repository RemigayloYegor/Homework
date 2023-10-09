#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//Угол a задан в радианах. Найти его величину в градусах, минутах и секундах.

double fun_scan();

int main(){
    double secu , cor, minu, deg;
    //cor -  Угол в радианах, deg - Угол в градусах, minu -Угол в минутах, secu - Угол в секундах.
    cor = fun_scan();
    // Нахожу угол в градусах по формуле: РАДИАНЫ * (60 * 180) / pi
    deg = cor * 180 / M_PI;
    // Нахожу угол в минутах по формуле: РАДИАНЫ * 180 / pi
    minu = cor * (60 * 180) / M_PI;
    // Нахожу угол в секундах по формуле: РАДИАНЫ * (3600 * 180) / pi
    secu = cor * (3600 * 180) / M_PI;
    printf(" Градусы - %lf\n Минуты - %lf\n Секунды - %lf\"\n", deg, minu, secu);
}

double fun_scan(){
    int a;
    double b;
    a = scanf("%lf", &b);
    if (a != 1){
        printf("%s", "Error");
    } else {
        return b;
    }
    return 0;
}