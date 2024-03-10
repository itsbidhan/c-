#include <iostream>
#include <cmath>

double f(double x) {
    return x * x;  // function f(x) = x^2
}

double derivative(double (*f)(double), double x, double h) {
    return (f(x) - f(x - h)) / h;
}

int main() {
    double x = 1;
    double h = 0.2;  // small step size
    std::cout << "The derivative of f at x = " << x << " is approximately "
              << derivative(f, x, h) << std::endl;
    return 0;
}

