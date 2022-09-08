/*
 * @LastEditors: platelets wenkanedward@outlook.com
 * @Date: 2022-09-08 16:30:49
 * @LastEditTime: 2022-09-08 16:37:57
 * @FilePath: ifTest
 * Copyright (c) 2022 by platelets email: wenkanedward@outlook.com, All Rights Reserved.
 */

#include <stdio.h>

int main(void){
  int number = 11;

  if (number < 10){
    printf("Hello if %d \n", number);
    number ++;
  }
  else {
    printf("number is less than 10. now is %d\n", number);
  }
  return 0;
}
