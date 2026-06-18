#include <stdio.h>
#include <string.h>

int main() {
    // Project 1: Calculator i thjeshtë +, -, *, /

    int Num1;
    int Num2;
    char operator;

    printf("Shkruaj numrin e par: ");
    scanf("%d", &Num1);

    printf("Zgjidh njeren: + , - , * , / : ");
    scanf(" %c", &operator);                    // Kujdes:
                                                // scanf("%d", &Num1) lexon vetëm numrin.
                                                // Kur shtyp Enter, karakteri '\n' mbetet në buffer.
                                                //
                                                // Nëse përdor scanf("%c", &operator),
                                                // operatori mund të marrë '\n' në vend të '+' '-' '*' '/'.
                                                //
                                                // Hapësira para %c bën që scanf të injorojë
                                                // whitespace-et (' ', '\n', '\t', Enter) dhe të lexojë
                                                // operatorin e vërtetë që shkruan përdoruesi.

    printf("\nShkruaj numrin e dyt: ");
    scanf("%d", &Num2);

    if (operator == '+')
    {
        int shuma = Num1 + Num2;
        printf("Shuma: %d", shuma);
    } else if (operator == '-')
    {
        int shuma = Num1 - Num2;
        printf("Shuma: %d", shuma);
    } else if (operator == '*')
    {
        int shuma = Num1 * Num2;
        printf("Shuma: %d", shuma);
    } else if (operator == '*')
    {
        int shuma = Num1 / Num2;
        printf("Shuma: %d", shuma);
    } else {
        printf("Shtyp operator logjik!");
    }
    
}


