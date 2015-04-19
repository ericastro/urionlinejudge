#include <stdio.h>

int main() {

    double a = 0.0 , b = 0.0, c = 0.0,  MEDIA = 0.0;
    scanf("%lf%lf%lf",&a,&b,&c);
    MEDIA = ( (a*2) + (b*3) + (c*5) ) / 10;
    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;
}
