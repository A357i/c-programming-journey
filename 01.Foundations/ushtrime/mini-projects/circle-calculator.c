#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float Radius;
    float Diameter;
    float Circumference;
    float Area;
    float SurfaceArea;
    float Volume;
    const double PI = 3.14159;

    printf("Shkruaj rrezen: ");
    scanf("%f", &Radius);

    Diameter = 2 * Radius;
    Circumference = 2 * PI * Radius;
    Area = PI * pow(Radius, 2);
    SurfaceArea = 4 * PI * pow(Radius, 2);
    Volume = (4.0 / 3.0) * PI * pow(Radius, 3);

    printf("Diametri: %.2f", Diameter);
    printf("\nPerimetri: %.2f", Circumference);
    printf("\nSiperfaqja: %.2f", Area);
    printf("\nSipërfaqja e Jashtme: %.2f", SurfaceArea);
    printf("\nVëllimi: %.2f", Volume);
}