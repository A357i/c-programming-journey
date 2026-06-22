#include <stdio.h>
#include <stdbool.h>

int main(){

        // logical operators - && (AND - Dhe) check if two conditions are true
        // Çfarë kthen gjithmonë një operator logjik?
        //  Pavarsisht kushtit gjithmon rezultati eshte True ose False 

        float temp = 25;
        bool sunny = true;

        if (temp >= 0 && temp <= 30 && sunny)
        {
            printf("\nThe weather is good!");
        }
        else {
            printf("\nThe weather is bad!");
        }
        

    return 0;
}