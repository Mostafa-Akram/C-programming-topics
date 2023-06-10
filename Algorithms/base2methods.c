/********************************************************
 * 5 methods to check if number is base 2
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  session 6 Tasks
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      5 Jun 2023  11:15 AM
 ********************************************************/
/************************************* Method 1
 * **************************************************/
#include <stdio.h>
int main() {
  int num, flag = 0;
  int i = 1;

  printf("please enter number \n");
  scanf("%d", &num);
  if (num == 1) {
    flag = 1;
  }

  while (i <= num) {
    if (num == i) {
      flag = 1;
      break;
    }
    i *= 2;
  }
  if (flag == 1) {
    printf("%d base 2 number \n", num);
  } else {
    printf("%d not base 2 number \n", num);
  }

  return 0;
}

/************************************* Method 2
 * **************************************************/
#include <stdio.h>
int main() {
  int num, flag = 0;
  int check = 0;

  printf("please enter number \n");
  scanf("%d", &num);
  check = num;
  while (check % 2 == 0) {
    check /= 2;
  }
  if (num == 1 || check == 1) {
    printf("%d is base 2 number \n", num);
  } else {
    printf("%d is not base 2 number \n", num);
  }

  return 0;
}

/************************************* Method 3
 * **************************************************/
#include <stdio.h>
int main() {
  int num, flag = 0;
  int check = 0;

  printf("please enter number \n");
  scanf("%d", &num);
  check = num & (num - 1);
  /**
   * for example if input was base 2 number e.x. 256 ---> 100000000
   *                                            &255 ---> 011111111
   * result                                              =000000000
   */

  if (check == 0) {
    printf("%d base 2 number \n ", num);
  } else {
    printf("%d not base 2 number \n ", num);
  }
  return 0;
}

/************************************* Method 4
 * **************************************************/

#include <stdio.h>
int main() {
  int num;
  int check = 0;
  int num2;

  printf("please enter number \n");
  scanf("%d", &num);
  num2 = num;  // to store the input value to print it at the end of the program
  while (num > 0) {
    if ((num & 1) == 1) {
      check++;
    }
    num >>= 1;
    /**
     * using shifting base 2 numbers has one 1 in it's binary
     * so, if the number for example was 5 --> 101 after first shift it will be
     * 10 and check = 1 after 3rd shift number will be 0 and will exit loop and
     * check = 2 so if check != 1 that mean it is not base 2 number and any base
     * 2 number has only one 1 in it's binary so if check = 1 so it's the only
     * condition to be base 2 number
     */
  }

  if (check == 1) {
    printf("%d base 2 number \n", num2);
  } else {
    printf("%d not base 2 number \n", num2);
  }

  return 0;
}

/************************************* Method 5
 * **************************************************/

#include <stdio.h>
int main() {
  int num, flag = 0;
  int check = 0;
  while (1) {
    printf("please enter number \n");
    scanf("%d", &num);
    check = ~(num - 1);
    /**
     * if input number for example was 12 so ~(12-1) =  ~(11) = -12
     * and -12 in binary = (1)11110100
     *      12 in binary =    00001100 &
     * the result will be     00000100 =
     *
     * so only base 2 numbers will result the same input number from this
     * equation.
     */

    if ((num & check) == num) {
      printf("%d is base 2 number \n", num);
    } else {
      printf("%d is not base 2 number \n", num);
    }
  }

  return 0;
}