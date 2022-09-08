/*
 * @LastEditors: platelets wenkanedward@outlook.com
 * @Date: 2022-09-08 16:30:49
 * @LastEditTime: 2022-09-08 19:41:10
 * @FilePath: ifTest
 * Copyright (c) 2022 by platelets email: wenkanedward@outlook.com, All Rights Reserved.
 */

#include <stdio.h>

int main(void) {
  int number = 110;

  if (number < 10) {
    printf("Hello if %d \n", number);
    number++;
  } else if (number < 15) {
    printf("number is more than 10. now is %d\n", number);
  } else {
    printf("now is %d\n", number);
  }
  return 0;
}
