#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';                   // 1 byte single character %c - ruan nje karakter te vetem (A, B, C, @, #)
    char b[] = "Bro";               // array of characters - Varg karakteresh (array) %s

    float c = 3.141592;             // 4 byte %f  - numra decimal, 6-7 shifra precize
    double d = 3.141592653589793;   // 8 byte %lf - numra decimal, 15-16 shifra precize

    bool e = false;                 // %d true = 1, false = 0 

    char f = 120;                   // %d or %c -128 deri 127
                                    // perdoret per karaktere ose numra shume te vegjel

    unsigned char g = 255;          // %d or %c 0 deri 255
                                    // perdoret shpesh per RGB, byte, imazhe, skedare

    short int h = 32767;            // %d -32,768 deri 32,767
                                    // kur duhen numra te vegjel dhe kursim memorje

    unsigned short int i = 65535;   // %d 0 deri 65,535
                                    // perdoret shpesh per porta rrjeti (80, 443, 8080...)

    int j = 2147483647;             // %d -2,147,483,648 deri 2,147,483,647
                                    // datatype me i perdorur per numra te plote

    unsigned int k = 4294967295U;   // %u 0 deri 4,294,967,295
                                    // kur numri nuk mund te jete negativ
                                    // p.sh. numerues, madhesi array, sasi objektesh

    long long int l = 9223372036854775807LL;
                                    // %lld (-9 quinitillion to +9 quintillion)
                                    // numra shume te medhenj
                                    // ID databazash, kohe ne ms, statistika te medha

    unsigned long long int m = 18446744073709551615ULL;
                                    // %llu numra gjigante vetem pozitiv
                                    // views, counters, kriptografi, sisteme 64-bit

    //printf("%c\n", a); // char
    //printf("%s\n", b); // character array
    //printf("%f\n", c); // float
    //printf("%lf\n", d); // double
    //printf("%d\n", e); // bool
    //printf("%c\n", f); // char as numeric value
    //printf("%d\n", g); // unsigned char as numeric value
    //printf("%d\n", h); // short
    //printf("%d\n", i); // unsigned short
    //printf("%d\n", j); // int
    //printf("%u\n", k); // unsigned int
    printf("%lld\n", l); // long long int
    printf("%llu\n", m); // unsigned long long int

    return 0;
}

// Pse vendosim U ne fund te unsigned int, 
// dhe LL ne long long int, dhe ULL ne unsigned long long int ?
//  Kompileri fillimisht përpiqet të gjejë tipin e literalit
//  Nëse nuk mund ta përfaqësojë si int ose long, mund të japë warning

// Ku mundet ta hasim shembull LL ?
//  Shembull :
//  long long x = 1000000 * 1000000;
//  rezultati: 1,000,000,000,000
//  Llogaritja bëhet si int dhe mund të ketë overflow 
//  para se rezultati të ruhet në long long.
//      Forma e saktë:
//              long long x = 1000000LL * 1000000;

// Qka eshte overflow ?
//  Overflow ndodh kur përpiqesh të fusësh një numër
//  në një datatype që nuk ka hapësirë të mjaftueshme për ta ruajtur.
/*
    Mendoje si një gotë që mban 250 ml ujë:

        Nëse hedh 200 ml → gjithçka OK.
        Nëse hedh 500 ml → uji derdhet jashtë.

    Në programim, "derdhja" quhet overflow.
*/