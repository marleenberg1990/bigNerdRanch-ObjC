//
//  main.c
//  Coolness
//
//  Created by Marleen Berg on 17-12-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0;
    
    printf("\n In a while loop \n");
    while (i < 12) {
        printf("%d Aaron is cool \n", i);
        i++;
    }
    printf("\n In a for loop \n");
    for (int i = 0; i < 12; i++) {
        printf("%d Aaron is cool \n", i);
    }
    
    
    return 0;
}
