//
//  main.c
//  Turkey
//
//  Created by Marleen Berg on 30-10-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Declare the variable called "weight" of type float
    float weight;
    
    // Store a number in that variable
    weight = 14.2;
    
    // Log it to the user
    printf("The turkey weight %f \n", weight);
    
    // Declare another variable of the type float
    float cookingTime;
    
    // Calculate the cooking time and store it in the variable
    // In this case '*' means 'multiplied by'
    
    cookingTime = 15 + 15 * weight;
    
    // Log that to the user too
    printf("Cook it for %f minutes", cookingTime);
    
    // End this function and indicate success
    return 0;
}
