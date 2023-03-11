#include <iostream>

void swap(int* a, int* b)/** a = num1, b=num2*/
{
    int c = *a;
    std::cout<<a<<' '<<*a<<' '<<b<<' '<<*b<<' '<<c<<std::endl;
    *a = *b;
    std::cout<<a<<' '<<*a<<' '<<b<<' '<<*b<<' '<<c<<std::endl;
    *b = c;
    std::cout<<a<<' '<<*a<<' '<<b<<' '<<*b<<' '<<c<<std::endl;
}

int main(void)
{
    int num1 = 10, num2=20;
    swap(&num1, &num2);
    std::cout<<&num1<<' '<<&num2<<std::endl;
    std::cout<<num1<<' '<<num2<<std::endl;

    return 0;
}