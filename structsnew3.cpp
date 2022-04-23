#include <iostream>
struct complex
{
    int real;
    int imaginary;
} s1,s2;

void add_two_complex(complex s1,complex s2)
{
    complex tmp;
    tmp.real = s1.real + s2.real;
    tmp.imaginary = s1.imaginary + s2.imaginary;
    std::cout  << "The result of addition is equal to (" << tmp.real << ") + (" << tmp.imaginary << "i)" << std::endl;
    return;
    
}
void sub_two_complex(complex s1,complex s2)
{
    complex tmp;
    tmp.real = s1.real - s2.real;
    tmp.imaginary = s1.imaginary - s2.imaginary;
    std::cout << "The result of subtraction is equal to (" << tmp.real << ")" << "-" << "(" << tmp.imaginary << "i)" << std::endl;

    return;
}

void mul_two_complex(complex s1, complex s2)
{
    int real = s1.real * s2.real;
    int imaginary = s1.imaginary * s2.imaginary;
    int imaginary_real = s1.imaginary * s2.real;
    int real_imaginary = s1.real * s2.imaginary;
    std::cout << "The result of the multiplication is equal to (" << real - imaginary << ")" << " + (" << imaginary_real + real_imaginary << "i)" << std::endl;

    return;
}

void div_two_complex(complex s1, complex s2)
{
    int real = (s1.real * s2.real) + (s1.imaginary * s2.imaginary) / (s2.real * s2.real + s2.imaginary * s2.imaginary);
    int imaginary = (s1.imaginary * s2.real) - (s1.real * s2.imaginary) / (s2.real * s2.real) + (s2.imaginary * s2.imaginary); 
    std::cout << "The result of the division is equal to (" << real << ") + (" << imaginary << "i)" << std::endl;
}

int main()
{
    complex s1,s2;

    std::cout << "Please enter the real part of the first number: ";
    std::cin >> s1.real;
    std::cout << "Please enter the imaginary part of the first number: ";
    std::cin >> s1.imaginary;
    std::cout << "Please enter the real part of the second number: ";
    std::cin >> s2.real;
    std::cout << "Please enter the imaginary part of the second number: ";
    std::cin >> s2.imaginary;
 
	    add_two_complex(s1,s2);
	    sub_two_complex(s1,s2);
	    mul_two_complex(s1,s2);
	    div_two_complex(s1,s2);

    return 0;
}
