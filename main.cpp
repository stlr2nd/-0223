//
//  main.cpp
//  河內塔
//
//  Created by 椰子樹 on 2022/4/20.
//

#include <iostream>
using namespace std;

void Towers(int n,char a,char b,char c){
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
    }
    else{
        Towers(n-1,a,c,b);
        cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
        Towers(n-1,b,a,c);
    
        
    }
}
int main(int argc, char *argv[]) {
    int n;
    cout << "輸入圓盤數量：";
    cin >> n;
    Towers(n,'A','B','C');
    cout<< endl;
    
    
}
