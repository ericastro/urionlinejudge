#include <stdio.h>

int main() {
    char *name;
    double salary = 0.0, sales = 0.0, salaryTotal = 0.0;
    scanf("%s",&name);
    scanf("%lf%lf",&salary,&sales);
    salaryTotal = ( salary + ( (sales/100) * 15 ) ) ;
    printf("TOTAL = R$ %.2lf\n", salaryTotal);
    return 0;
}
