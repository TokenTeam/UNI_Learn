/*
 * @LastEditors: platelets wenkanedward@outlook.com
 * @Date: 2022-09-08 18:51:24
 * @LastEditTime: 2022-09-08 20:16:22
 * @FilePath: errorTest
 * Copyright (c) 2022 by platelets email: wenkanedward@outlook.com, All Rights Reserved.
 */
#include <stdio.h>

int main(){
  long number;
  long sum = 0L;
  int status;

  printf("Please enter an integer to be summed");
  printf(" (q to quit): ");

  status = scanf("%ld", &number);
  // attention
  while (status = 1) {
    sum += number;
    printf("Please enter next integer (q to quit): ");
    status = scanf("%ld", &number);
  }

  printf("Those intergers sum to %ld .\n", sum);
  return 0;
}