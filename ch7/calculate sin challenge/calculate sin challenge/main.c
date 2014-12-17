//
//  main.c
//  calculate sin challenge
//
//  Created by Marleen Berg on 17-12-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float calcSin(int radian){
    return sin(radian);
}

int main(int argc, const char * argv[])
{
    
    int radian = 1;
    
    printf("The sine of %d is %.3f \n", radian, calcSin(radian));
    return 0;
}
