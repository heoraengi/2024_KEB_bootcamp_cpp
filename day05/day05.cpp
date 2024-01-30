#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){

    const int CAPACITY = 10;
    int frequencies[CAPACITY] = {0};
    ifstream integerFile;

    integerFile.open("integerFile.dat");
    if(!integerFile){
        cout <<"숫자 파일을 열 수 없습니다."<<endl;
        cout <<"프로그램을 중단합니다." ;
        return 0;
    }
    // BOM 제거
    char bom[3];
    integerFile.read(bom, 3);
    if (!(bom[0] == (char)0xEF && bom[1] == (char)0xBB && bom[2] == (char)0xBF)) {
        // BOM이 아니라면 파일 포인터를 처음으로 되돌림
        integerFile.seekg(0);
    }
    int data ;
    int size = 0;
    while(integerFile >> data){
        if(data>=0 && data<=9){
            size++;
            frequencies[data]++;
        }
    }
    integerFile.close();

    cout << "파일 안에 " << size << "개의 유효한 데이터가 있습니다." << endl;

    for(int i =0; i<10; i++){
        cout << setw(3) << i << " ";
        for(int f=1; f<=frequencies[i]; f++){
            cout <<'*';
        }
        cout<< " " << frequencies[i]<< endl;
    }
    return 0;
}