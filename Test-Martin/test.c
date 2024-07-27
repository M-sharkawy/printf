#include "main.h"
#include <stdio.h>



int main (){

    // int length = printf("we are here\n");
    // int length2 = _printf("we are here\n");

    int len = _printf("we are %d here \n", "now");
    int len2 = printf("we are %s here \n", "now");

    printf("%d" , len);
    printf("%d" , len2);
    return (0);
}