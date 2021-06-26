// Divide and conquour algorithm
//Mid element - keep seperating
// when we have only two elements - 
//we merge them in such a way that they are sorted

#include<iostream>
using namespace std;

void Merge(int arr[] , int l , int mid , int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; // temporary arrays

    for (int i = 0; i < n1; i++) // filling the elements of the first array
    {
         a[i] = arr[l+i];
    }

    for (int  i = 0; i < n2; i++) // filling the elements of the second array
    {
        b[i] = arr[mid +i + 1]; 
    }
    
    //Merging with pointers 

    int i = 0; // pointer for a[]

    int j = 0; // pointer for b[]

    int k = l; // pointer for arr[]

     while(i < n1 && j < n2)
     {
         if(a[i] < b[j])
         {
             arr[k] = a[i];
             k++ ; i++;
         }
         else
         {
             arr[k] = b[j];
             k++; j++; 
         }
     }

     while (i<n1)
     {
        arr[k] = a[i];
        k++ ; i++;
     }
     while (j<n2)
     {
         arr[k] = b[j];
         k++ ; j++;
     }
    


}

void Mergesort(int arr[] , int l , int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;

        Mergesort(arr , l , mid);
        Mergesort(arr , mid+1 , r);

        Merge(arr , l , mid , r);
    }
}


int main(){
    int arr[] = {5 , 4 , 3 , 2 , 1};
    Mergesort(arr , 0 , 4);

    for (int i=0; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}