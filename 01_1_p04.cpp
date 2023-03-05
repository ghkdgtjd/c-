# include <iostream>

int main(void)
{
    int val;
    while(1)
    {
        std::cout<<"판매 금액을 만운 단위로 입력(-1 to end): ";
        std::cin>>val;
        if(val==-1)
            break;
        std::cout<<"이번 달 급여: "<<50+val*0.12<<"만원"<<std::endl;
    }
    std::cout<<"프로그램을 종료합니다."<<std::endl;
    
    return 0;
}
