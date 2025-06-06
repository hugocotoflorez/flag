#include "flag.h"

int
main(int argc, char *argv[])
{
        flag_set(&argc, &argv);
        char *name;
        if (flag_get_value(&name, "--name", "-o")) printf("Name = %s\n", name);

        if (flag_get("-a")) printf("-a set\n");
        if (flag_get("-b", "--byte")) printf("-b/--byte set\n");

        int i;

        printf("Arguments not read: ");
        // i == 0 still being the executable name
        for (i = 1; i < argc; i++) {
                printf("%s ", argv[i]);
        }
        printf("\n");

        return 0;
}
