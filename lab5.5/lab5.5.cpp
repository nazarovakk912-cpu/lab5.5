#include <iostream>
using namespace std;

// Рекурсивна функція для обчислення a_n
double a(int n, int depth = 1) {
    cout << "Рівень рекурсії: " << depth << ", обчислюємо a(" << n << ")\n";

    if (n == 1) {
        cout << "Глибина рекурсії досягнута: " << depth << endl;
        return 1.0;
    }

    double prev = a(n - 1, depth + 1);
    return (1.0 / 3.0) * (2.0 * prev + 8.0 / (prev * prev));
}

int main() {
    int n;
    cout << "Введіть n: ";
    cin >> n;

    double result = a(n);

    cout << "\nЗначення a(" << n << ") = " << result << endl;
    return 0;
}