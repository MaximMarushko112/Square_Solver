#ifndef UNIT_TEST_H_INCLUDED
#define UNIT_TEST_H_INCLUDED

const size_t NUM_OF_TESTS = 6;
extern const char* KEY;

struct TestData {
    struct SquareTrinomial ST;
    double x1, x2;
    int nroots;
};

extern struct TestData ARRAY_OF_TESTS[NUM_OF_TESTS];

void one_test(const struct TestData TD, int num);

void full_unit_test(struct TestData TD[]);

void check_key(const char str[]);

void is_there_key(int argc, const char** argv);

#endif // UNIT_TEST_H_INCLUDED
