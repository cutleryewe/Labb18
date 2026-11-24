#pragma once
#ifndef ARRAY_LOGIC_H
#define ARRAY_LOGIC_H

/**
 * @brief Логическая функция проверки наличия ровно одной цифры 5 в записи числа.
 * @param number Проверяемое целое число.
 * @return true, если цифра 5 встречается в числе ровно один раз, иначе false.
 */
bool hasExactlyOneFive(int number);

/**
 * @brief Функция вычисления произведения элементов, содержащих ровно одну цифру 5.
 * @param arr Указатель на массив целых чисел.
 * @param size Размер массива.
 * @return Произведение подходящих элементов (тип long long для предотвращения переполнения).
 *         Возвращает 0, если подходящих элементов не найдено.
 */
long long calculateProduct(const int* arr, int size);

#endif // ARRAY_LOGIC_H