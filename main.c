#include <stdio.h>
#include "io/csv.c"
#include "io/json.c"

int main(int argc, char const *argv[])
{
    if (argc < 3) {
        return raise(1, NULL);
    }    
}
