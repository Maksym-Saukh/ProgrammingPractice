#include <stdio.h>
#include <math.h>

int main() {
    int p;
    printf("Введіть кількість розрядів (p ≤ 30): ");// Вводимо кількість розрядів
    scanf("%d", &p); // Зчитуємо в змінну

    long long count = pow(2, p) - (p - 2); // Рахуємо за формулою

    printf("Кількість чисел з %d розрядів: %lld\n", p, count); // Виводимо знаяення

    return 0;
}
