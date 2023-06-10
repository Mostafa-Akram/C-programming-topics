/********************************************************
 * a program to take numbers from user and find the
 * max and min from them (let users choose the No of
 * numbers).
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 2 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      30 may 2023  1:15 AM
 ********************************************************/

#include <stdio.h>

int main() {
  int inputs = 0;
  int num = 0;
  int max = 0;
  int min = 0;

  printf("please enter the number of input numbers \n");
  scanf("%d", &inputs);

  printf("please enter number 1 \n");
  scanf("%d", &num);
  min = num;
  max = num;

  for (int i = 1; i < inputs; i++) {
    printf("please enter number %d \n", i + 1);
    scanf("%d", &num);
    if (num > max) {
      max = num;
    }
    if (min > num) {
      min = num;
    }
  }
  printf("the minimum number is %d and the max number is %d \n", min, max);
  return 0;
}
