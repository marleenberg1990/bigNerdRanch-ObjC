//
//  main.c
//  Do-while loop
//
//  Created by Marleen Berg on 04-02-15.
//  Copyright (c) 2015 marleen berg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0;
    do {
        printf("%d. Aaron is cool\n", i);
        i++;
    } while (i < 12);
    return 0;
}
