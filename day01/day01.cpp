// cout, cin 사용법
#include <iostream>

using namespace std;

int main()
{
    int i0;
    int i1;
    int sum;
    int ia;
    double a;
    const double PI = 3.14;

    cout << "i0의 값을 입력하세요 : " << endl;
    cin >> i0;
    cout << "당신은 i0을 위해서" << i0 << "를 입력했어요" << endl;

    cout << "i1의 값을 입력하세요 : " << endl;
    cin >> i1;
    cout << "당신은 i1을 위해서" << i0 << "를 입력했어요" << endl;

    sum = i0 + i1;

    ia = static_cast<double>(i0) / static_cast<double>(i1);
    a = static_cast<double>(i0) / static_cast<double>(i1);

    cout << "a=i0/i1=" << a << endl;
    cout << "a/Pi=" << a / PI << endl;
    cout << "ia=i0/i1=" << ia << endl;

    return 0;
}