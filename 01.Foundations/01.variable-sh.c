#include <stdio.h>

int main(){

    // Variabla = Hapësirë e rezervuar në memorie për të ruajtur një vlerë.
    // Ne përdorim emrin e variablës për të aksesuar vlerën e ruajtur.
    // Variabla sillet sikur të ishte vetë vlera që përmban.
    // Por duhet të deklarojmë çfarë lloji të të dhënave do të ruajmë.

    int x;       // Deklarimi i variablës - por nuk ka vler
    x = 123;     // caktimi vlerës (dhënia e vlerës)
                 // Dallimi mes = dhe == :
                 // = vendos vler
                 // == krahason vlera 

    int y = 321; // Deklarim + Caktimi apo dhënia e vlerës në një rresht

    // Llojet e të dhënave
    int age = 21;         // Numër i plotë (integer)
    float gpa = 2.05;     // Numër me presje dhjetore
    char grade = 'C';     // Një karakter i vetëm, Një shkronj
    char name[] = "Bro";  // Varg karakteresh (tekst)

    printf("Pershendetje %s\n", name);
    printf("Ti je %d vjec\n", age);
    printf("Nota jote mesatare eshte %c\n", grade);
    printf("GPA-ja jote eshte %f\n", gpa);

    return 0;
}

// Ku ruhet variabla ? Ruhet ne memorie.