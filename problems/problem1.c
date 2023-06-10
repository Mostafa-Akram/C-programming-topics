/********************************************************
 * a program to take 2 numbers from user and
 * calculate sum of all numbers between them.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 1 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      30 may 2023  12:55 AM
 ********************************************************/

#include <stdio.h>

int main() {
  int num1 = 0;
  int num2 = 0;
  int container = 0;
  int total = 0;
  int i;

  printf("please enter 2 numbers \n");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2) {
    container = num1;
    num1 = num2;
    num2 = container;
  }

  for (i = num1 + 1; i < num2; i++) {
    total = total + i;
  }
  printf(" sum of all numbers between %d and %d is %d \n", num1, num2, total);

  return 0;
}
