#include<iostream>
using namespace std;
int main(){
    int size = 5;
    for(int i = 0; i<=5; i++){
        for(int j = 0; j<=size-i; j++){
            cout<<" ";
        }
        for(int j=0; j<(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i = size-1; i>0; i--){
        for(int j = 0; j<=size-i; j++){  
               cout<<" "; 
        }
         
        for(int j = 0; j<(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl; 
    }      
}
