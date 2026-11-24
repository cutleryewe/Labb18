#include <iostream>
#include "array_io.h"
#include "array_logic.h"

int main() {
    // Устанавливаем локаль для корректного отображения кириллицы в консоли
    setlocale(LC_ALL, "Russian");

    int size = 0;

    // 1. Ввод массива (вызов функции из модуля I/O)
    int* arr = inputArray(size);

    std::cout << "\nВведенный массив:\n";
    // 2. Вывод массива (вызов функции из модуля I/O)
    outputArray(arr, size);

    // 3. Вычисление произведения (вызов функции из модуля логики)
    long long result = calculateProduct(arr, size);

    // 4. Вывод результата
    if (result == 0) {
        std::cout << "В массиве нет элементов, содержащих ровно одну цифру 5.\n";
    }
    else {
        std::cout << "Произведение элементов, содержащих ровно одну цифру 5: "
            << result << "\n";
    }

    // 5. Освобождение динамически выделенной памяти
    delete[] arr;

    return 0;
}