//
//  main.cpp
//  learncpp
//
//  Created by 椰子樹 on 2022/3/9.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int stack[105];
    string command;
    int number;
    int index = 0;
    
    while (cin >> command) {
        if (command == "push") {
            cin >> number;
            stack[index] = number;
            index++;
        }else if (command == "pop"){
            if (index == 0) {
                cout << "堆疊已無元素可進行pop" << endl;
            }else{
                cout << "pop結果" << stack[index-1] << endl;
                index--;
            }
        }
    }
    return 0;
}

