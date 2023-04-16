#include <iostream>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace ariel;
using namespace std;

TEST_CASE("operators") {
    Fraction a(1, 2), b(1, 4);
    CHECK(a + b == 1.5 + 0.25);
    CHECK(a - b == 1.5 - 0.25);
    CHECK(a * b == 1.5 * 0.25);
    CHECK(a / b == 1.5 / 0.25);
}

TEST_CASE("comparison operators") {
    Fraction a(3, 8), b(1, 5);
    CHECK(a > b == (3 / 8) > (1 / 5));
    CHECK(a < b == (3 / 8) < (1 / 5));
    Fraction c(1, 4), d(2, 4);
    CHECK(c >= d == (3 / 8) >= (1 / 5));
    CHECK(c <= d == (3 / 8) <= (1 / 5));
}


TEST_CASE("test") {
    CHECK_THROWS(Fraction a(3, 0)); // Division by zero is undefined
    CHECK_THROWS(Fraction a(0, 0)); // Division by zero is undefined
    Fraction a(0,34234); // == 0
    CHECK(a == 0);
}
