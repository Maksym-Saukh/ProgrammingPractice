#include <stdio.h>
#include <math.h>

// Функція для обчислення довжини вектора за його координатами
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    double length;
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;

    // Використовуємо формулу Евклідової відстані для обчислення довжини
    length = sqrt(deltaX * deltaX + deltaY * deltaY);
    return length;
}

int main() {
    int x1, y1, x2, y2;

    printf("Введіть координати початку вектора (x1, y1): "); // Вводимо x1 y1
    scanf("%d %d", &x1, &y1);

    printf("Введіть координати кінця вектора (x2, y2): "); // Вводимо x2 y2
    scanf("%d %d", &x2, &y2);

    // Обчислюємо довжину вектора викликом функції calculateVectorLength
    double length = calculateVectorLength(x1, y1, x2, y2);

    // Виводимо результат з точністю до шести знаків після коми
    printf("Довжина вектора: %.6f\n", length);

    return 0;
}
