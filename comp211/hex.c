// PID: 730332282
// I pledge the COMP211 honor code.

#include <stdlib.h>
#include <stdio.h>

int main() {
   int numcharacters = 0;
   int c;

   while ( (c = getchar()) != EOF) {
        char first, second;

        first = (c >> 4);
        second = (c & 15);

        numcharacters+= 2;
        if (numcharacters == 80) {
            printf("\n");
            numcharacters = 0;
        } 
        
        // printf("%d %d ", first, second);
        printf("%X%X", first, second);

    }
}

    
 
