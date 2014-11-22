//
//  main.c
//  Degrees
//
//  Created by Marleen Berg on 22-11-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Declare a local variable
static float lastTemperature;

float fahrenheitFromCelcius(float cel){
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32;
    printf("%f Celcius is %f Fahrenheit \n", cel, fahr);
    return fahr;
}
int main(int argc, const char * argv[]) {
    float freezeInCel = 3;
    float freezeInF = fahrenheitFromCelcius(freezeInCel);
    printf("Water freezes at %f degrees Fahrenheit \n", freezeInF);
    printf("The last temperature converted was %f. \n", lastTemperature);
    return 0;
}
