#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n; i++){
        cin>>arr[i];
    }

    int maxday=0;

    for(int j=0; j<n ; j++){
        
        if(arr[j]>maxday){

            maxday = arr[j];

            if (arr[j]>arr[j+1]){
                cout<<arr[j]<<endl;
            }

        }
    }
    

    return 0;
}