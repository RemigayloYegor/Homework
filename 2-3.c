#include <stdio.h>
#include <math.h>

float fun_scan();
float fun_var(int var,float R);

int main(){
    float kol;
    int varib;
    printf("%s\n", "Если хотите перевести из радианов в градусы введите 1, если из градусов в радины то 2.");
    varib = fun_scan();
    printf("%s\n", "Введите колличество");
    kol = fun_scan();
    fun_var(varib, kol);

}

float fun_var(int var,float R){
    if (var == 1){
        return printf("%f", R * 180 / M_PI);
    } else if (var == 2){
        return printf("%f", R * M_PI / 180);
    } else {
        return printf("%s", "Error");
    }
}

float fun_scan(){
    float R;
    int a;
    a = scanf("%f", &R);
    if (a != 1){
        return printf("%s", "Error");
        
    } else {
        return R;
    }
}