//
//  main.c
//  ClassCertificates
//
//  Created by Marleen Berg on 30-10-14.
//  Copyright (c) 2014 marleen berg. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

void congratulateStudent (char *student, char *course, int numDays){
    printf("%s has done as much %s programming as I could fit into %d days \n", student, course, numDays);
}
int main(int argc, const char * argv[])
{
    congratulateStudent("Kate", "Cocoa", 3);
    congratulateStudent("Bo", "Objective-C", 2);
    congratulateStudent("Mike", "Python", 5);
    congratulateStudent("Liz", "iOS", 5);
    return 0;
}
