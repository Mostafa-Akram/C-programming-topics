/********************************************************
 * a program that reads a positive integer and
 * computes the factorial.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 7 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      30 may 2023  2:27 PM
 ********************************************************/

#include <stdio.h>

int main() {
  unsigned int num1 = 0;
  unsigned int factorial = 1;
  unsigned int i = 0;
  printf("please enter the number \n");
  scanf("%d", &num1);

  for (i = 0; i < num1; i++) {
    factorial = (factorial * i) + factorial;
  }
  printf("the result is %d\n", factorial);
  return 0;
}

/*****************************************************************************************************************************************/
