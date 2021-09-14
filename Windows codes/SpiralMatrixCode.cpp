#include<iostream>
using namespace std;

int main(){

    int m, n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    cout<<"Enter the value for m"<<endl;
    cin>>m;

    int arr[n][m];

    for(int i=0; i<n ; i++){
        for(int j=0; j<m ; j++){
            cout<<"Enter the value for "<<i<<"x"<<j<<" Element"<<endl; 
            cin>>arr[i][j];
        }
    }


//Printing the array

    // for(int i=0; i<n ; i++){
    //     for (int j=0 ; j<n ; j++)
    //         cout<<arr[i][j]<<" ";
    // }

    // 4 variables 
    // always remember the logic that you are going to code

    // Spiral Order Print

    int row_start = 0;
    int row_end = n-1;
    int column_start = 0;
    int column_end = m-1;

    while(row_start<=row_end && column_start<=column_end) 
    {
        //for row start
        for(int col = column_start ; col <= column_end ; col++){
            cout<< arr[row_start][col] << " ";
        }

        row_start++; // first row is done

        //for column end

        for(int row = row_start; row <= row_end ; row++){
            cout<< arr[row][column_end] << " ";
        }

        column_end--; // The element that is constant in the for loop ( column end ^^^ ) gets increased or decreased accoringly

        //For row end

        for(int col = column_end ; col>=column_start ; col--){
            cout<< arr[row_end][col] << " ";
        }

        row_end--;

        //for column start

        for(int row = row_end ; row>=row_start ; row--){
            cout<<arr[row][column_start]<<" ";
        }

        column_start++;
    }


    return 0;
}