#include <stdio.h>
#include <math.h>

float func(float x);
int main()
{
    float x;
    int prover = scanf("%f", &x);
    if (prover != 1){
        printf("%s", "Error");
    } else {
        printf("%f", func(x));
    }
    return 0;
}


float func(float x){
    float a = 1.1f;
    if (x == 1.2f){
        return 3;
    } else if (x > 1.2f){
        return log10(x) * M_PI;
    } else {
        return (cos(pow(x,2)) / sin(pow(x,2))) + a * pow(x,2) / 2;
    }
}