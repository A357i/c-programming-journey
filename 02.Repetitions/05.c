// 📅 Dita 5 – nested loops

// Qëllimi: loop brenda loop

// Printo një katror me yje (logjikisht).
#include <stdio.h>

int main() {
    // char madhesia = 5;
    
    for (int rreshti = 1; rreshti <= 3; rreshti++)
    {
        for (int kolona = 1; kolona <= 3; kolona++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    
    return 0;
}


// Shpjego si do printohen rreshtat dhe kolonat në një tabelë.
// Sa herë ekzekutohet kodi i brendshëm në një nested loop?
// Çfarë ndodh me kohën e ekzekutimit kur kemi nested loops?