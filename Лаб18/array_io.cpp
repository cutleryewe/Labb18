#include "array_io.h"
#include <iostream>

int* createArray(int size) {
    if (size <= 0) return nullptr;
    return new int[size];
}

void inputArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void outputArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void deleteArray(int* arr) {
    delete[] arr;
}