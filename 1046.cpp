#include <bits/stdc++.h>

using namespace std;

int apples[11];
int getapples = 0;

int main(){
    for(int i = 0; i < 11; i++){
        cin>>apples[i];
    }
    for(int k = 0; k < 10; k++){
        if(apples[k]<=apples[10]+30)
            getapples++;
    }
    cout<<getapples;
    return 0;
}