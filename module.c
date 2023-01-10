#include <stdio.h>

#include "module.h"

void bad_swap_reals(double ra, double rb){
  printf("entering bad_swap_real():  ra=%g  rb=%g\n", ra, rb);
  double tmp=ra;
  ra=rb;
  rb=tmp;
  printf("leaving bad_swap_real():  real_a=%g  rb=%g\n", ra, rb);
}

void swap_reals(double *end_a, double *end_b){
  
  if(end_a == NULL || end_b == NULL){
    return;
  }

  printf("entering swap_real():  a=%g  b=%g\n", *end_a, *end_b);

  double tmp= *end_a;
  *end_a = *end_b;
  *end_b = tmp;

  printf("leaving swap_real():  real_a=%g  rb=%g\n", *end_a, *end_b);

}

double* min_real_ptr(double *a, double *b){
  return  *a < *b ? a : b;

}
