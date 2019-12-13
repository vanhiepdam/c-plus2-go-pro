#include <iostream>
#include <cstdlib>
// Models a mathematical rational number
class SimpleRational
{
    int numerator;
    int denominator;
public:
// Initializes the components of a Rational object
    SimpleRational(int n, int d): numerator(n), denominator(d)
    {
        if (d == 0)
        {
// Display error message
            std::cout << "Zero denominator error\n";
            exit(1); // Exit the program
        }
    }
// The default constructor makes a zero rational number
// 0/1
    SimpleRational(): numerator(0), denominator(1) {}
// Allows a client to reassign the numerator
    void set_numerator(int n)
    {
        numerator = n;
    }
// Allows a client to reassign the denominator.
// Disallows an illegal fraction (zero denominator).
    void set_denominator(int d)
    {
        if (d != 0)
            denominator = d;
        else
        {
// Display error message
            std::cout << "Zero denominator error\n";
            exit(1); // Exit the program
        }
    }
// Allows a client to see the numerator's value.
    int get_numerator()
    {
        return numerator;
    }
// Allows a client to see the denominator's value.
    int get_denominator()
    {
        return denominator;
    }
    // MY CODE
    SimpleRational reduce() {
	// Details go here
	int highest_divisible;
	if(numerator < denominator) {
		for(int c = 1; c <= numerator; c++) {
			if(numerator % c == 0 && denominator % c == 0) {
				highest_divisible = c;
			}
		}
	} else {
		for(int c = 1; c <= denominator; c++) {
			if(numerator % c == 0 && denominator % c == 0) {
				highest_divisible = c;
			}
		}
	}
	set_numerator(numerator / highest_divisible);
	set_denominator(denominator / highest_divisible);
    }
};
// Returns the product of two rational numbers
SimpleRational multiply(SimpleRational f1, SimpleRational f2)
{
    return {f1.get_numerator() * f2.get_numerator(),
            f1.get_denominator() * f2.get_denominator()};
}
void print_fraction(SimpleRational f)
{
    std::cout << f.get_numerator() << "/" << f.get_denominator();
}
int main() {
    SimpleRational test;
    test.set_numerator(10);
    test.set_denominator(20);
    test.reduce();
    print_fraction(test);
}
