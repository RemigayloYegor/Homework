#include <stdio.h>
#include <math.h>

// Number 1 

float fun_scan();
float fun_prim(float x_min);

int main(void) {
  float prim, d_x, x_min, x_max;
  x_min = fun_scan();
  x_max = fun_scan();
  d_x = fun_scan();
  while(x_min <= x_max){
    fun_prim(x_min);
    x_min = x_min + d_x;
  }
  return 0;
}

float fun_prim(float x_min){
  float prim;
  prim = 3 * sin(sqrtf(x_min)) + 0.39 * x_min - 3.8;
  if(prim != prim){
    printf("%0.0f %s\n",x_min, "Решение отстутствует");
  } else{
    printf("%f\n", prim);
  }
  return 0;
}

float fun_scan(){
  int a;
  float ret;
  a = scanf("%f", &ret);
  if (a != 1){
    printf("%s", "Error");
  }
  return ret;
}