//
//  main.c
//  Squarer
//
//  Created by Marleen Berg on 22-11-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>

int squarer(int number){
    int squared = number * number;
    return squared;
}

int main(int argc, const char * argv[]) {
    int number = 5;
    int squared = squarer(number);
    printf("\"%d\" squared is \"%d\" \n", number, squared);
    return 0;
}
