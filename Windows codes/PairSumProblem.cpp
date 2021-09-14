#include <iostream>
using namespace std;

//Check if there exists two elements in an array such that their sum is equal to given k

//Pairsum problem with O(n)
//Sorted array  
// Low pointer and High pointer 
//when sum is less than target sum - then increase the low pointer

bool pairsum(int arr[] , int n , int k){

    int low = 0;
    int high = n-1;
    
    while(low<high){
        if (arr[low] + arr[high] == k){
            cout<<low<<' '<<high<<endl; 
            return true;
        }

        else if(arr[low] + arr[high] > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int arr[] = {2, 4 , 7 , 11 , 14 , 16 , 20 , 21};
    int k=31;   

    cout<<pairsum(arr,8,k)<<endl;

}