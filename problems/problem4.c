/********************************************************
 * a program that take two numbers and multiply
 * them without using * operation.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 4 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      30 may 2023  2:15 PM
 ********************************************************/

#include <stdio.h>

int main() {
  int num1 = 0;
  int num2 = 0;
  int container, total = 0;

  printf("please enter 2 numbers \n");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2) {
    container = num1;
    num1 = num2;
    num2 = container;
  }

  for (int i = 0; i < num2; i++) {
    total = total + num1;
  }
  printf("the multiplication of the 2 numbers is %d\n", total);
  return 0;
}
