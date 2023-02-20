#include <bits/stdc++.h>

// 题解灵感来源于洛谷 @夜雨声烦hst

double k,
        n=1;
double sum(double k,double s){
    s =s + 1/n;
    if(s>k){
        std::cout<<n;
    }
    else {
        ++n;
        return sum(k,s);
    }
}

int main(){
    std::cin>>k;
    sum(k,0);
    return 0;
}