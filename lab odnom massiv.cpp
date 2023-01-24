#include <iostream>

int main(int argc, const char* argv[]) {
    setlocale(LC_ALL, "Russian");
    int array[] = { 1, 3, 5, 7, 9, 11 };
    int d = array[1] - array[0];
    int length = sizeof(array) / sizeof(*array);
    for (unsigned i = 1; i < length - 1; i++) {
        if (array[i + 1] - array[i] != d) {
            std::cout << "нет арифметической прогрессии" << std::endl;
            return 0;
        }
    }
    std::cout << "есть арифметическая прогрессия. ее разность равна " << d << std::endl;
    return 0;
}
