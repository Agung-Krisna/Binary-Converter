#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int binary;
    int decimal = 0;
    int remainder;
    int power = -1;
    int fixer;
    long check;
    char test[10];

    printf ("Enter a binary, please:");
    scanf ("%d", &binary);

    sprintf (test, "%d", binary);
    check = strlen(test);
    //printf ("%d", check);
    if (check >= 1 && check <= 8){
        if (binary % 10 == 1 || binary % 10 == 0 && binary <= 255){ // 8 bit binary is less than 255, and also can be divided by 10 with the remainder of 1 or 0. 
        while (binary != 0){
        power ++;
        remainder = binary % 10;
        binary = binary / 10;
        decimal += remainder * pow(2.0, power);
        }
        printf ("your decimal: %d", decimal);
    }
    
    else {
    printf ("Not an 8 bit binary");
    }

    }
    else {
    printf ("Not an 8 bit binary");
    }
    return 0;
}
