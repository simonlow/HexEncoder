// PID: 730332282
// I pledge the COMP211 honor code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;
    
    while ( (c = getchar()) != EOF) {
        

        int onecount = 0;
        char temp = c;
        for (int i = 0; i <8; i++) {
            if ( (temp & 1) != 0) {
                onecount++;
            }
            temp = temp >> 1;

        }   
        if ( onecount%2 != 0) {
            printf("\nCorruption detected!\n");
            return EXIT_FAILURE;
        
        }
        char newchar = c >> 1;
        printf("%c", newchar);

    } 
}
