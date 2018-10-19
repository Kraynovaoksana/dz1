#include <iostream>

float poo(float a, char b, float c){
    switch (b) {
        case '+':
            return a+c;
            break;
        case '-':
            return a-c;
            break;
        case '*':
            return a*c;
            break;
        case '/':
            return a/c;
            break;
    }
}
int main() {
    float a=0.1, c=0.5;
    char b= '+';
    std::cout « poo(a, b, c) « '\n';
    return 0;
}