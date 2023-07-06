#include <stdio.h>

int countSequences(int n) {
    int dp[n + 1]; // Масив для збереження кількості допустимих послідовностей довжиною i
    int i;

    // Початкові значення
    dp[0] = 1; // Порожня послідовність
    dp[1] = 2; // Послідовність з одним символом (0 або 1)
    dp[2] = 3; // Послідовність з двома символами (00, 01, 10)

    // Обчислення кількості допустимих послідовностей
    for (i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 12345; // Застосовуємо рекурентне співвідношення
    }

    return dp[n]; // Повертаємо кількість допустимих послідовностей довжиною n
}

int main() {
    int n;
    printf("Введіть довжину послідовності (n): ");
    scanf("%d", &n);

    int result = countSequences(n); // Обчислення кількості допустимих послідовностей
    printf("Кількість допустимих послідовностей: %d\n", result);

    return 0;
}