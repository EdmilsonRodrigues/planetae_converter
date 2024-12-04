#include <stdio.h>


int raise(int return_code, const char *message) {
    if (message == NULL) {
        FILE *file = fopen("usage.txt", "r");
        if (file == NULL) {
            perror("Error opening file");
            return return_code;
        }

        char line[256];
        while (fgets(line, sizeof(line), file)) {
            printf("%s", line);
        }

        fclose(file);
    } else {
        printf("%s\n", message);
    }
    printf("\n");
    return return_code;
}