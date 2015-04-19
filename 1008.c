#include <stdio.h>

int main() {
    int number = 0;
    double hours = 0.0, salaryPerHour = 0.0, salaryTotal = 0.0;
    scanf("%d",&number);
    scanf("%lf%lf",&hours,&salaryPerHour);
    salaryTotal = ( hours * salaryPerHour ) ;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2lf\n", salaryTotal);
    return 0;
}
