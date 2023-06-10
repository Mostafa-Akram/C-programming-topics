/********************************************************
 * Write a program that reads a positive integer and
 * checks if it is a prime.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 8 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      2 Jun 2023  6:28 PM
 ********************************************************/

#include <stdio.h>

int main() {
  int num, flag = 0;
  int i = 0;

  printf("Enter num : \n");
  scanf("%d", &num);

  if (num == 0 || num == 1) {
    flag = 1;
  }
  for (i = 2; i <= num / 2; i++) {
    if ((num % i) == 0) {
      flag = 1;
    }
  }
  if (flag == 0) {
    printf("it is a prime number \n");
  } else {
    printf("it is not a prime number \n");
  }

  return 0;
}
