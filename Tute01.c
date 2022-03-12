/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1,m2,tot;
  float avg;
  
  printf("Input mark of subject1: ");
  scanf("%d", &m1);
  printf("Input mark of subject2: ");
  scanf("%d", &m2);

  tot = m1+m2;
  avg = tot/2;

  printf("The Average is: %.2f", avg);
  
  return 0;
}

