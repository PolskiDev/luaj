// Name of program luaj.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
int main(int argc, char *argv[]) {
    char exec[] = "java -cp luaj-jse-3.0.2.jar lua ";
    strcat(exec,argv[1]);

    system(exec);
}