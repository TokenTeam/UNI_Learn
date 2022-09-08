/*
 * @LastEditors: platelets wenkanedward@outlook.com
 * @Date: 2022-09-08 16:26:17
 * @LastEditTime: 2022-09-08 20:26:50
 * @FilePath: breakTest
 * Copyright (c) 2022 by platelets email: wenkanedward@outlook.com, All Rights Reserved.
 */
#include <stdio.h>

int main(void) {
  int index = 1;
  while (index < 5) {
    printf("Hello World %d \n", index);
    index++;
  }

  index = 1;

  while (index < 10) {
    printf("index is less than 10. now is %d \n", index);
    if (index == 9) {
      break;
    }
    index++;
  }
  int sum = 0; 
  for(int i = 1; i <= 100;i++){
    sum += i;
  }
  int i = 1;
  while(i <= 100){
    sum += i;
  }
  printf("sum is %d\n", sum);
  
  // printf("index is %d", index);

  // CAUTION: Dead loop
  while (index < 5)
    printf("Hello World %d \n", index);
  // attention: this will not in the loop
  // index++;

  return 0;
}