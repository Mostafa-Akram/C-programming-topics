/********************************************************
 * substract without use ' - '
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  session 6 Tasks
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      5 Jun 2023  10:37 AM
 ********************************************************/
#include <stdio.h>
int main() {
  int num1, num2;
  int result;
  while (1) {
    printf("please enter 2 numbers for subtraction \n");
    scanf("%d %d", &num1, &num2);
    result = num1 + ((~num2) + 1);
    /*
    using 1's complement  if number = 10 -------> ~number = -11
                          if number = -10 ------> number = 9

                          num = 10 = 00001010  if we used 1's complement it will
    be 11110101 so 11110101 (MSB = -128 because if we complete to left it always
    will be 1's) in decimal will excute as 11110101 ------> -128 + 64 + 32 + 16
    + 4 + 1 = -11


    */
    printf("the result is %d \n", result);
  }

  return 0;
}