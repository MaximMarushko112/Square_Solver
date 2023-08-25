#include <assert.h>
#include <math.h>
#include "Double.h"

int compare_double(double a, double b) { // TODO: consider making this a static function
    assert(isfinite(a));
    assert(isfinite(b));

    const double EPS = 1e-6; ///<  онстанта, отвечающа€ за точность сравнений.

    if (fabs(a - b) < EPS)
        return 0;
    return (a < b) ? -1 : 1;
}

bool is_zero(double n) {
    return (!compare_double(n, 0));
}
