//
//  main.c
//  Challenge Counting Down
//
//  Created by Marleen Berg on 04-02-15.
//  Copyright (c) 2015 marleen berg. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 99;
    
    for (i = 99; i >= 0; i = i - 3) { // i -3: count down by 3
        printf("%d \n", i);
        
        if (i % 5 == 0) { // check if i divisible by 5
            printf("Found one \n");
        }
        
    }
    return 0;
}
