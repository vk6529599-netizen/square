#include<iostream>
using namespace std;
int main(){
    for(int i = 3; i<=7; i++){
        for(int j = 1; j<=(i-2); j++){  
            cout<< i <<" ";
        }
        cout<<endl;    
    }
    for(int i = 6; i>=3; i--){
         for(int j = 1; j<=(i-2); j++){  
            cout<< i <<" ";
        }
        cout<<endl;    

    }
}