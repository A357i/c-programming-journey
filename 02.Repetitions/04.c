// 📅 Dita 4 – do while

// Qëllimi: ekzekutim të paktën 1 herë
#include <stdio.h>
#include <string.h>

int main() {
    // 1. Krijo një program që pyet përdoruesin të paktën 1 herë emrin e tij.

    // char emri[50] = "";

    // do
    // {
    //     printf("Shkruaj emrin: ");
    //     fgets(emri, sizeof(emri), stdin);
    //     emri[strcspn(emri, "\n")] = '\0';
    //     if (strcmp(emri, "") == 0)
    //     {
    //         break;
    //     }
        
    // } while (1);

    // 2. Menu që shfaqet të paktën 1 herë edhe nëse përdoruesi gabon.
    int tentime = 0;
    char menu[20] = "";

    do
    {
        printf("\n***MENU***");
        printf("\n1.Pijet");
        printf("\n2.Ushqimet");
        printf("\n3.Skara");
        printf("\nZgjedh Opsionin (1-3): ");
        fgets(menu, sizeof(menu), stdin);
        menu[strcspn(menu, "\n")] = '\0';

        tentime++;

        if (strcmp(menu, "1") == 0 || strcmp(menu, "2") == 0 || strcmp(menu, "3") == 0)
        {
            printf("Ju Faleminderit per porosi!");
            break;
        } else {
            printf("Zgjedhje e gabuar! Provo përsëri.");
        }
    } while (tentime < 2);

    if (tentime == 2 && 
        strcmp(menu, "3") != 0 &&
        strcmp(menu, "2") != 0 && 
        strcmp(menu, "1") != 0)
    {
        printf("\nKeni gabuar 2 herë. Menu-ja do rishfaqet pas pak qasteve");
    }
    
}

// Pse do while është më i mirë për menu?
// Sepse menuja duhet të shfaqet të paktën një herë. 
// Përdoruesi duhet ta shohë menunë përpara se të zgjedhë një opsion.

// Kur do while është më i rrezikshëm se while?
// Sepse do while njeher hyn ne loop pastaj e shikon kushtin ,
// per dallim te while qe nuk hyn ne loop neqoftese nuk zbatohet kushti.