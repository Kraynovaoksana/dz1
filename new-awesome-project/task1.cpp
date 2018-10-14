#include <iostream>

float calc(float a, char op, float b) {
    return a+b;
}
float calca(float a, char op, float b){
    return a-b;
}
float calcal(float a, char op, float b){
    return a*b;
}
float calcalc(float a, char op, float b){
    return a/b;
}

int main() {
    float a = 1.6, b = 0.4, result;
    char operation = '-';

    if ('+' == operation){
        std::cout << calc(a,operation, b) << '\n';
    }
    else if ('-' == operation){
        std::cout << calca(a,operation, b) << '\n';
    }
    else if ('*' == operation){
        std::cout << calcal(a,operation, b) << '\n';
    }
    else if ('/' == operation){
        std::cout << calcalc(a,operation, b) << '\n';
    }

    return 0;
}