/********************************************************
 * a program to calculate the power of a number.
 * The number and its power are input from user.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 6 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      30 may 2023  2:22 PM
 ********************************************************/

#include <stdio.h>

int main() {
  int num1 = 0;
  int num2 = 0;
  int total = 1;

  printf("please enter the number \n");
  scanf("%d", &num1);
  printf("please enter the power \n");
  scanf("%d", &num2);

  for (int i = 0; i < num2; i++) {
    total = total * num1;
  }
  printf("the result is %d\n", total);
  return 0;
}
