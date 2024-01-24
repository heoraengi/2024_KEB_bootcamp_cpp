// 복합 할당
//#include //<iostream>
//using namespace std;
//int main()
//{
//   int x = 10;
//   int y = 200;
//   
//   // 내부적 할당
//   /*x = x + 10;
//   y = y - 10;*/
//
//   // 복합할당
//   x += 10;
//   y -= 10;
//   
//   cout << "x = x + 10 =" << x << endl;
//   cout << "y = y - 10  =" << y;
//   return 0;
//}

// 세자리 정수 입력하고 역순으로 출력시키기
// #include <iostream>
// using namespace std;
// int main() {

//     int num;
//     int reverse_num = 0;
//     int temp;

//     cout << "세자리 정수를 입력하세요 : ";
//     cin >> num;

//     for (int i = 0; i < 3; i++) {
//         temp = num % 10;
//         reverse_num = (reverse_num * 10) + temp;
//         num /= 10;
//     }

//     cout << "역순으로 출력 했습니다. : " << reverse_num << endl;

//     return 0;
// }

//

// 3-28
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){
//     double number;
//     int intPart;
//     double fractPart;

//     cout << "소수를 입력하세요 : ";
//     cin >> number;

//     intPart = static_cast<int>(number);
//     fractPart = number -intPart;
    
//     cout << fixed << showpoint << setprecision(2); 
//     // fixed :  고정 소수점 출력
//     // showpoint : 소수점을 보여준다.
//     // setprecision : 입력한 숫자만큼 소수점에서 반올림 
//     cout <<"원래 입력한 소수 : " << number << endl;
//     cout <<"정수 부분 : " << intPart << endl;
//     cout <<"소수점 아래 부분 : " << fractPart << endl;

//     return 0;
// }

//3-29
// #include <iostream>
// using namespace std;

// int main(){
//     unsigned int number, firstDigit;

//     cout << "양의 정수 입력 : ";
//     cin >> number;

//     firstDigit = number % 10;

//     cout <<"입력한 정수 : " << number <<endl ;
//     cout <<"첫 번째 자릿수 추출 : " <<firstDigit << endl;
//     return 0;
// }

//3-30
// #include<iostream>
// #include<typeinfo>
// using namespace std;

// int main(){
//     unsigned int inputSeconds;
//     unsigned int hours, minutes, seconds;

//     cout << "초 단위 시간을 입력하세요 (양의 정수로 입력 필요) : ";
//     cin >> inputSeconds;

//     hours = inputSeconds / (60*60);
//     minutes = (inputSeconds - (hours * (60*60))) / 60 ;
//     seconds = (inputSeconds - (hours * (60*60)) - (minutes*60));

//     cout << "입력된 초 단위 시간 : " << inputSeconds <<endl;
//     cout << "결과 : " << hours <<"시 " << minutes <<"분 " << seconds <<"초" <<endl;
//     return 0;
// }

//4-15
#include<iostream>
using namespace std;

int main(){
    int score1, score2, score3, maxScore, minScore, score;

    cout << "첫 번째 점수 입력 : ";
    cin >> score1;
    cout << "두 번째 점수 입력 : ";
    cin >> score2;
    cout << "세 번째 점수 입력 : ";
    cin >> score3;

    // 최대값 찾기
    if(score1 > score2 && score1 > score3){
        maxScore = score1;
    }
    else if(score2 > score1 && score2 > score3){
        maxScore = score2;
    }
    else{
        maxScore = score3;
    }

    // 최소값 찾기
    if(score1 < score2 && score1 < score3){
        minScore = score1;
    }
    else if(score2 < score1 && score2 < score3){
        minScore = score2;
    }
    else{
        minScore = score3;
    }
    
    int temp = maxScore + minScore;
    if(temp%2==1){
        temp +=1;
    }
    score = temp/2;
    cout << "입력한 점수 = " << score1 <<" "<< score2 <<" "<< score3 << endl;
    cout <<"최소 점수 : " << minScore << endl;
    cout <<"최대 점수 : " << maxScore << endl;
    cout <<"학생 성적 : " << score << endl;
    return 0;
}