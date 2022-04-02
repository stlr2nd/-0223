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
    int front = 0; //陣列index = 0的位置是front
    int rear = 0;
    cout << "start:";
    while (cin >> command) {
        if (command == "enqueue") {
            cin >> number;
            stack[rear] = number;
            rear++;
        }else if (command == "dequeue"){
            if (front > rear) {
                cout << "佇列已無元素可進行dequeue" << endl;
            }else{
                cout << "dequeue結果" << stack[front] << endl;
                front++;
            }
        }
    }
    return 0;
}

