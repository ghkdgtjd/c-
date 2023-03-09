#include <iostream>

void swap(int* a, int* b)
{
    int num1 = *b;
    int num2 = *a;
}

void swap(char* a, char* b)
{
    char ch1 = *b;
    char ch2 = *a;
}

void swap(double* a, double* b)
{
    double dbl1 = *b;
    double dbl2 = *a;
}


int main(void)
{
    int num1=20, num2=30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char ch1='A', ch2='Z';
    swap(&ch1, &ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    double dbl1=1.111, dbl2=5.555;
    swap(&dbl1, &dbl2);
    std::cout<<dbl1<<' '<<dbl2<<std::endl;
    return 0;
}