#include <stdio.h>

int main() {

    int choice = 0;
    float ft = 0.0f;
    float cm = 0.0f;

    printf("****Height Coverter****");
    printf("\n1.Convert feet to Centimetre");
    printf("\n2.Convert Centimetre to Feet");
    printf("\nZgjedh: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Konverto feet ne Centimetra: ");
        scanf("%f", &ft);
        cm = ft * 30.48;
        printf("%.2f feet eshte %.2f cm", ft, cm);
    } else if (choice == 2)
    {
        printf("Konverto Centimetra ne Feet: ");
        scanf("%f", &cm);
        ft = cm / 30.48;
        printf("%.2f Centimetra eshte %.2f Feet", cm, ft);
    } else {
        printf("Zgjedh numrin e duhur!");
    }
    
}