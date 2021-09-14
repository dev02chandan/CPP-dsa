#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;
    for(it=v.begin() ; it!=v.end() ; it++){
        cout<<*it<<endl; // it is a pointer
    }

    //auto - it decides the datatype acc to the initialization
    for(auto element:v){
        cout<<element<<endl;//element is not an iterator
        //element is the values in the vector

    }

    v.pop_back(); // pops end element of the vector

    vector<int> v2 (3 , 50); // 50 , 50 , 50 

    //swap values of v and v2

    swap(v , v2);

    for(auto element:v){
        cout<<element<<endl;
    }

    sort(v.begin() , v.end() ) ;// also we can pass comparator


}