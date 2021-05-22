// PID: 730332282
// I pledge the COMP211 honor code

#include <stdio.h>
#include <stdlib.h>

#define AMINUS9 7

#define TRUE 1
#define FALSE 0

int main() {
    char c, d; 
    int first, second;
    //int count = 0;
    while ((c = getchar()) != EOF) { 

        if (c == '\n') {
            continue;
        }
         
        if (c <= '9' && c >= '0') {
            first = c << 4;
        } 
        else {
            first = ( (c - AMINUS9) & 15) << 4; 
        }
        d = getchar();

        if (d <= '9' && d >= '0') {
            second = d & 15;
        }
        else {
            second = (d - AMINUS9) & 15;
        }
        
        char hex = first | second;
        printf("%c", hex);
        
        /*
        first = (c-48)*16;

        if (d == 'A') {
            second =10;
        }
        else if (d == 'B') {
            second = 11;
        }
        else if (d == 'C') {
            second = 12;
        }
        else if (d == 'D') {
            second = 13;
        }
        else if (d == 'E') {
            second = 14;
        }
        else if (d == 'F') {
            second = 15;
        }
        else {
            second = d - 48;
        }
        
        dec = first + second;
        printf("%c", dec); 
        */
    }
    return EXIT_SUCCESS;
}
