/// @file Input_Output.h
#ifndef INPUT_OUTPUT_H_INCLUDED
#define INPUT_OUTPUT_H_INCLUDED

const int EXIT = -10;     ///< Константа для выхода из программы.

/**
 * Выводит результаты решения уравнения.
 * Если корней нет, выводит "NULL".
 * Если корней 1 или 2, выводит их.
 * Если корней бесконечно много, выводит "(-inf; +inf)".
 * @param[in] result  Количество корней уравнения
 * @param[in] root1, root2
 */
void print_result(int result, double root1, double root2);

/**
 * Получает значение одного коэфицента.
 * Если он введён корректно, передаёт его по указателю n и возвращает 0.
 * Если ввести "Q", возвращает EXIT.
 * Иначе просит ввести коэфицент заново.
 * @param[out] n
 */
int read_coef(double* n);

/// Выводит ознакомительную информацию для пользователя.
void hello_ded();

/**
 * Принимает все коэффициенты квадратного трёхчлена.
 * Сперва говорит, что для выхода нужно ввести "Q".
 * Если пользователь не вводил "Q", принимает коэффициенты и вносит их по указателю eq.
 * Если пользователь ввёл "Q", возвращает EXIT.
 * @param[out] eq
 */
int read_coefs(struct SquareTrinomial* eq);

/// Очищает буфер ввода.
void skip_line();

int exit();

int read_enter(double* n);

#endif // INPUT_OUTPUT_H_INCLUDED
