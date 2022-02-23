//
//  main.cpp
//  資料結構0223
//
//  Created by 椰子樹 on 2022/2/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int quantity_of_cols; //quantity_of_cols跟quantity_of_rows相等，故只用col表達
    cout << "請輸入矩陣行數（或列數）：";
    //cin >> quantity_of_cols;
    quantity_of_cols = 5; //暫時先固定設為5
    int index_of_cols = quantity_of_cols - 1; //index_of_cols跟index_of_rows相等，故只用col表達
    
    int the_matrix[index_of_cols][index_of_cols];
    int index_of_middle = index_of_cols / 2;
    int current_row = 0;
    int current_col = index_of_middle;
    
    for (int row = 0; row <= index_of_cols; ++row) {
        for (int col = 0; col <= index_of_cols; ++col) {
            the_matrix[row][col] = 0;
        }
    }
    
    /*
    for (int number = 1; number <= quantity_of_cols * quantity_of_cols; ++number) {
        the_matrix[current_row][current_col] = number;
        if (current_row == 0) {
            current_row = index_of_cols;
        }else{
            current_row = current_row - 1;
        }
        if (current_col == 0) {
            current_col = index_of_cols;
        }else{
            current_col = current_col - 1;
        }
        number = number + 1;
    }*/
    
    
    for (int row = 0; row <= index_of_cols; ++row) {
        for (int col = 0; col <= index_of_cols; ++col) {
            cout << the_matrix[row][col];
        }
        cout << endl;
    }
    
    return 0;
}
