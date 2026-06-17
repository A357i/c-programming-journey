
/*

Ushtrimi 1
Nëse temperatura > 30 → "Hot"
përndryshe → "Normal"
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool temperatura = 0;
    
    if (temperatura > 30)
    {
        printf("Nxeht!");
    } else {
        printf("Normal");
    }
    /*
Ushtrimi 2
Nëse është student DHE ka ID → "Hyr"
përndryshe → "Mos hyr"
*/
    bool student = 1;
    bool hasID = 0;

    if (student && hasID)
    {
        printf("Hyr");
    } else {
        printf("Nuk mund te hysh");
    }
/*
Ushtrimi 3
Nëse mosha < 18 OSE > 65 → "Nuk lejohet"
përndryshe → "Lejohet"*/

    bool mosha = 65;
    if (mosha < 18 || mosha > 65)
    {
        printf("Nuk lejohet");
    } else {
        printf("Lejohet");
    }
}
