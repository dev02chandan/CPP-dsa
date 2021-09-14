#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n

    // int arr[n];
    // for (int i=0; i<n; i++)
    //     cin>>arr[i];

    int arr[] = {12,3,7,9,2,8,5,10,6}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int area = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
            area = max(area , (j-i)*(min(arr[j],arr[i])));
    }

    cout<<area<<endl;
    
    

    return 0;

}