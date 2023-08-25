/// @file SquareEquation.h
#ifndef SQUAREEQUATION_H_INCLUDED
#define SQUAREEQUATION_H_INCLUDED

                                ///< Константа, указывающая на бесконечное число решений.
// TODO:                             ^~~~~~~~~ strongly consider switching to English

/// Возможные варианты количества корней.
enum {
    SS_INF_ROOTS = -1,    ///< Бесконечное число корней.
    ZERO = 0,                 ///< Ноль корней.
    ONE = 1,                  ///< Один корень.
    TWO = 2,                  ///< Два корня.
};

/// Структура, хранящая коэфиценты квадратного трёхчлена.
struct SquareTrinomial
{
    double a;    ///< Коэфицент при x^2
    double b;    ///< Коэфицент при x
    double c;    ///< Свободный коэфицент
};

/**
 * Решает уравнения ax^2 + bx + c = 0.
 * Принимает на вход квадратный трёхчлен и указатели на переменные, содержащие корни.
 * Вызывает функции для решения конкретных типов уравнений.
 * Возвращает количество корней уравнения.
 * @param[in] eq   Получаемый трёхчлен
 * @param[out] x1, x2   Корни уравнения
 * @returns num_of_roots
 */
int solve_equation(struct SquareTrinomial eq, double* x1, double* x2);

/**
 * Решает линейное уравнение kx + b = 0.
 * Возвращает количество корней.
 * Если корень один, передаёт его значение по указателю на переменную x.
 * @param[in] k, b
 * @param[out] x  Корень уравнения
 * @returns num_of_roots
 */
int solve_line_equation(double k, double b, double* x);

/**
 * Решает квадратное уравнение ax^2 + bx + c = 0, (a != 0).
 * Возвращает количество корней уравнения.
 * Если корня 2, передаёт их по указателям x1 и x2.
 * Если корень 1, передаёт его по указателю x1.
 * @param[in] eq   Получаемый квадратный трёхчлен
 * @param[out] x1, x2 Корни уравнения
 * @returns num_of_roots
 */
int solve_square_equation(struct SquareTrinomial eq, double* x1, double* x2);

#endif // SQUAREEQUATION_H_INCLUDED
