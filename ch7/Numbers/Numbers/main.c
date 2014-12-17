//
//  main.c
//  Numbers
//
//  Created by Marleen Berg on 17-12-14.//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x = 255;
    printf("x is %d \n", x);
    printf("In octal, x is %o \n", x);
    printf("In hexadecimal, x is %x \n", x);
    printf("\n");
    
    // USE OF LONG
    
    long y = 255;
    printf("y is %ld \n", y);
    printf("In octal, y is %lo \n", y);
    printf("In hexadecimal, y is %lx \n", y);
    printf("\n");
    
    // USE OF UNSIGNED
    
    unsigned long z = 255;
    printf("z is %lu \n", z);
    // Octal and hex already assume the number was unsigned
    printf("In octal, y is %lo \n", y);
    printf("In hexadecimal, y is %lx \n", y);
    return 0;
}
