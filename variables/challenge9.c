#include<stdio.h>
#include<math.h>

int main() {
    double x1, y1, x2, y2, distance;
    printf("donner cordonnees du premier point (x et y separe par espace): ");
    scanf("%lf %lf", &x1, &y1);
    printf("donner cordonnees du deuxieme point (x et y separe par espace): ");
    scanf("%lf %lf", &x2, &y2);
    distance = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
    printf("distance entre point1(%.2lf, %.2lf) et point2(%.2lf, %.2lf) = %.2lf", x1, y1, x2, y2, distance);
    return 0;
}