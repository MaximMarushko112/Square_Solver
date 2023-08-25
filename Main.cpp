#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include "SquareEquation.h"
#include "Input_Output.h"
#include "Double.h"
#include "Unit_Test.h"

int main(int argc, const char **argv) {
    is_there_key(argc, argv);

    struct SquareTrinomial eq = {0, 0, 0};

    hello_ded();

    if (read_coefs(&eq) == EXIT)
        return EXIT;

    double root1 = 0;
    double root2 = 0;
    int result = solve_equation(eq, &root1, &root2);

    print_result(result, root1, root2);

    return 0;
}
