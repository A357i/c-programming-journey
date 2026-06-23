#include <stdio.h>
#include <string.h>

int main () {

    // Një loop (cikël) në programim është një strukturë 
    // që përsërit një bllok kodi disa herë, derisa të përmbushet një kusht i caktuar.

    // while loop = përsërit një pjesë të kodit disa herë.
    // while → kontrollon kushtin PARA se të ekzekutohet
    // WHILE sa kohë që kushti është i vërtetë
    // një while loop mund të mos ekzekutohet fare

    char name[25];

    printf("\nWhat's your name?: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';   // strcspn --> ku ndodhet një karakter brenda stringut
                                        // strcspn(..., "\n") → ku është ENTER

    while (strlen(name) == 0)
    {
        printf("You did not enter your name!");
        printf("\nWhat's your name?: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
    }
    

    printf("Hello %s", name);

    return 0;
}