#include<iostream>
#include<climits>
using namespace std;

//Algorithm for Wrap Array
//Remeber => Total Sum - Sum of all the non-contributing elements

int kadane(int arr[] , int n){

    int currsum = 0;
    int maxsum = INT_MIN; 
    for(int i=0 ; i<n ; i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum = max(maxsum , currsum);
    }
    return maxsum;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,n);
    int totalsum = 0;

    for(int i=0; i<n ; i++ ){
        totalsum += arr[i];
        arr[i] = -arr[i];  //making the array the negative of itself to find the sum of the non-contributing elements
    }

    wrapsum = totalsum + kadane(arr , n); // Total sum - (- Non contributing elements ka sum)

    // We have to subtract the negative of the non contributing elements sum from the Total sum of contributing elements

    cout<<max(wrapsum , nonwrapsum)<<endl;


    return 0;
}