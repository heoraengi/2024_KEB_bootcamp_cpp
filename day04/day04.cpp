// // const 사용 위치에 따른 의미
// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 1;
//     int *ptr1 = &num1;
//     int temp = 1000;

//     cout << "num1 : " << num1 << endl;
//     cout << "ptr1 : " << ptr1 << endl;
//     cout << "*ptr1 : " << *ptr1 << endl;
//     num1 = 3;
//     cout << "num1 = 3 : " << num1 << endl;
//     cout << "*ptr1 : " << *ptr1 << endl;
//     *ptr1 = 2;
//     cout << "*ptr1=2 : " << *ptr1 << endl; 
//     cout << "num1 : " << num1 << endl;
//     ptr1 = &temp;
//     cout << "ptr1 = &temp : " << *ptr1 << endl;

//     // 출력 결과
//     // num1 : 1
//     // ptr1 : 0x7fffffffdb80
//     // *ptr1 : 1
//     // num1 = 3 : 3
//     // *ptr1 : 3
//     // *ptr1=2 : 2
//     // num1 : 2
//     // ptr1 = &temp : 1000

//     int num2 = 10;
//     const int *ptr2 = &num2; // 포인터 변수가 가리키는 값을 상수화 시키는 것으로 *ptr값을 바꾸는 건 불가능
//     // 하지만 num2값 자체를 바꾸는 건 가능
//     // 추가로 ptr의 주소값을 바꾸는 것도 가능!

//     cout << "num2 : " << num2 << endl;
//     cout << "ptr2 : " << ptr2 << endl;
//     cout << "*ptr2 : " << *ptr2 << endl;
//     num2 = 30;
//     cout << "num2 = 30 : " << num2 << endl;
//     cout << "*ptr2 : " << *ptr2 << endl;
//     // *ptr2 = 20; // 컴파일 에러 발생
//     ptr2 = &temp;
//     cout << "ptr2 = &temp : " << *ptr2 << endl;
//     // 출력결과
//     // num2 : 10
//     // ptr2 : 0x7fffffffdb84
//     // *ptr2 : 10
//     // num2 = 30 : 30
//     // *ptr2 : 30
//     // ptr2 = &temp : 1000

//     int num3 = 100;
//     int * const ptr3 = &num3; // 포인터 변수 자체를 상수화 시키는 것
//     // num3 값 자체를 바꾸는 건 가능
//     // *ptr값을 바꾸는 것도 가능
//     // 하지만 ptr의 주소 값을 바꾸는 것은 불가능

//     cout << "num3 : " << num3 << endl;
//     cout << "ptr3 : " << ptr3 << endl;
//     cout << "*ptr3 : " << *ptr3 << endl;
//     num3 = 300;
//     cout << "num3 = 300 : " << num3 << endl;
//     cout << "*ptr3 : " << *ptr3 << endl;
//     *ptr3 = 200;
//     cout << "*ptr3 = 200 : " << *ptr3 << endl;
//     cout << "num3 : " << num3 << endl;
//     //ptr3 = &temp;

//     //출력결과
//     // num3 : 100
//     // ptr3 : 0x7fffffffdb7c
//     // *ptr3 : 100
//     // num3 = 300 : 300
//     // *ptr3 : 300
//     // *ptr3 = 200 : 200
//     // num3 : 200

//     return 0;
// }

//3개의 랜덤한 숫자를 정의하고 만들기
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class RandomInteger
{
    private :
        int low;
        int high;
        int value;
    public :
        RandomInteger(int low, int high);
        ~RandomInteger();
        RandomInteger(const RandomInteger& random) = delete; // 복사 생성자 막기 위해 = delete 라고 사용
        void print() const;
};

RandomInteger::RandomInteger(int lw, int hh) 
:low(lw), high(hh)
{
    srand(time(0));
    int temp = rand();
    value = temp % (high-low +1) + low;
}

RandomInteger::~RandomInteger()
{
}

void RandomInteger::print() const
{
    cout << value << endl;
}

int main()
{
    RandomInteger r1(100,200);
    cout <<"100~200 사이의 랜덤한 숫자 : ";
    r1.print();

    RandomInteger r2(400,600);
    cout <<"400~600 사이의 랜덤한 숫자 : ";
    r2.print();

    RandomInteger r3(1500,2000);
    cout <<"1500~2000 사이의 랜덤한 숫자 : ";
    r3.print();
    return 0;
}