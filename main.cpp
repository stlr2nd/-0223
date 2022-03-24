//
//  main.cpp
//  learncpp
//
//  Created by 椰子樹 on 2022/3/9.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int i,j;
    int M_Row = 3;
    int M_Col = 4;
    float Score[4][4] = {
        {92,87,82,90},
        {87,90,85,92},
        {85,88,92,95}
    };
    string tab = "\t\t";
    string name[3] = {"張三","李四","王五"};
    cout << "姓名" << tab << "國文" << tab << "英文" << tab << "數學"
    << tab << "資結" << tab << "總分" << tab << "平均" << endl;
    
    int total;
    
    for(j = 0; j < M_Row; j++){
        cout << name[j] << tab;
        total = 0;
        for(int i = 0; i < M_Col; i++){
            cout<< Score[j][i] << tab;
            total = total + Score[j][i];
        }
        cout << total << tab << total / 4.0 << endl; //前者是總分，後者是平均
    }
    cout << tab;
    for (i = 0; i < M_Col; i++) {
        total = 0;
        for(j = 0; j < 3; j++){
            total = total + Score[j][i];
        }
        cout << total/(float)M_Row << tab; //mean_for_each_subject
    }
    cout << endl;
    return 0;
}

