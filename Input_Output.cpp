#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include "Input_Output.h"
#include "SquareEquation.h"

void hello_ded(){
    printf("# Square_Solver v1.3\n"
           "# directed by Maxim\n\n");
}

void print_result(int result, double root1, double root2) {
    assert(isfinite(root1));
    assert(isfinite(root2));

    switch (result) {
    case SS_INF_ROOTS:
        printf("(-inf; +inf)\n");
        break;

    case ZERO:
        printf("NULL\n");
        break;

    case ONE:
        printf("x = %lf\n", root1);
        break;

    case TWO:
        printf("x1 = %lf\nx2 = %lf\n", root1, root2);
        break;

    default:
        fputs("result error", stderr); // вместо stdout в stderr, попробуй найти функцию похожую на printf которая это делает
    }
}

int read_coef(double* n) {
    char end_line = 0;

    if (scanf("%lf", n)) {
        scanf("%c", &end_line);
        if (end_line == '\n')
            return 1;
    }

    return 0;
}

int read_coefs(struct SquareTrinomial* eq) {
    assert(eq != NULL);

    printf("If you want to exit enter \"Q\"\n");
    printf("Enter a: ");

    if (read_enter(&eq->a) == EXIT)
        return EXIT;

    printf("Enter b: ");
    if (read_enter(&eq->b) == EXIT)
        return EXIT;

    printf("Enter c: ");
    if (read_enter(&eq->c) == EXIT)
        return EXIT;

    return 0;
}

void skip_line() {
    while (getchar() != '\n');
}

int exit() {
    const char exit_sym = 'Q';
    char exit_key = 0, end_line = 0;

    scanf("%c", &exit_key);
    if (exit_key == exit_sym) {
        scanf("%c", &end_line);
        if (end_line == '\n')
            return  EXIT;
    }
    return 0;
}

int read_enter(double* n) {
     for (int i = 0; i <= 10; i++) {
        if (read_coef(n))
            return 0;

        if (exit() == EXIT)
            return EXIT;

        skip_line();

        if (i < 10)
            printf("DURAK\nRepeat: ");

        else
            printf("GOODBYE, IDIOT!");
    }
    return EXIT;
}
