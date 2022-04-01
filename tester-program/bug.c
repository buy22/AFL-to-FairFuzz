#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    
    char buf[8];
    fgets(buf, 8, stdin);
    if (buf[0] == '0'){
        char A = 'asd';
        if(buf[1] == 'q' && buf[2] == 'c')
            puts(A);
    } else {
        /* Covered by most AFL runs */
    }
    return 0;
    
}