int main() {
  int num1;

  for (int i = 0; i < 9; i++) {
    num1 = num1 / 0;

    printf("number = %d \n", num1);
  }

  return 0;
}