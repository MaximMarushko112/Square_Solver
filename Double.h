#ifndef DOUBLE_H_INCLUDED
#define DOUBLE_H_INCLUDED

/**
 * ���������� ����� a � b ���� double.
 * ���������� -1, ���� a < b, 0, ���� a = b, � 1, ���� a > b.
 * @param[in] a, b ������������ �����
 */
int compare_double(double a, double b);

/**
 * ���������, ����� �� ���������� ����� ���� double ����.
 * ���������� true, ���� ��, � false, ���� ���.
 * @param[in] n
 * @returns is_zero
 */
bool is_zero(double n);

#endif // DOUBLE_H_INCLUDED
