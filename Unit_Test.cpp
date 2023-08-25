#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "SquareEquation.h"
#include "Double.h"
#include "Unit_Test.h"

const char* KEY = "Test";

struct TestData ARRAY_OF_TESTS[NUM_OF_TESTS] = {{{0, 0, 0}, 0, 0, SS_INF_ROOTS},
                                                {{0, 0, 1}, 0, 0, ZERO},
                                                {{0, 1, 1}, -1, 0, ONE},
                                                {{1, 1, 1}, 0, 0, ZERO},
                                                {{1, 2, 1}, -1, 0, ONE},
                                                {{1, 3, 2}, -2, -1, TWO}};

void one_test(const struct TestData TD, int num) {
    double x1 = 0, x2 = 0;
    int nroots = solve_equation(TD.ST, &x1, &x2);

    if (nroots != TD.nroots || compare_double(x1, TD.x1) || compare_double(x2, TD.x2)) {
        printf("FAILED: x1 = %lf, x2 = %lf, nroots = %d\n", x1, x2, nroots);
        printf("EXPECTED: x1 = %lf, x2 = %lf, nroots = %d\n\n", TD.x1, TD.x2, TD.nroots);
    }

    else
        printf("Test #%d OK\n\n", num);
}

void full_unit_test(struct TestData TD[]) {
    for (unsigned int i = 0; i < NUM_OF_TESTS; i++)
        one_test(TD[i], i + 1);
}

void check_key(const char* str) {
    if (!strcmp(KEY, str))
        full_unit_test(ARRAY_OF_TESTS);
}

void is_there_key(int argc, const char** argv) {
    if (argc > 1)
        check_key(argv[1]);
}
