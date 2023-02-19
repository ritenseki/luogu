#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,
        m,
        count=1;
    cin>>l>>m;
    l++;//  0位置（数轴原点）也有一棵树
    int start[m],stop[m];
    while (count<=m){
        cin>>start[count-1]>>stop[count-1];
        count++;
    }

    int road[l];// 0-499
    for (int i=1;i<=l;i++){// 1-500
        road[i-1]=1;
    }

    for (int j=0;j<m;j++){
        for(int k=start[j];k<=stop[j];k++){
            road[k]=0;
        }
    }
    int total=0;
    for(int sum =1;sum<=l;sum++){
        total+=road[sum-1];
    }
    cout<<total<<endl;
    return 0;
}