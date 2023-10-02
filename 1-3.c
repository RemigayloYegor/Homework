#include<stdio.h>

float fun_scan();

int main(){
    int U = 220, a1, a2;
    float I1, I2, I, R2;
    I = fun_scan();
    I1 = fun_scan();
    I2 = I - I1;
    R2 = U / I2;
    if (I2 >= 0) {
        printf(" I2 = %0.2f\n A R2 = %0.2f\n", I2, R2);
    } else {
        printf("%s", "Error");
    }
    return 0;
}

float fun_scan(){
    int a;
    float b;
    a = scanf("%f", &b);
    if (a != 1){
        printf("%s", "Error");
    } else {
        return b;
    }
    return 0;
}