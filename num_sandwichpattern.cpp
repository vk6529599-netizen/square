#include<iostream>
using namespace std;
int main(){
    int count = 5;
    for(int i = 3; i <= 5; i++){
        for(int j = 0; j < (i-3); j++){  
            cout<< "  "; 
        }
         
        for(int k = 0; k < count; k++){
            cout<< i << " ";
            
        }
        cout<<endl;
        count -=2;
    }
    count = 3;

    for(int i = 4; i >= 3; i--){
         for(int j = 0; j < (i-3); j++) {
            cout<< "  "; 

        }
        for(int k = 0; k < count; k++){
            cout<< i << " ";
        }
        cout<<endl;
        count +=2;
        
    }    
}