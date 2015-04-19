#include <stdio.h>

int main() {
    int codPeca_1 = 0 , codPeca_2 = 0;
    int quantPeca_1 = 0 , quantPeca_2 = 0;
    double valorUnitarioPeca_1 = 0.0, valorUnitarioPeca_2 = 0.0;
    double valorAPagar = 0.0;
    scanf("%d%d%lf", &codPeca_1, &quantPeca_1, &valorUnitarioPeca_1);
    scanf("%d%d%lf", &codPeca_2, &quantPeca_2, &valorUnitarioPeca_2);
    valorAPagar = ( (quantPeca_1 * valorUnitarioPeca_1) + (quantPeca_2 * valorUnitarioPeca_2) );
    printf("VALOR A PAGAR: R$ %.2f\n",valorAPagar);
    return 0;
}
