// #include<iostream>
// using namespace std;

// int main(){
//     int n = 1;
//     int& rn = n;

//     rn =100;

//     cout << "n : " << n << endl; 
//     cout << "rn : " << rn << endl;
//     // rn의 값을 바꾸면 n도 바뀜
//     cout << "n의 주소 : " << &n << endl; 
//     cout << "rn의 주소 : " << &rn << endl; 
//     // 변수 n과 같은 주소(메모리)를 공유함 

//     // 출력결과
//     //  n : 100
//     // rn : 100
//     // n의 주소 : 0x7fffffffdb8c
//     // rn의 주소 : 0x7fffffffdb8c
// }

#include <iostream>
using namespace std;
int addConstRef(const int& n1, const int& n2){
    return n1+ n2;
}

int addRef(int& n3, int& n4){
    return n3+n4;
}

int main(){
    cout << "상수참조를 사용 : "<< addConstRef(1,2) << endl;

    int n3 = 3;
    int n4 = 4;
    cout << "상수참조를 미사용 : "<< addRef(n3,n4) << endl;
    return 0;
}