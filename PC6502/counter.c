#include <rp6502.h>
#include <stdio.h>

void main()
{
    int counter = 0;
    FILE *f;
    f = fopen("counter", "r+");
    if (!f)
        f = fopen("counter", "w+");
    fread(&counter, sizeof(counter), 1, f);
    printf("counter: %d\n", ++counter);
    fseek(f, 0, SEEK_SET);
    fwrite(&counter, sizeof(counter), 1, f);
    fclose(f);
}
