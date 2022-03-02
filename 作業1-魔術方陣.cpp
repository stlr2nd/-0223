#include <iostream>
using namespace std;

bool isValidNumber(int a){  //驗證數字
    if(a % 2 == 1 && 1 <= a && a <= 11)
        return true;
    else
        return false;
}


void magic(int **magicArr, int length){  //傳入「矩陣位置的位置」和「矩陣大小」
            
        for(int i = 0; i < length; i++){
            for(int j = 0; j < length; j++){
                //magic square 演算法
                magicArr[i][j] = ((i + j + 1 + (length/2)) % length) + ((i + 2*j +1) % length) + 1;
            }
        }
            
        //列印
        for(int i = 0; i < length; i++){
            for(int j = 0; j < length; j++){
                cout<< magicArr[i][j]<<'\t';
            }
            cout<< endl;
        }
}

int main(){
    
    cout<< "請輸入一個奇數：";
    int length;
    cin >> length;
    
    //製作二維的動態矩陣
    int **magicArr =  new int *[length];
    for(int i = 0; i < length; i++){
        magicArr[i] = new int[length];
    }
    
    //檢查使用者輸入的數字是否在定義域內，奇數k，k屬於[3,11]
    if (isValidNumber(length)) {
        magic(magicArr, length);
    } else {
        cout<< "無效字元";
    }

return 0;
}
