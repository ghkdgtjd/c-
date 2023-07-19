#include <iostream>

int SimpleFunc(int a=10)
{
    return a+1;
}

int SimpleFunc(void)
{
    return 10;
}

// 함수호출 시 인자를 전달하지 않았을 때 
// 두가지의 경우가 있기 때문에 에러가 발생한다