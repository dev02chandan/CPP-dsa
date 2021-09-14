#include<iostream>
using namespace std;

int main()
{
    //Kadene's Algorithm

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currentSum = 0;
    int maxsum = INT8_MIN;

    for(int i=0; i<n ; i++)
    {
        currentSum += arr[i];
        if (currentSum<0)
        {
            currentSum = 0;
        }

        maxsum = max(currentSum,maxsum);
    }

    cout<<maxsum<<endl;


    return 0;
}