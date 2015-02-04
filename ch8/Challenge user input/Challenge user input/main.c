//
//  main.c
//  Challenge user input
//
//  Created by Marleen Berg on 04-02-15.
//  Copyright (c) 2015 marleen berg. All rights reserved.
//

#include <stdio.h>
#include <readline/readline.h> //don't forget to include this header file
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    //PT 1
    printf("Who is cool? \n");
    const char *name = readline(NULL);
    printf("%s is cool \n\n", name);
    
    //PT2
    
    int i;
    
    printf("Where should I start counting? ");
   const char *startCount = readline(NULL);
   
    for (i = atoi(startCount); i >= 0; i = i - 3) {
        printf("%d \n", i);
        
        if (i % 5 == 0) { // check if i divisible by 5
            printf("Found one! \n");
        }
        
    }
    return 0;
}
