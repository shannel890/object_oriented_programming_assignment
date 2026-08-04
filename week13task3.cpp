#include <stdio.h>

int main()
{
    FILE *file;
    float amount, total = 0;

    file = fopen("sales.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1)
    {
        total += amount;
    }

    printf("Total sales for the day: %.2f\n", total);

    fclose(file);

    return 0;
}