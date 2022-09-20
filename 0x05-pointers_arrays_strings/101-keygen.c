#include <stdio.h>
#include "main.h"
#include <time.h>

#include <stdlib.h>

int password(int password_length) {
  
char list[] = "1234567890abcdefghijklmnoqprstuvwyzxABCDEFGHIJKLMNOQPRSTUYWVZX!@#$^&*?";
srand(time(NULL));
  
for(int i = 0; i < password_length; i++) {
    
printf("%c", list[rand() % (sizeof list - 1)]);
    
}
}
