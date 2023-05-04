#include "doctest.h"
#include <stdexcept>
#include <sstream>
#include "sources/Fraction.hpp"

using namespace ariel;

TEST_CASE("Test the + operator"){
Fraction f1(2, 3);
Fraction f2(1, 4);
Fraction f3 = f1 + f2;
CHECK(f3 == Fraction(11, 12));
}
TEST_CASE("Test the + operator"){
Fraction f1(1, 2);
Fraction f2(1, 2);
Fraction f3 = f1 + f2;
CHECK(f3 == Fraction(1, 1));
}
TEST_CASE("Test the - operator"){
Fraction f1(2, 3);
Fraction f2(1, 4);
Fraction f3 = f1 - f2;
CHECK(f3 == Fraction(5, 12));
}
TEST_CASE("Test the - operator"){
Fraction f1(1, 2);
Fraction f2(1, 4);
Fraction f3 = f2 - f1;
CHECK(f3 == Fraction(-1,4));
}
TEST_CASE("Test the - operator"){
Fraction f1(1, 2);
Fraction f2(1, 2);
Fraction f3 = f1 - f2;
CHECK(f3 == 0);
}
TEST_CASE("Test the * operator"){
Fraction f1(2, 3);
Fraction f2(1, 4);
Fraction f3 = f1 * f2;
CHECK(f3 == Fraction(1, 6));
}
TEST_CASE("Test the * operator"){
Fraction f1(1, 2);
Fraction f2(1, 2);
Fraction f3 = f1 * f2;
CHECK(f3 == Fraction(1, 4));
}
TEST_CASE("Test the / operator"){
Fraction f1(2, 3);
Fraction f2(1, 4);
Fraction f3 = f1 / f2;
CHECK(f3 == Fraction(8, 3));
}
TEST_CASE("Test the / operator"){
Fraction f1(1, 2);
Fraction f2(1, 2);
Fraction f3 = f1 / f2;
CHECK(f3 == 1);
}

TEST_CASE("Test the == operator"){
Fraction f1(1, 2);
Fraction f2(1, 2);
CHECK(f1 == f2);
}
TEST_CASE("Test the != operator"){
Fraction f1(1, 3);
Fraction f2(1, 2);
CHECK(f1 != f2);
}
TEST_CASE("Test the > operator"){
Fraction f1(1, 2);
Fraction f2(1, 3);
CHECK(f1 > f2);
}
TEST_CASE("Test the < operator"){
Fraction f1(1, 2);
Fraction f2(1, 3);
CHECK(f1 < 1);
Fraction f3 = f2-f1;
CHECK(f3 < 0);
}
TEST_CASE("Test the <= operator"){
Fraction f1(7, 3);
Fraction f2(1, 3);
CHECK(f2 <= f1);
CHECK(f1 <= Fraction(8, 3));
}
TEST_CASE("Test the prefix ++ operator"){
Fraction f1(7, 3);
++f1;
CHECK(f1 == Fraction(10, 3));
}
TEST_CASE("Test the prefix ++ operator"){
Fraction f1(7, 3);
--f1;
CHECK(f1 == Fraction(4, 3));
}
TEST_CASE("Test the + operator with float"){
Fraction f1(2, 3);
float f3 = 2.5;
Fraction f7 = f1 +f3;
CHECK(f7 == Fraction(19, 6));
}
TEST_CASE("Test the - operator with float"){
Fraction f1(2, 3);
float f3 = 2.5;
Fraction f7 = f1 -f3;
CHECK(f7 == Fraction(-11, 6));
}
TEST_CASE("Test the / operator with float"){
Fraction f1(3, 3);
float f3 = 2;
Fraction f7 = f1/f3;
CHECK(f7 == Fraction(1, 2));
}
TEST_CASE("Test the * operator with float"){
Fraction f1(3, 3);
float f3 = 2;
Fraction f7 = f1*f3;
CHECK(f7 == Fraction(4, 2));
}
TEST_CASE("Test the + operator with float"){
Fraction f1(2, 3);
Fraction f7 = f1 +f1;
CHECK(f7 == Fraction(4, 3));
}

TEST_CASE("Test the prefix ++ operator"){
Fraction f1(7, 3);
--f1;
CHECK(f1 == Fraction(4, 3));
}
TEST_CASE("Test the prefix ++ operator"){
Fraction f1(7, 3);
--f1;
CHECK(f1 == Fraction(4, 3));
}
TEST_CASE("Test divide by zero: ")
{
    Fraction f1(1, 1);
    Fraction f2(0, 0);
    CHECK_THROWS_AS(f1 / f2, invalid_argument);
}
