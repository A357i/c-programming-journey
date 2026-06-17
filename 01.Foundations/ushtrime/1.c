#include <stdio.h>
#include <stdbool.h>

int main(){
    bool hasAccount = 0;
    bool isLoggedIn = 1;

    if (hasAccount && !isLoggedIn) 
    {
        printf("Ju lutem kyquni perseri!");
    } else {
        printf("Mirsevini");
    }
    
}