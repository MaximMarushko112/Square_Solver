#include <stdio.h>

int main() {
    double a = 0, b = 0, c = 0;
    int x = scanf("%lf %lf %lf", &a, &b, &c);
    printf("%d", x);
}
/*int get_coef(double* n) {       // переназвать, комменты к непонятным местам
    assert(n != NULL);

    int symbol = 0, sign = 0, power = 1;
    double x = 0;
    while (isspace(symbol = getchar()))          // удаляем пустые символы
        ;
    sign = (symbol == '-') ? -1 : 1;             // определяем знак числа
    if (symbol == '-' || symbol == '+')
        symbol = getchar();
    while (isdigit(symbol)) {                    // целая часть числа
        x = x * 10 + symbol - '0';
        symbol = getchar();
    }
    if (isspace(symbol)) {                       // принимаем целое число
        *n = x * sign;
        return 0;
    }
    else if (symbol == '.' || symbol == ',') {   // принимаем дробное число
        while (isdigit(symbol = getchar())) {
        x = x * 10 + symbol - '0';
        power *= 10;
        }
        if (power == 1 || !isspace(symbol))
            return ER_DURAK;
        else {
            *n = sign * x / power;
            return 0;
        }
    }
    else
        return ER_DURAK;
}*/

int read_coefs(double coefs[]) {
    int flag = 0;
    unsigned int i = 0;
    printf("Enter coefficients a, b, c: ");
    for (i = 0; i < NUM_OF_COEFS; i++) {
        flag = read_coef(&coefs[i]);
    }
    skip_line();
    if (flag == ER_DURAK) {
        printf("DURAK\n");
        return 1;
    }
    return 0;
}

void put_coefs_in_ST(struct SquareTrinomial* eq, double coefs[]) {
    eq->a = coefs[0];
    eq->b = coefs[1];
    eq->c = coefs[2];
}

double coefs[NUM_OF_COEFS] = {};

put_coefs_in_ST(&eq, coefs);

void put_coefs_in_ST(struct SquareTrinomial* eq, double coefs[]);


/**
 * Проверяет вводимые пользователем коэфиценты.
 * Вызывает функцию read_coefs до тех пор, пока пользователь не введёт корректные данные.
 * @param[in, out] eq
 */
void verify_coefs(struct SquareTrinomial* eq);

void verify_coefs(struct SquareTrinomial* eq) {
    while (read_coefs(eq));
}
