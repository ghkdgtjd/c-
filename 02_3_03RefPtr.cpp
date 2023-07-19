#include <iostream>
using namespace std;

int main(void)
{
    int num = 12;
    int *ptr = &num;   //ptr은 주소인데, num을 가르킨다
    int **dptr = &ptr; //dptr도 주소인데, ptr을 가르킨다

    int &ref = num; //ref는 num을 참조
    int *(&pref) = ptr; //pref참조자는 주소인데, prt을 가르킨다
    int **(&dpref) = dptr;

    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;

    return 0; 
    }