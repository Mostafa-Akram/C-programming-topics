/********************************************************
 * write a program to take even numbers from user and
 * print the sum of them after each entry if the user enters
 * odd number the program print "bye" and stopped.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 12 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      4 Jun 2023  4:37 PM
 ********************************************************/

#include <stdio.h>

int main() {
  int num, sum = 0;
  int flag = 0;
  while (flag != 2) {
    printf("please enter number: \n");
    scanf("%d", &num);
    if ((num % 2) == 0) {
      sum = sum + num;
      printf("sum = %d\n", sum);
    }
    if (((num % 2) != 0) && (flag != 2)) {
      flag += 1;
      sum = sum + num;
      printf("sum = %d\n", sum);
    }
  }
  printf("bye \n");

  return 0;
}