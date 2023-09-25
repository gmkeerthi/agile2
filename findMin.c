#include <stdio.h>
#include <stdlib.h>
#include <limits.h>  // Include this header for INT_MAX constant

int findMin(int numParams, char *argv[]);

int main(int argc, char *argv[]) {
    printf("Find the minimum of numbers entered by the user!!!\n");

    if (argc < 2) {
        printf("Error: Insufficient parameters!!!\n");
        printf("Give at least one or more valid integer numbers as parameters.\n");
        return -1;
    }

    int numParams = argc - 1;

    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    int min = findMin(numParams, argv);

    printf("The minimum of the numbers given is: %d\n", min);

    return 0;
}

int findMin(int numParams, char *argv[]) {
    char *pParam;
    int min = INT_MAX;  // Initialize min to the maximum possible value of an int
    int num;

    for (int i = 1; i <= numParams; i++) {
        pParam = argv[i];
        num = atoi(pParam);
        
        if (num < min) {
            min = num;  // Update the minimum if the current num is smaller
        }

        printf("pParam = %s, min = %d\n", pParam, min);
    }

    return min;
}
