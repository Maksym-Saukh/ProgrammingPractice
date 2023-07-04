#include <stdio.h>

// Функція для знаходження найбільшого спільного дільника (НСД) двох чисел
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для знаходження найменшого спільного кратного (НСК) двох чисел
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

// Функція для знаходження НСК масиву чисел
int findArrayLCM(int arr[], int n) {
    int lcm = arr[0];
    for (int i = 1; i < n; i++) {
        lcm = findLCM(lcm, arr[i]);
    }
    return lcm;
}

int main() {
    int n;
    printf("Введіть кількість чисел: ");
    scanf("%d", &n); // Вводимо кільсть чисел

    int numbers[n];
    printf("Введіть числа, розділені пробілом: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]); // Запис чисел в масив
    }

    int lcm = findArrayLCM(numbers, n);
    printf("Найменше спільне кратне: %d\n", lcm);// Вивід НСК

    return 0;
}
