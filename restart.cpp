#include "restart.hpp"
#include <unistd.h> // for exec functions

void restart() 
{
    // get the path to the main file
    char path[1024];
    ssize_t count = readlink("/home/diggity/Desktop/Coding/Projects/CARRENTALSYSTEM-1", path, sizeof(path) - 1); // this needs to be changeed to accomdate for the path of the file on the computer
    if (count != -1)
        path[count] = '\0';

    // Restart the program
    execl(path, path, NULL); 
}

