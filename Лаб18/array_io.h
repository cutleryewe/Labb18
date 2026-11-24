#ifndef ARRAY_IO_H
#define ARRAY_IO_H

// Выделение памяти под динамический массив
int* createArray(int size);

// Ввод элементов массива с клавиатуры
void inputArray(int* arr, int size);

// Вывод элементов массива на экран
void outputArray(const int* arr, int size);

// Освобождение памяти массива
void deleteArray(int* arr);

#endif // ARRAY_IO_H