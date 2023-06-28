#include "restartFunc.h"
#include <unstid.h> // for exed functions

char restartFunc() 
{
    // get the path to the main file
    char path[1024];
    ssize_t count = readlink("/home/diggity/Desktop/Coding/Projects/CARRENTALSYSTEM-1", path, sizeof(path) - 1);
    if (count != -1)
        path [count] = '/0';

    // Restart the program
    excel(path, path, NULL); 
}

