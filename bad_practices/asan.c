// Simple demo for address sanitizing

#include <stdlib.h>

int main()
{
    // Reserviere Speicher für 4 Integer (16 Bytes)
    int *arr = (int *)malloc(4 * sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    // FEHLER: Wir schreiben auf Index 4 (das 5. Element).
    // Gültige Indizes bei 4 Elementen sind 0 bis 3.
    arr[4] = 42;

    free(arr);
    return 0;
}