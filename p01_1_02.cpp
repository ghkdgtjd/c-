#include <iostream>

int main(void)
{
    char name[50];
    int number;

    std::cout<<"what is your name?";
    std::cin>>name;

    std::cout<<"what is your phone number?";
    std::cin>>number;

    std::cout<<"name:"<<name<<"\n";
    std::cout<<"mobile:"<<number<<std::endl;

    return 0;
}