/********************************************************
 * Write a program to sum the digits in a decimal number
 * 145 -> 1+4+5=10.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 11 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      4 Jun 2023  9:07 AM
 ********************************************************/

#include <stdio.h>

int main() {
  int number, flag, i, reminder;
  int sum = 0;

  printf("please enter number: ");
  scanf("%d", &number);
  i = number;
  while (i != 0) {
    reminder = i % 10;
    sum = sum + reminder;
    i = i / 10;
  }
  printf("%d \n", sum);

  return 0;
}
