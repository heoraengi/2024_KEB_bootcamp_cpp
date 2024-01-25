// 달력 생성기 
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     int start;
//     int days;
//     int col = 1;

//     do{
//     cout <<"달의 날자 중에 원하는 수를 입력하세요(28,29,30,31) : ";
//     cin >> days;
//     }while(days < 28 || days > 31);

//     do{
//         cout <<"요일을 숫자로 표현해주세요(0~6) : ";
//         cin >> start;
//     }while(start<0 || start>6);

//     cout << endl;
//     cout<<"Sun Mon Tue Wed Thr Fri Sat" << endl;
//     cout<<"===========================" << endl;
//     for (int space = 0; space < start; space++)
//     {
//         cout << "    ";
//         col++;
//     }
//     // setw() : 출력하는 데이터의 칸을 지정한 수 만큼 정렬해줌
//     for (int day=1; day<=days; day++){
//         cout << setw(3) << day << " ";
//         col++;
//         if (col >7){
//             cout << endl;
//             col = 1;
//         }
//     }
//     cout << endl;
//     return 0;
// }

// 정다격형의 둘레와 넓이 구하기
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    const double PI = 3.141592653589793238462;
    int n;
    double s, peri, area;

    do{
        cout<<"변의 개수를 입력하세요 (4이상의 정수) : ";
        cin >> n;
    }while(n<4);
    do{
        cout << "변의 길이를 입력하세요 : ";
        cin >> s;
    }while(s <=0.0);
    peri = n*s;
    area = (n*pow(s,2)) / (n*tan(PI/n));
    cout<<"둘레 : " << peri << endl;
    cout <<"넓이 : " << area << endl;

    return 0;
}