/********************************************************
 * Write a program that reads a positive integer and
 * checks if it is a perfect square.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 9 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      2 Jun 2023  7:28 PM
 ********************************************************/

#include <stdio.h>

int main() {
  int num, flag = 0;
  int i = 0;

  printf("please enter number: \n");
  scanf("%d", &num);

  if (num == 1 || num == 0) {
    flag = 1;
  }
  for (i = 2; i <= num / 2; i++) {
    if (num == i * i) {
      flag = 1;
    }
  }
  if (flag == 1) {
    printf("perfect square number \n");
  } else {
    printf("NOT perfect square number \n");
  }

  return 0;
}
