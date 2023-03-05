#include <iostream>

int main(void)
{
    char name[100];
    char lang[200];

    std::cout<<"what is your name>";
    std::cin>>name;

    std::cout<<"what is your favorite language>";
    std::cin>>lang;


    std::cout<<"my name is "<<name<<".\n";
    std::cout<<"my favorite laguage is "<<lang<<"."<<std::endl;
}