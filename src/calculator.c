#include <stdio.h>
#include <math.h>

double potencia(double base, double exp) {
    return pow(base, exp);
}

int main() {
    double x, y, result;
    char op;

    printf("Ingrese operacion (+ - * / ^): ");
    scanf(" %c", &op);

    printf("Ingrese x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error: entrada invalida\n");
        return 1;
    }

    printf("Ingrese y: ");
    if (scanf("%lf", &y) != 1) {
        printf("Error: entrada invalida\n");
        return 1;
    }

    switch (op) {
        case '+':
            result = x + y;
            break;

        case '-':
            result = x - y;
            break;

        case '*':
        case 'x':
            result = x * y;
            break;

        case '/':
            if (y == 0) {
                printf("Error: division por cero\n");
                return 1;
            }
            result = x / y;
            break;

        case '^':
            result = potencia(x, y);
            break;

        default:
            printf("Operacion invalida\n");
            return 1;
    }

    printf("Resultado: %lf\n", result);

    return 0;
}
