/*
 * @LastEditors: platelets wenkanedward@outlook.com
 * @Date: 2022-09-08 14:10:44
 * @LastEditTime: 2022-09-08 16:26:03
 * @FilePath: whilTest
 * Copyright (c) 2022 by platelets email: wenkanedward@outlook.com, All Rights Reserved.
 */
#include <stdio.h>

int main(void) {
  long number;
  long sum = 0L;
  int status;

  printf("Please enter an integer to be summed");
  printf(" (q to quit): ");
  // status = scanf("%ld", &number);
  // = = not equals =
  // while (status == 1) {
  //   sum += number;
  //   printf("Please enter next integer (q to quit): ");
  //   status = scanf("%ld", &number);
  // }
  
  while (scanf("%ld", &number) == 1) {
    sum += number;
    printf("Please enter next integer (q to quit): ");
  }
  printf("Those intergers sum to %ld .\n", sum);
  return 0;
}