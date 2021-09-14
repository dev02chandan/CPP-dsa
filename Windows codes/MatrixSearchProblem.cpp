#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];

    cout<<"Enter Matrix values: "<< endl;

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    }

    int x;

    cout<<"enter target: "<<endl;
    cin>>x;

    bool flag = false;

    int r = 0 , c = m-1;
    
    while(r<n and c>=0)
    {
        if(arr[r][c] == x){
            flag = true;
            break;
        }

        else if (arr[r][c] > x){
            c--;
        }
        else{
            r++;
        }
    }

    if (flag == true){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }



   





    return 0;
}