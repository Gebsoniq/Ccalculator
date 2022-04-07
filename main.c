#include <stdio.h>

int main() {

    char op;
    double first, second;
    printf("Wybierz operacje (+, -, *, /): ");
    scanf("%c", &op);
    printf("Podaj dwie cyfry: ");
    scanf("%lf %lf", &first, &second);

    switch (op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
            break;
            // operator doesn't match any case constant
        default:
            printf("Operator jest nieprawidlowy");
    }

    return 0;
}
