/// @file Input_Output.h
#ifndef INPUT_OUTPUT_H_INCLUDED
#define INPUT_OUTPUT_H_INCLUDED

const int EXIT = -10;     ///< ��������� ��� ������ �� ���������.

/**
 * ������� ���������� ������� ���������.
 * ���� ������ ���, ������� "NULL".
 * ���� ������ 1 ��� 2, ������� ��.
 * ���� ������ ���������� �����, ������� "(-inf; +inf)".
 * @param[in] result  ���������� ������ ���������
 * @param[in] root1, root2
 */
void print_result(int result, double root1, double root2);

/**
 * �������� �������� ������ ����������.
 * ���� �� ����� ���������, ������� ��� �� ��������� n � ���������� 0.
 * ���� ������ "Q", ���������� EXIT.
 * ����� ������ ������ ��������� ������.
 * @param[out] n
 */
int read_coef(double* n);

/// ������� ��������������� ���������� ��� ������������.
void hello_ded();

/**
 * ��������� ��� ������������ ����������� ��������.
 * ������ �������, ��� ��� ������ ����� ������ "Q".
 * ���� ������������ �� ������ "Q", ��������� ������������ � ������ �� �� ��������� eq.
 * ���� ������������ ��� "Q", ���������� EXIT.
 * @param[out] eq
 */
int read_coefs(struct SquareTrinomial* eq);

/// ������� ����� �����.
void skip_line();

int exit();

int read_enter(double* n);

#endif // INPUT_OUTPUT_H_INCLUDED
