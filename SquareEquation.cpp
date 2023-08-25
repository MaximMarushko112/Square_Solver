#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include "SquareEquation.h"
#include "Double.h"

int solve_equation(struct SquareTrinomial eq, double* x1, double* x2) {
    assert(isfinite(eq.a));
    assert(isfinite(eq.b));
    assert(isfinite(eq.c));

    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(x1 != x2);

    if (is_zero(eq.a))
        return  solve_line_equation(eq.b, eq.c, x1);

    return solve_square_equation(eq, x1, x2);
}

int solve_line_equation(double k, double b, double* x) {
    assert(isfinite(k));
    assert(isfinite(b));

    assert(x != NULL);

    if (is_zero(k)) {
        if (is_zero(b)) {
            return SS_INF_ROOTS;
        }

        else {
            return 0;
        }
    }

    else {
        *x = -b / k;
        return 1;
    }
}

int solve_square_equation(struct SquareTrinomial eq, double* x1, double* x2) {
    assert(isfinite(eq.a));
    assert(isfinite(eq.b));
    assert(isfinite(eq.c));

    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(x1 != x2);

    double disc = eq.b * eq.b - 4 * eq.a * eq.c;
    switch (compare_double(disc, 0)) {

    case -1:
        return 0;

    case 0: {
        *x1 = -eq.b / (2 * eq.a);
        return 1;
    }

    case 1: {
        disc = sqrt(disc);
        *x1 = (-eq.b - disc) / (2 * eq.a);
        *x2 = (-eq.b + disc) / (2 * eq.a);
        return 2;
    }

    default:
        fputs("equation error", stderr);
        break;
    }
    return 0;
}
