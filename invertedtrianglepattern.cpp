#include<iostream>
using namespace std;
int main(){
    int size = 5;
    for(int i = 5; i>0; i--){
        for(int j = 0; j<size-i; j++){  
               cout<<" "; 
        }
         
        for(int k = 0; k<i; k++){
            cout<<"* ";
            
        }
        cout<<endl;
    }
}