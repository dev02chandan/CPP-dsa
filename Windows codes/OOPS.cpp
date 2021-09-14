#include<iostream>
using namespace std;

class student{
    //Private by default
    string name;

    public:
    //Data Members
    int age;
    bool gender;

    student()
    {
        cout<<"Default Constructor"<,endl;
    } //Default constructor

    student(string s ; int a ; bool b){
        cout<<"Parametrized constructor"<<endl;
        name = s;
        gender = b;
        age = a;
    } //Parametrized constructor

    student(student &a){
        cout<<"Copy constuctor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }

        else{
            return false;
        }
    }

    void setname(string s){
        name = s;
    }

    void getname(){
        cout<<name<<endl;
    }

    void printInfo(){
        string s;
        cout<<"Name: "<<endl;
        cin>>s;
        arr[i].setname(s);
        
       
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }

    ~student(){
        cout<<"Destructor called"<<endl; // called when we are coming out of the main function
    }


};

int main(){

    // student arr[3];
    // for(int i=0 ; i<3 ; i++){
    //      cout<<"Name:";
    //      cin>>arr[i].name;
    //      cout<<"Age: "
    //      cin>>arr[i].age;
    //      cout<<"Gender: "
    //      cin>>arr[i].gender;

    // }


    // for(int i=0; i<3; i++){
    //     arr[i].printInfo();
    // }

    student a("Urvi" , 20 , 1);
    student b;
    student c = a;

    //Operator overloading / we are going to make == operator behave in a certain way - defined in the class

    if (c==a){
        cout<< "Same"<< endl;
    }

    else{
        cout<<"not same"<<endl;

    }


}

/*

Shallow Copy 
Default copy constuctor

Deep copy is the copy constuctor we make - pointers and the locations are copied in the new object


Destructors - called when we destroy an object


*/