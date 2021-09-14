#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n = 153;
    int originaln = n;

    int sum = 0;

    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n/=10  ;
    }

    if (sum==originaln){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an armstrong Number"<<endl;
    }

    





    return 0;
}