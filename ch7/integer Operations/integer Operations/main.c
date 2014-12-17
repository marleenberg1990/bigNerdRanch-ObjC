//
//  main.c
//  integer Operations
//
//  Created by Marleen Berg on 17-12-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    printf("3 * 3 + 5 * 2 = %d \n", 3 * 3 + 5 * 2);
    printf("11 / 3 = %d \n", 11 / 3);
    printf("11 / 3 = %d remainder of %d \n", 11 / 3, 11 % 3);
    printf("11 / 3 = %f \n", 11/(float)3); // use float for decimal number
    
    int x = 5;
    x = x + 5; //x is now 6

    x++; // x is now 6
    
    x--; // x is now 4
    
    x+=5; //x is 10
    
    x-=10; //x is 0
    
    printf("The absolute value of -5 is %d \n", abs(-5));
    
    
    return 0;
}
