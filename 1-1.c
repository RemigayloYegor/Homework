#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Функция расчета формулы
 * @param x,y,z значения параметров
 * @return значение вычеслений
 */
double fun_calculator1(double x, double y, double z);
/**
 * @brief Функция расчета формулы
 * @param x,y,z значения параметров
 * @return значение вычеслений
 */
double fun_calculator2(double x, double y, double z);

int main() {
  double x, y, z, a, b;
  x = 0.29;
  y = 3.7;
  z = -1;
  a = fun_calculator1(x, y, z);
  b = fun_calculator2(x, y, z);
  printf("x = %4.2f\n y = %4.2f\n z = %4.2f\n", x, y, z);
  printf("a = %f\n b = %f\n", a, b);
}

double fun_calculator1(double x, double y, double z) {
  double a;
  a = 3 * pow(x, y) * log10(y) + exp(z * x);
  return a;
}

double fun_calculator2(double x, double y, double z) {
  double b;
  b = fabs(2 * y * z) / pow(sin(x), 2) - pow(x, 2) / 3;
  return b;
}