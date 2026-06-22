#include <stdio.h>
#include <string.h>

int main(){

    // I/O - Input , Output
    // Input  - hyrje e te dhenave ne program
    // Output - Dalje e te dhenave nga programi
    // User Input është çdo informacion që përdoruesi jep gjatë ekzekutimit të programit

    char name[25]; //bytes
    int age;

    printf("\nWhat's your name");
    //scanf("%s", &name);
    fgets(name, 25, stdin);         // stdin - standard input - programi pret input (), zakonisht inputi vjen nga tastiera
    name[strlen(name)-1] = '\0';    // Null Terminator \0 - I kallxon se ketu mbaron string-u

    printf("\nHow old are you?");
    scanf("%d", &age);              // Dallimi mes scanf dhe fgets:
                                    // scanf() ----> Per te dhena te thjeshta perdoret scanf() psh per numra te thjesht
                                    // fgets() ----> Per emra dhe fjali preferohet fgets()

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);  

    return 0;
}