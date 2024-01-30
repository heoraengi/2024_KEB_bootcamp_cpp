#include<iostream>
using namespace std;

int main(){
    int n = 1;
    int& rn = n;

    rn =100;

    cout << "n : " << n << endl; 
    cout << "rn : " << rn << endl;
    // rn의 값을 바꾸면 n도 바뀜
    cout << "n의 주소 : " << &n << endl; 
    cout << "rn의 주소 : " << &rn << endl; 
    // 변수 n과 같은 주소(메모리)를 공유함 

    // 출력결과
    //  n : 100
    // rn : 100
    // n의 주소 : 0x7fffffffdb8c
    // rn의 주소 : 0x7fffffffdb8c
}