// 📅 Dita 3 – for loop

// Qëllimi: strukturë e rregullt
#include <stdio.h>

int main(){
    // 1. Printo numrat nga 100 deri 1 (mbrapsht).
    // for (int i = 100; i >= 1; i--)
    // {
    //     printf("\n%d", i);
    // }

    // 2. Printo numrat nga 1 deri 100
    // for (int i = 1; i <= 100; i++)
    // {
    //     printf("\n%d", i);
    // }

    // 3.Gjej shumën e numrave nga 1 deri 50.
    // int shuma = 0; 
    // Deklarimi i shumës

    // fillon nga 0; deri sa i = 50; inkremento;
    // for (int i = 0; i <= 50; i++)
    // {
    //     shuma += i;
    // }
    // printf("\n%d", shuma);

    // 4. Printo numrat çift dhe tek nga 0 deri në 20
    // for (int i = 0; i <= 20; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("\n%d", i);
    //     } else if (i % 1 != 0)
    //     {
    //         printf("\n%d është tek", i);
    //     }
    // }
    
    // 5. Printo tabelën e shumëzimit për 5.
    // int numri = 5;
    // for (int i = 1; i <= 10; i++)
    // {
    //         int rezultati = numri * i;
    //         printf("\n%d x %d = %d", numri, i, rezultati);
    // }
    

    // 6.Gjej produktin e numrave nga 1 deri në 5.
    // int produkti = 1;

    // for (int i = 1; i <= 5; i++)
    // {
    //     produkti *= i;
    //     // i = 1: produkti = 1 * 1 ➔ rezultati i produktit bëhet 1
    //     // i = 2: produkti = 1 * 2 ➔ rezultati i produktit bëhet 2
    //     // i = 3: produkti = 2 * 3 ➔ rezultati i produktit bëhet 6
    // }
    // printf("%d", produkti);

    // 7. Printo këtë model:
        // *
        // **
        // ***
        // ****
        // *****

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // 8. Printo katrorët e numrave nga 1 deri në 10

    // for (int i = 1; i <= 10; i++)
    // {
    //     int katrori = i * i;
    //     printf("\nKatrori i %d është: %d", i, katrori);
    // }

    // 9. Rregullat: Nëse numri pjesëtohet me 3 → Fizz
    // Nëse pjesëtohet me 5 → Buzz
    // Nëse pjesëtohet me të dyja → FizzBuzz
    // Përndryshe printo numrin

    // for (int i = 1; i <= 30; i++)
    // {
    //     if (i % 3 == 0 && i % 5 == 0)
    //     {
    //         printf("\nFizzBuzz");
    //     } else if (i % 5 == 0)
    //     {
    //         printf("\nBuzz");
    //     } else if (i % 3 == 0)
    //     {
    //         printf("\nFizz");
    //     } else
    //     {
    //         printf("\n%d", i);
    //     }
    // }

    // 10. Printo këtë model:
    // *****    
    // ****
    // ***
    // **
    // *

    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // 11. Printo këtë model
    // 1
    // 12
    // 123
    // 1234
    // 12345

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // Nested Loops
        // Loop-i i jashtëm kontrollon sa herë do të përsëritet modeli ose blloku kryesor / rreshtat.
        // Për çdo iteracion të loop-it të jashtëm, loop-i i brendshëm ekzekutohet plotësisht.
        // Loop-i i brendshëm kontrollon çfarë dhe sa herë do të shfaqet brenda çdo iteracioni të loop-it të jashtëm / rresht.

        // Outer loop -> sa rreshta do të krijohen.
        // Inner loop -> çfarë do të shfaqet në secilin rresht.

    // =======================================
    // Vetem me logjik pa e bere run kodin;
    // qe ta kuptojm edhe me mir si ti lexojm!
    // =======================================

    // ==========================
    // Çfarë printohet?
    // ==========================

    int x = 1;

    
    for(int i = 1; i <= 4; i++)
    {
        x *= 2;

        // x = 1
        // Iterimi 1: x = 1 * 2 = 2
        // Iterimi 2: x = 2 * 2 = 4
        // Iterimi 3: x = 4 * 2 = 8
        // Iterimi 4: x = 8 * 2 = 16
    }

    printf("%d\n", x); // Output: 16


    // ==========================
    // Çfarë printohet?
    // ==========================

    int s = 0;

    for(int i = 1; i <= 5; i++)
    {
        if(i % 2 == 0)
        {
            s += i;

            // i = 1 -> jo çift (0+1 por nuk behet per shkak te kushtit)
            // i = 2 -> s = 0 + 2 = 2
            // i = 3 -> jo çift
            // i = 4 -> s = 2 + 4 = 6
            // i = 5 -> jo çift
        }
    }

    printf("%d\n", s); // output: 6


    // ==========================
    // Cili është output-i?
    // ==========================

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);

            // i = 1
            //     j = 1
            //     printo 1

            // i = 2
            //     j = 1,2
            //     printo 12

            // i = 3
            //     j = 1,2,3
            //     printo 123
        }

        printf("\n"); 
        // Output: 
        // 1
        // 12
        // 123
    }


    // ==========================
    // Çfarë printohet?
    // ==========================

    int y = 0;

    for(int i = 1; i <= 5; i++)
    {
        y += i;

        if(y > 6)
        {
            printf("%d ", y);
        }

        // i = 1 -> y = 0 + 1 = 1
        // i = 2 -> y = 1 + 2 = 3
        // i = 3 -> y = 3 + 3 = 6
        // i = 4 -> y = 6 + 4 = 10 -> printo 10
        // i = 5 -> y = 10 + 5 = 15 -> printo 15
    }

    printf("\n"); // Output: 10 15


    // ==========================
    // Cili është output-i?
    // ==========================

    for(int i = 3; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        // i = 3
        //     j = 3,2,1
        //     -> 321

        // i = 2
        //     j = 2,1
        //     -> 21

        // i = 1
        //     j = 1
        //     -> 1

        printf("\n");
        // Output:
        // 321
        // 21
        // 1
    }


    // ==========================
    // Çfarë printohet?
    // ==========================

    int a = 1;

    for(int i = 1; i <= 4; i++)
    {
        a += a;
    }

    printf("%d\n", a);
    // a = 1
    // Iterimi 1:
    // a = 1 + 1 = 2

    // Iterimi 2:
    // a = 2 + 2 = 4

    // Iterimi 3:
    // a = 4 + 4 = 8

    // Iterimi 4:
    // a = 8 + 8 = 16

    
    return 0;
}

// Çfarë e bën for loop më të rregullt se while?
// for loop është më i rregullt kur e dimë sa herë do të përsëritet kodi,
// sepse inicializimi, kushti dhe ndryshimi i variablës ndodhen në një rresht.
// Tek while, inicializimi dhe ndryshimi zakonisht shkruhen veçmas..