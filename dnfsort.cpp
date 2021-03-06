#include<iostream>
using namespace std;

void swap(int arr[] , int a , int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

// 0 1 2 sort
void dnf(int arr[] , int n)
{
    int mid = 0;
    int low = 0;
    int high = n-1;

    
    while(mid!=high)
    {
        if(arr[mid] == 0){
            swap(arr , low , mid);
            low++; mid++;
        }

        else if(arr[mid] == 1)
            mid++;

        else{
            swap(arr ,mid ,high);
            high--;
        }
    }

}


int main()
{

    int arr[] = {0 , 1 , 2 , 2 , 2 , 2 , 2 , 1 , 0 , 1 , 2 , 0};
    dnf(arr , 12);
    for(int i=0; i<12; i++)
        cout<<arr[i]<<" ";
    

    return 0;
}


