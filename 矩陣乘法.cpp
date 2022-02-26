//
//  矩陣乘法.cpp
//  矩陣乘法
//
//  Created by 椰子樹 on 2022/2/25.
//

#include <iostream>
using namespace std;

void multiply(int A[3][3], int B[3][3]){
    
    cout << sizeof(A) << "；" << sizeof(A[0]) << endl; //8跟12
    cout << sizeof(A[0]) << "；" << sizeof(A[0][0]) << endl; //12跟4
    
    int A_rows = sizeof(A)/sizeof(A[0]);
    int A_cols = sizeof(A[0])/sizeof(A[0][0]);
    int B_rows = sizeof(B)/sizeof(B[0]);
    int B_cols = sizeof(B[0])/sizeof(B[0][0]);
    
    cout << "A有" <<A_rows << "列" << endl;
    cout << "A有" <<A_cols << "行" << endl;
    cout << "B有" <<B_rows << "列" << endl;
    cout << "B有" <<B_cols << "行" << endl;
    
    if ( A_cols != B_rows) {
        cout << "錯誤！A的行數需等於B的列數才能進行矩陣乘法" << endl;
        return;
    };
    
    int C[A_rows][B_cols];
    int x[A_cols]; //x0,x1,x2,...,x(A_cols-1)
    
    for (int c = 0; c < B_cols; c++) {
        
        int b[A_cols];
        for (int k = 0; k < A_cols; k++) {
            x[k] = B[k][c];
        }
        for (int r = 0; r < A_cols; r++) {
            b[r] = 0;
            for (int k2 = 0; k2 < A_cols; k2++) {
                b[r] = b[r] + A[r][k2] * x[k2];
            }
            C[r][c] = b[r];
        }
    }
    
    for(int j = 0; j < A_rows; j++){
        for(int i = 0; i < B_cols; i++){
            cout<< C[j][i]<<'\t';
        }
        cout<< endl;
    }
    
}

int main() {
    
    int A[3][3] = {
        {1,2,6},
        {8,4,3},
        {5,9,7},
    };
    int B[3][3] = {
        {0,7,4},
        {8,1,0},
        {3,3,3},
    };
    multiply(A,B);
    return 0;
}

