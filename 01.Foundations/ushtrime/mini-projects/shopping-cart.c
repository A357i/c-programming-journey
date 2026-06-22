#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // User can type in: Name of item, prize and quantity
    char item[50] = "";
    char currency = '$';
    int quantity = 0;
    float price = 0.0f;
    float total = 0.0f;

    printf("Shenoni qfarë deshironi te shtoni: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Sasia e produkteve: ");
    scanf("%d", &quantity);

    printf("Shenoni qmimin e produktit/eve: ");
    scanf("%f", &price);

    total = price * quantity;

    printf("\nJu keni bler %d %s\n", quantity, item);
    printf("%c%.2f", currency, total);

}