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

// #include <iostream>
// using namespace std;
// int addConstRef(const int& n1, const int& n2){
//     return n1+ n2;
// }

// int addRef(int& n3, int& n4){
//     return n3+n4;
// }

// int main(){
//     cout << "상수참조를 사용 : "<< addConstRef(1,2) << endl;
//     int n3 = 3;
//     int n4 = 4;
//     cout << "상수참조를 미사용 : "<< addRef(n3,n4) << endl;
//     return 0;
// }
// // 상수참조를 사용하면 곧바로 함수 호출이 가능하다.
// // 상수참조를 사용하지 않는다면 번거롭게 변수 할당을 한 후에 진행해야한다.

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3] ={0};

//     for(int i=0; i<(sizeof(arr)/sizeof(*arr)); i++){
//         cout<< "arr["<<i <<"] : " << &arr[i] << endl;
//         // 배열 주소가 4씩 증가함
//         // arr[0] : 0x7fffffffdb8c 
//         // arr[1] : 0x7fffffffdb90
//         // arr[2] : 0x7fffffffdb94
//     }
//     return 0;
// }
//이항 계수 구하기
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int maxPower=10;
    int n;
    do{
        cout<< "n을 입력하세여 : ";
        cin >> n;
    }while(n < 0 || n > maxPower);

    // 힙메모리에 할당
    // 이항계수를 계산하려면 입력한 값에 더하기 1을 해줘야 크기가 맞음
    int** p =new int*[n+1]; 
    for(int i =0; i<n+1;i++){
        p[i] = new int[i];
    }
    
    // 이항계수 구하기
    for(int i =0; i<=n; i++){
        for(int j = 0; j<i+1;j++){
            if(j==0 || i==j){
                p[i][j]=1;
            }
            else{
                p[i][j] = p[i-1][j-1] + p[i-1][j];
            }
        }
    }

    // 이항계수 계산 확인
    for(int i =0; i<=n; i++){
        for(int j = 0; j<i+1;j++){
            cout <<setw(5) <<  p[i][j] ;  
        }
        cout << endl; 
    }

    // 결과 출력 
    cout <<"(x+y)^" <<n<<"의 이항계수 : ";
    for(int j=0; j<=n;j++){
        cout << setw(5) << p[n][j];
    }

    // 힙 메모리 제거 
    cout << endl;
    for(int i =0; i<n+1; i++){
        delete[] p[i];
    }
    delete[] p;

    return 0;
}