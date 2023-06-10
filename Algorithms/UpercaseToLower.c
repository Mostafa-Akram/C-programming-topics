/********************************************************
 * change char form Upeer case to lower case
 * for example 'A' to 'a'
 *
 * Author:  Mostafa Akram
 *
 * Purpose:  session 6 Tasks
 *
 * Usage:
 *      Runs the program and the message appears.
 * Date:
 *      5 Jun 2023  10:00 AM
 ********************************************************/
#include <stdio.h>
int main() {
  char letter;

  while (1) {
    printf("please enter a letter \n");
    scanf(" %c", &letter);

    if (letter >= 'A' && letter <= 'Z') {
      printf("the small letter of %c is %c \n", letter,
             letter + 32);  // add 32 to the letter ASCII to get the small
                            // letter (according to ASCII table)
    }
    if (letter >= 'a' && letter <= 'z') {
      printf("the capital letter of %c is %c \n", letter,
             letter - 32);  // add 32 to the letter ASCII to get the small
                            // letter (according to ASCII table)
    }
  }

  return 0;
}