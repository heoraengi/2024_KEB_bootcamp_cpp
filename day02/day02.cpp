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
#include <iostream>
using namespace std;
int main() {

    int num;
    int reverse_num = 0;
    int temp;

    cout << "세자리 정수를 입력하세요 : ";
    cin >> num;

    for (int i = 0; i < 3; i++) {
        temp = num % 10;
        reverse_num = (reverse_num * 10) + temp;
        num /= 10;
    }

    cout << "역순으로 출력 했습니다. : " << reverse_num;

    return 0;
}