/// @file SquareEquation.h
#ifndef SQUAREEQUATION_H_INCLUDED
#define SQUAREEQUATION_H_INCLUDED

                                ///< ���������, ����������� �� ����������� ����� �������.
// TODO:                             ^~~~~~~~~ strongly consider switching to English

/// ��������� �������� ���������� ������.
enum {
    SS_INF_ROOTS = -1,    ///< ����������� ����� ������.
    ZERO = 0,                 ///< ���� ������.
    ONE = 1,                  ///< ���� ������.
    TWO = 2,                  ///< ��� �����.
};

/// ���������, �������� ���������� ����������� ��������.
struct SquareTrinomial
{
    double a;    ///< ��������� ��� x^2
    double b;    ///< ��������� ��� x
    double c;    ///< ��������� ���������
};

/**
 * ������ ��������� ax^2 + bx + c = 0.
 * ��������� �� ���� ���������� ������� � ��������� �� ����������, ���������� �����.
 * �������� ������� ��� ������� ���������� ����� ���������.
 * ���������� ���������� ������ ���������.
 * @param[in] eq   ���������� �������
 * @param[out] x1, x2   ����� ���������
 * @returns num_of_roots
 */
int solve_equation(struct SquareTrinomial eq, double* x1, double* x2);

/**
 * ������ �������� ��������� kx + b = 0.
 * ���������� ���������� ������.
 * ���� ������ ����, ������� ��� �������� �� ��������� �� ���������� x.
 * @param[in] k, b
 * @param[out] x  ������ ���������
 * @returns num_of_roots
 */
int solve_line_equation(double k, double b, double* x);

/**
 * ������ ���������� ��������� ax^2 + bx + c = 0, (a != 0).
 * ���������� ���������� ������ ���������.
 * ���� ����� 2, ������� �� �� ���������� x1 � x2.
 * ���� ������ 1, ������� ��� �� ��������� x1.
 * @param[in] eq   ���������� ���������� �������
 * @param[out] x1, x2 ����� ���������
 * @returns num_of_roots
 */
int solve_square_equation(struct SquareTrinomial eq, double* x1, double* x2);

#endif // SQUAREEQUATION_H_INCLUDED
