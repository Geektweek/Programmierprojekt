#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. SCHLECHT: Globale Variablen und wilde Namenskonventionen
int g_Val = 0;
char *GLOBAL_BUFFER = NULL;

// Inkludiert direkt eine .c-Datei statt sauberer Modularisierung!
// #include "bad_implementation.c"

// 2. SCHLECHT: Keine Dokumentation, grausamer Funktionsname, uninitialisierte Zeiger
int DoTheStuff_bad(char* filename,int limit) {
    FILE *f = fopen(filename, "r"); // FEHLER: Rückgabewert wird nicht geprüft!
    
    char *ptr; // SCHLECHT: Völlig uninitialisierter Zeiger!
    char local_buf[10];
    
    // FEHLER: Buffer Overflow vorprogrammiert (unsichere String-Funktion)
    strcpy(local_buf, filename); 

    // SCHLECHT: "Pyramid of Doom" (tiefe Verschachtelung) & magische Zahlen
    if(f != NULL) {
        if(limit > 0) {
            for(int i=0; i<limit; i++) {
                if(i % 2 == 0) {
                    ptr = malloc(100); // FEHLER: Speicherleck! Wird in der Schleife mehrfach überschrieben ohne free()
                    if(ptr != NULL) {
                        g_Val += i;
                    } else {
                        return -1; // Magische Zahl statt Enum
                    }
                } else {
                    // Nichts tun, aber unsauber
                }
            }
        } else {
            return -99; // Magische Zahl für Fehler
        }
        fclose(f);
    } else {
        return 42; // Wieder eine magische Zahl
    }

    // FEHLER: Dangling Pointer / Use-After-Free & falsche Freigabe
    free(ptr);
    *ptr = 'X'; // KRASH: Schreibzugriff auf bereits freigegebenen Speicher!

    return 0;
}

int main(void) {
    int X=10; // Schlechte Namenskonvention (Großbuchstabe)
    DoTheStuff_bad("zu_langer_dateiname_der_den_buffer_sprengt.txt", X);
    return 0;
}