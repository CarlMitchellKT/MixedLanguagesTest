#include <stdlib.h>
#include <stdio.h>

#include "example_lib.h"

int main(int argc, char* argv[argc+1])
{
    if (argc == 1)
    {
        printf("Please provide an argument!\n");
    } else {
        for (int i = 1; i < argc; i++) {
            if (not_hotdog(argv[i])) {
                printf("Arg %d is not \"hotdog\".\n", i);
            } else {
                printf("Arg %d is \"hotdog\".\n", i);
            }
        }
        /* Call Rust, "parse" the argument. Use the returned stuff to decide
         * if each argument is "hotdog".
         */
    }

    return EXIT_SUCCESS;
}
