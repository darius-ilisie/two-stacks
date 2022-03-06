#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int main(int argc, char** argv) {
    if(argc < 2) {
        printf("Usage: two-stacks \"[Exp to eval]\"\n");
        exit(1);
    }
    
    struct st op = *st_construct(64);
    struct st val = *st_construct(64);

        
    return 0;
}