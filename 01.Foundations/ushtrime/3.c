/*

3. Ushtrime me kombinim (logjikë reale)

Këto janë shumë të rëndësishme:

Ushtrimi 4 (Login system i thjeshtë)
username correct AND password correct → login success
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    // char username[] = "A357i" ;
    // char password[] = "12345678";

    // int password = 8; 

    // if (username == 'bosh' && password == 'bosh' && password > 8)
    // {
    //     printf("Jeni kyqur me sukses");
    // } else {
    //     printf("Incorrect password or Username");
    // }

    /*
        Ushtrimi 5 (Bank ATM)
        balance > 0 AND card valid → allow withdraw
    */
    bool balance = 1;
    bool ValidCard = 1;

    if (balance > 0 && ValidCard)
    {
        printf("Allow Withdraw");
    } else {
        printf("Deny");
    }
    
}