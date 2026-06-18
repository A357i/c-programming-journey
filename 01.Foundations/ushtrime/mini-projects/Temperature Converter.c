#include <stdio.h>

int main() {
    char Opsioni;
    float Temperatura;


    printf("***Konvertimi Temperatures***");
    printf("\nZgjith Konvertimin C ose F: ");
    scanf(" %c", &Opsioni);                     // & = eshte adresa e tij ne memorje

    

    if (Opsioni == 'F' || Opsioni == 'f')
    {
        printf("Shnderro C ne F: ");
        scanf(" %f", &Temperatura);
        float F = (Temperatura * 1.8) + 32;
        printf("%.2f F", F);
    } else if (Opsioni == 'C' || Opsioni == 'c') {
        printf("Shnderro F ne C: ");
        scanf(" %f", &Temperatura);
        float C = (Temperatura - 32) / 1.8;
        printf("%.2f C", C);
    } else {
        printf("Perdor vetem ate qe duhet!");
    }
    

}