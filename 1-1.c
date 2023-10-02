#include <stdio.h>
#include<math.h>


int main() {
double x, y, z, e, a, b;
x = 0.29;
y = 3.7;
z = -1;
e = 2.7;
a = 3 * pow(x, y) * log10(y) +  exp(z * x);
b = fabs(2 * y * z) / pow(sin(x),2) - pow(x,2) / 3;
printf("x = %4.2f\n y = %4.2f\n z = %4.2f\n", x, y, z);
printf("a = %f\n b = %f\n", a, b);
}