#include <iostream>

void swap(int* a, int* b)
{
    std::cout<<b<<"\n"<<*b<<"\n"<<a<<"\n"<<*a<<std::endl;
    static int num1 = *b;
    std::cout<<b<<"\n"<<*b<<"\n"<<a<<"\n"<<*a<<std::endl;
    static int num2 = *a;
    std::cout<<b<<"\n"<<*b<<"\n"<<a<<"\n"<<*a<<std::endl;
    std::cout<<num1<<' '<<num2<<std::endl;

}

int main(void)
{
    int num1 = 10, num2=20;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    return 0;
}