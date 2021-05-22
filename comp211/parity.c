// PID: 730332282
// I pledge the COMP211 honor code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nonparitych;
    
    while ((nonparitych = getchar()) != EOF) {
        
        //printf("%c", nonparitych); 
        //variable to keep track of 1's in the byte
        int onecount = 0; 

        //variable to hold the value of the char once the
        //largest power of two has been subtracted
        //int newval = nonparitych;
        
        //new character with the parity bit
        char newchar = 0;
 
        char temp = nonparitych;
        for (int i = 0; i < 8; i++) {
            if (temp & 1) {
                onecount++;
            }
            temp = temp >> 1;
        }   
        //code to check whether a one needs to be added at low end of byte 
        if (onecount%2 == 0) {
            newchar = nonparitych << 1;
        }
        else  {
            newchar = ((nonparitych << 1) | 1);
        }
        // printf("%d", newchar); 
        // printf("%c", newchar);
        putchar(newchar);
        
    }
    printf("\n"); 
    return EXIT_SUCCESS;
} 


