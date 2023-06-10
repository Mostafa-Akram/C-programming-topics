/********************************************************
 * a program to take numbers from user and
 * calculate the sum of them (let users choose the No of
 * numbers).
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 3 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      30 may 2023  1:35 AM
 ********************************************************/

#include <stdio.h>

int main() {
  int inputs = 0;
  int num = 0;
  int sum = 0;

  printf("please enter the number of input numbers \n");
  scanf("%d", &inputs);

  for (int i = 0; i < inputs; i++) {
    printf(" please enter number %d \n", i + 1);
    scanf("%d", &num);
    sum = sum + num;
  }
  printf("sum of all numbers is %d \n ", sum);

  return 0;
}
