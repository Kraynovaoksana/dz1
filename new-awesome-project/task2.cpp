#include <iostream>

float calculator(float a, char op, float b) {
    switch (op) {
        case '-':
            return a - b;
            break;
        case '+':
            return a + b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
    }
}
int main() {
    float a = 3.4, b = 2.5, result;
    char operation = '+';
    std::cout << calculator(a, operation, b) << '\n';
    return 0;
}