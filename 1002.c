#include <stdio.h>

int main()
{
    double raio = 0.0, area = 0.0, PI = 3.14159;
    scanf("%lf",&raio);
    area = PI * (raio * raio);
    printf("A=%.4f\n",area);
    return 0;
}
