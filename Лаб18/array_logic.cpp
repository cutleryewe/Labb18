#include "array_logic.h"

// Реализация логической функции проверки цифры 5
bool hasExactlyOneFive(int number) {
    int count = 0;

    // Обрабатываем число, пока оно не станет равным 0
    // Используем проверку на 5 и -5 для корректной работы с отрицательными числами
    while (number != 0) {
        int digit = number % 10;
        if (digit == 5 || digit == -5) {
            count++;
        }
        number /= 10;
    }

    // Возвращаем true, только если цифра 5 встретилась ровно один раз
    return count == 1;
}

// Реализация функции вычисления произведения
long long calculateProduct(const int* arr, int size) {
    long long product = 1;
    bool found = false; // Флаг для отслеживания, был ли найден хотя бы один элемент

    for (int i = 0; i < size; ++i) {
        if (hasExactlyOneFive(arr[i])) {
            product *= arr[i];
            found = true;
        }
    }

    // Если подходящих элементов нет, возвращаем 0 как индикатор отсутствия результата
    return found ? product : 0;
}