#include "fraction.h"
#include<iostream>
using namespace std;

int main()
{
    Fraction f1;
    Fraction f2(14, 21);
    Fraction f3(11, -8);
    Fraction f4(f3);

    cout << "생성한 분수 출력" << endl;
    cout << "분수 1 : ";
    f1.printFract();
    cout << "분수 2 : ";
    f2.printFract();
    cout << "분수 3 : ";
    f3.printFract();
    cout << "분수 4 : ";
    f4.printFract();

    cout << "두 분수를 변경하고 출력" << endl;
    f1.setNumer(4);
    cout << "분수 1 : ";
    f1.printFract();
    f2.setDenom(-5);
    cout << "분수 2 : ";
    f2.printFract();
    cout << "get으로 분자 분모 확인" << endl;
    cout << "f1의 분자" << f1.getNumer() << endl;
    cout << "f2의 분모" << f2.getDenom() << endl;
    return 0;
}