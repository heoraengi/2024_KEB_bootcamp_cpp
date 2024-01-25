// 달력 생성기 
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int start;
    int days;
    int col = 1;

    do{
    cout <<"달의 날자 중에 원하는 수를 입력하세요(28,29,30,31) : ";
    cin >> days;
    }while(days < 28 || days > 31);

    do{
        cout <<"요일을 숫자로 표현해주세요(0~6) : ";
        cin >> start;
    }while(start<0 || start>6);

    cout << endl;
    cout<<"Sun Mon Tue Wed Thr Fri Sat" << endl;
    cout<<"===========================" << endl;
    for (int space = 0; space < start; space++)
    {
        cout << "    ";
        col++;
    }
    // setw() : 출력하는 데이터의 칸을 지정한 수 만큼 정렬해줌
    for (int day=1; day<=days; day++){
        cout << setw(3) << day << " ";
        col++;
        if (col >7){
            cout << endl;
            col = 1;
        }
    }
    cout << endl;
    return 0;
}
