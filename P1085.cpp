#include <bits/stdc++.h>

using namespace std;

int weekdays[7];

void bubble_sort(int *a,int *b,int num){
    bool flag = true;
    while(flag){    
        flag=false;
        for(int i=num-1;i>0;i--){
            if(a[i-1]< a[i]){
                flag= true;
                swap(a[i-1],a[i]);
                swap(b[i-1],b[i]);
                
            }
        }
    }
}

int main(){
    int a,b;
    int week[7];
    for(int i=0;i<7;i++){
        cin>>a>>b;
        week[i]=a+b;
        weekdays[i]=i+1;
    }
    bubble_sort(week,weekdays,7);

    if(week[0]>8){
        cout<<weekdays[0]<<endl;
    }
    else{
        cout<<0<<endl;
    }
    

}