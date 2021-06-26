#include<iostream>
#include<vector>
using namespace std;
//pairs allows to store two values together 

bool myCompare(pair<int, int> p1 , pair<int , int> p2){
    return p1.first < p2.first;
}

int main()
{
    pair<int ,char> p;
    p.first = 3;
    p.second = 'f';

    //Reduce the given array
    //Instead of the smallest element - put 0 - then one and then so on


    int arr[] = { 10 , 16 , 7 , 14 , 5 , 3 , 12 , 9 };
    vector < pair<int, int> > v;

    for(int i = 0 ; i< (sizeof(arr)/sizeof(arr[0]) ); i++)
        v.push_back(make_pair(arr[i] , i));
    
    sort(v.begin() , v.end() , myCompare);

    for(int i=0; i<v.size() ; i++){
        arr[v[i].second] = i;
    }

    for(int i=0 ; i<v.size() ; i++){
        cout<<arr[i]<<"  ";
    }


    return 0;
}