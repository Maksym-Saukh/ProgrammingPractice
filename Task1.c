#include <stdio.h>

int main() {
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3); // Зчитуваання значень t1 t2 t3

    float total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3; // Обчислюємо загальний час, який займе кожен гість,шляхом обчислення оберненого значення та додавання їх разом. 
    float time_to_eat_pie = 1.0 / total_time; // Час який потрібен, щоб з'їсти пиріг гостям разом

    printf("%.2f\n", time_to_eat_pie);// Вивід

    return 0;
}
