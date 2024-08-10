#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE     8L

int main() {
    // Declare an array of pointers to characters
    char* arr[] = { "Apples", "Pears", "Oranges" };

    // Print each string and its address
    for (int i = 0; i < sizeof(arr) / MAX_STRING_SIZE; i++) {
        printf("%s %ld\n", arr[i],strlen(arr[i]));
    }

    printf("%ld\n",sizeof(arr));

    // Print addresses of each string
    for (int i = 0; i < sizeof(arr) / MAX_STRING_SIZE; i++) {
        printf("Address of arr[%d]: %p\n", i, (void*)arr[i]);
    }

    return 0;
}