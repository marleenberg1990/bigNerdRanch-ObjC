//
//  main.c
//  CookTimeForTurkey
//
//  Created by Marleen Berg on 30-10-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>
void showCookTimeForTurkey(int pounds){
    int necessaryMinutes = 15 + 15 * pounds;
    printf("Cook turkey for %d minutes \n", necessaryMinutes);
}
int main(int argc, const char * argv[]) {
    int totalWeight = 10;
    int gibletsWeight = 1;
    int turkeyWeight = totalWeight - gibletsWeight;
    showCookTimeForTurkey(turkeyWeight);
    return 0;
}
