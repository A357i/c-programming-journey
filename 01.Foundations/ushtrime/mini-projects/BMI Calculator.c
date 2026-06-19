#include <stdio.h>

int main() {
    float pesha;
    float gjatsia;

    printf("Shkruaj Peshën: ");
    scanf("%f", &pesha);

    printf("Shkruaj Gjatësinë: ");
    scanf("%f", &gjatsia);

    float BMI = pesha / (gjatsia * gjatsia);

    if (BMI <= 18.5)
    {
        printf("BMI-ja jote eshte: %.2f ---> Nënpeshë", BMI);
    } else if (BMI <= 24.9)
    {
        printf("BMI-ja jote eshte %.2f ---> Normal", BMI);
    } else if (BMI <= 29.9)
    {
        printf("BMI-ja jote eshte %.2f ---> Mbipeshë", BMI);
    } else
    {
        printf("BMI-ja jote eshte %.2f ---> Obez", BMI);
    }
    
}