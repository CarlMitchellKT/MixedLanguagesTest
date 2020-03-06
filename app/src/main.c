#include <stdlib.h>
#include <stdio.h>

#include "rustlib.h"

int main(int argc, char* argv[argc+1])
{
    if (argc == 1)
    {
        printf("Please provide an argument!\n");
    } else {
        for (int i = 1; i < argc; i++) {
            /* Call Rust, "parse" the argument. Tell the user whether the
             * argument is "hotdog".
             */
            if (not_hotdog(argv[i])) {
                printf("Arg %d is not \"hotdog\".\n", i);
            } else {
                printf("Arg %d is \"hotdog\".\n", i);
            }
        }
    }

    return EXIT_SUCCESS;
}
