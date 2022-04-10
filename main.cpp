//
//  main.cpp
//  kkk
//
//  //

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
double sum=0;
int main() {
    int cap=0;
    int wei;
    int wor;
    double rat;
    vector<int>weigh;
    vector<int>worth;
    vector<double>ratio;
    cin>>cap;
    while(cin>>wei>>wor){
        weigh.push_back(wei);
        worth.push_back(wor);
        rat=wor/wei;
        ratio.push_back(rat);
    }
    double max=-1;
    int note=0;
    for(int i=0;i<ratio.size();i++){
        for(int j=0;j<ratio.size();j++){
            if(ratio[j]>max){
                max=ratio[j];
                note=j;
            }
            cout<<ratio[max]<<' '<<note;
        }
        if(cap-=weigh[note]>0){
            cap-=weigh[note];
            sum+=worth[note];
            worth[note]=-1;
            max=-1;
            note=0;
        }
        else{
            double temp=weigh[note]/cap;
            sum+=(worth[note]/temp);
            worth[note]=-1;
            max=-1;
            note=0;
        }
    }
    cout<<fixed<<setprecision(5)<<sum<<'\n';
}
