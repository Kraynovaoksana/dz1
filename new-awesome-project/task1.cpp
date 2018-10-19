#include <iostream>

float q(float a, char b, float c) {
    return a+c;
}
float w(float a, char b, float c) {
    return a-c;
}
float e(float a, char b, float c) {
    return a*c;
}
float r(float a, char b, float c) {
    return a/c;
}
int main() {
    float a=0.4, c=0.6, result;
    char b='+';
    if ('+' ==b){
        std::cout « q(a, b, c) « '\n';
    }
    else if ('-' ==b) {
        std::cout « w(a, b, c) « '\n';
    }
    else if ('*' ==b) {
        std::cout « e(a, b, c) « '\n';
    }
    else if ('/' ==b) {
        std::cout « r(a, b, c) « '\n';
    }
    return 0;
}