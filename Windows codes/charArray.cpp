#include <iostream>
using namespace std;


int main()
{

    /*
    char arr[100] = "apple";    
    int i = 0;

    while(arr[i] != '\0') // the last character is the \0 null character

    {
        cout<<arr[i]<<endl;
        i++;
    }

    */

    //Check Pallindrome

    /*

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = 1;

    for(int i=0; i<n ; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check = false;
            break;
        }
    }

    if(check == 1){
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not a pallindrome"<<endl;
    }


    */


   //Largest word in a sentence


   int n; 
   cin>>n;

   cin.ignore();

   char arr[n+1];

   cin.getline(arr , n);//cin the entire sentence (includes the space)
   cin.ignore();

   int i=0;
   int currlen = 0 , maxlen = 0;
   int st = 0 , maxst = 0; //st analogous to currlen and maxst is analogous to maxlen

   while(1){

    if (arr[i]==' ' || arr[i]=='\0')
       {
           if (maxlen < currlen){
               maxlen = currlen;
               maxst = st;
           }
           currlen = 0;
           st = i+1;
       }

    else

    currlen++;

    if (arr[i] == '\0')
        break;

    i++;
   }

cout<<maxlen<<endl;

for(int i=0; i<maxlen; i++){
    cout<<arr[i+maxst];
}


    return 0;
}