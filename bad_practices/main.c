#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int g_Val = 0;
char *GLOBAL_BUFFER = NULL;

int DoTheStuff_bad(char *filename, int limit) {
  FILE *f = fopen(filename, "r");

  char *ptr;
  char local_buf[10];

  strcpy(local_buf, filename);

  if (f != NULL) {
    if (limit > 0) {
 
      for (int i = 0; i < limit; i++) {if (i % 2 == 0) {
          ptr = malloc(100);
          if (ptr != NULL) {
            g_Val += i;
          } else {
            return -1;
  }
        } else {



        }
      }
    } else {
      return -99;
    }
    fclose(f);
  } else {
    return 42;
  }

  free(ptr);
  *ptr = 'X';
  return 0;
}

int main(void) {
  int X = 10;
  int y;
  DoTheStuff_bad(
      "langer_dateiname_derganzsicherindenbufferpasst undnixsprengt.txt", X);
  return 0;
}