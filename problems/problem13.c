/********************************************************
 * You are designing a poster which prints out numbers
 * with a unique style applied to each of them. The styling
 * is based on the number of closed paths or holes present
 * in a giver number. The number of holes that each of the
 * digits from 0 to 9 have are equal to the number of
 * closed paths in the digit. Their values are:
 * 1, 2, 3, 5 and 7 = 0 holes.
 * 0, 4, 6, and 9 = 1 hole.
 * 8 = 2 holes
 * Example if number 3824->3 has 0 holes,8 has
 * holes,4 has 1hole
 * sum=0+2+1=3.
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  sheet 1 problem 13 in Embedded Systems Course (M.AbdelBasset).
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      5 Jun 2023  9:25 AM
 ********************************************************/

#include <stdio.h>

int main() {
  int num, sum = 0;
  int rem = 0;
  printf("please enter number \n");
  scanf("%d", &num);
  printf("number = %d \n ",
         num);  // to check if input = 08880 --->  output = 8880
  while (num != 0) {
    rem = num % 10;
    if (rem == 0 || rem == 4 || rem == 6 || rem == 9) {
      sum += 1;
    }
    if (rem == 8) {
      sum += 2;
    }
    num /= 10;
  }
  printf("sum = %d", sum);

  return 0;
}