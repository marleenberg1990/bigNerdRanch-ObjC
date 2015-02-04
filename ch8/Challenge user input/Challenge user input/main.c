//
//  main.c
//  Challenge user input
//
//  Created by Marleen Berg on 04-02-15.
//  Copyright (c) 2015 marleen berg. All rights reserved.
//

#include <stdio.h>
#include <readline/readline.h> 
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    //PT 1
    printf("Who is cool? \n");
    const char *name = readline(NULL);
    printf("%s is cool \n\n", name);
    
    
    //PT2
    printf("Where should I start counting? ");
    const char *startCount = readline(NULL);
   
    for (int i = atoi(startCount); i >= 0; i-=3) {
        printf("%d \n", i);
        
        if (i % 5 == 0) {
            printf("Found one! \n");
        }
    }
    return 0;
}
