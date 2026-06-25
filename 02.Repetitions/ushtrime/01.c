// Java e Loops (pa kod)
// 📅 Dita 1 – while loop (bazat)
// Qëllimi: kuptimi i përsëritjes
#include <stdio.h>
#include <string.h>

int main() {
    // Shkruaj logjikën për të printuar numrat nga 1 deri në 10.
    // int numrat = 0;

    // while (numrat <= 10)
    // {
    //     printf("\n%d", numrat);
    //     numrat++;
    // }

    // Shkruaj logjikën për të printuar vetëm numrat çift nga 1 deri në 20.
    // int numrat = 0;

    // while (numrat <= 20)
    // {
    //     if (numrat % 2 == 0)
    //     {
    //         printf("\n%d", numrat);
    //     }
    //     numrat++;
    // }

    // Krijo ide një programi që pyet përdoruesin derisa ai të shkruajë “OK”.
    char pergjigje[25];
    
    printf("Shkruaj diqka: ");
    fgets(pergjigje, sizeof(pergjigje), stdin); 
    pergjigje[strcspn(pergjigje, "\n")] = '\0';
                // strcspn --> i hek \n 

    int res = strcmp(pergjigje, "OK") && strcmp(pergjigje, "ok"); 
                // strcmp - krahason stringje

    while (res != 0)
    {
        printf("Hello si jeni: ");
        fgets(pergjigje, sizeof(pergjigje), stdin);
        pergjigje[strcspn(pergjigje, "\n")] = '\0';
        res = strcmp(pergjigje, "OK") && strcmp(pergjigje, "ok");
    }
    
}

// Shpjego me fjalë çfarë ndodh nëse kushti i while është gjithmonë true.
// neqofse kushti i while eshte gjithmone true ne hym ne nje cikel te pafundshem (endless loop )
// neqofse eshte while(1 = 1) { print("Jam bllokuar ne loop"}; } kjo do ishte loop i pafundshem ,