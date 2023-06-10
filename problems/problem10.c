/********************************************************
 * Write a program that reads a positive integer and check
 * if this number is a base of 2 like 1,2,4,8,16,32, 64...
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 10 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      4 Jun 2023  8:56 PM
 ********************************************************/

#include <stdio.h>

int main() {
  int number, flag = 0;
  int i = 1;
  printf("please enter number: ");
  scanf("%d", &number);

  while (i <= number) {
    i = i * 2;
    if (i == number) {
      printf("this number is base of 2 \n");
      flag = 1;
    }
  }
  if (flag == 0) {
    printf("this number is not base of 2 \n");
  }

  return 0;
}
