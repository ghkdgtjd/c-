#include <iostream>

void swap(int* a, int* b)
{
    int* c = a;
    std::cout<<a<<' '<<b<<' '<<c<<std::endl;
    a = b;
    std::cout<<a<<' '<<b<<' '<<c<<std::endl;
    b = c;
    std::cout<<a<<' '<<b<<' '<<c<<std::endl;
    &num1 = b;
    &num2 = a;
}

int main(void)
{
    int num1 = 10, num2=20;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    return 0;
}