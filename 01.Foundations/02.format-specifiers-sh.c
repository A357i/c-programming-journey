#include <stdio.h> 

int main(){

    //Format specifier % = është një shenjë që i tregon printf se çfarë lloj vlere do të shfaqet.

    // %c = Shfaq një karakter
    // %s = Shfaq tekst
    // %f = Shfaq numër dhjetor - 4B , Ruajn 6 shifra te sakta
    // %lf = double - 8B , ruajn 16 shifra te sakta pas presjes dhjetore
    // %d = Shfaq një numër të plotë

    // %.1 = decimal precision - pas pikës kontrollo shifrat bazuar ne numrin qe jepet pas pikes
    // %1 = minimum field width - Rezervo minimumi 1 karakter gjerësi për shfaqjen e vlerës.
    // %- = left align - Ne vend te zbraztires qe jan para numrin , vendoset meniher prapa!

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n", item1);  // Shembulli me minimum field width 
                                        // %8.2f : 
                                                // .2 ---> 2 shifra pas presjes
                                                // 8 ----> Rezervo 8 karaktere zbrastire
                                                // 5.75 ka 4 karaktere (4 hapsir + 4 karaktere = 8)
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);

    return 0;
}