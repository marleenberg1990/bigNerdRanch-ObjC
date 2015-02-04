//
//  main.c
//  Getting addresses
//
//  Created by Marleen Berg on 04-02-15.
//  Copyright (c) 2015 marleen berg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value %p \n",&i);
    printf("This function starts at %p \n", main);
    printf("i stores its value %p \n", addressOfI);
    printf("The int stored at addressOfI is %d \n", *addressOfI);
    return 0;
}
