// helped: https://www.youtube.com/watch?v=o-qRv9WjGdE

#ifndef FRACTION_A_FRACTION_H
#define FRACTION_A_FRACTION_H
#include <stdio.h>
#include <string>
namespace ariel {}
using namespace std;

class Fraction {
private:
    int num;
    int den;
public:
    Fraction(int num1, int num2);

    Fraction operator+(const Fraction &other);

    Fraction operator-(const Fraction &other);

    Fraction operator*(const Fraction &other);

    Fraction operator/(const Fraction &other);

    Fraction operator==(const Fraction &other);

    Fraction operator>(const Fraction &other);

    Fraction operator<(const Fraction &other);

    Fraction operator<=(const Fraction &other);

    Fraction operator>=(const Fraction &other);

    friend std::ostream &operator<<(std::ostream &output, const Fraction fraction);

    friend std::istream &operator>>(std::istream &input, Fraction &fraction);


};


#endif //FRACTION_A_FRACTION_H

