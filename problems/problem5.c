/********************************************************
 * Write a program that take two numbers and calculate
 * the reminder without using % operation.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 5 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      2 Jun 2023  6:21 PM
 ********************************************************/

#include <stdio.h>

int main() {
  int num1, num2, rem;
  printf("Enter first number :");
  scanf("%d", &num1);
  printf("Enter second number :");
  scanf("%d", &num2);

  rem = num1 - (num1 / num2) * num2;

  printf("Remainder is = %d\n", rem);

  return 0;
}
