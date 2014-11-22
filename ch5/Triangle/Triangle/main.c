//
//  main.c
//  Triangle
//
//  Created by Marleen Berg on 22-11-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>

// Add your new function here
float remainingAngle(angleA, angleB){
    float totalOfFirstangles = angleA + angleB;
    float remainingAngle = 180 - totalOfFirstangles;
    return remainingAngle;
}
int main(int argc, const char * argv[]) {
    float angleA = 30.00;
    float angleB = 60.00;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f \n", angleC);
    return 0;
}
