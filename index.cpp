#include<iostream>

using namespace std;

int main(){
    
    int a=5;
    int b=10;
    int c=20;


    if(a>b){ 
        if(a>c){
            cout << "a is large" << endl;
        }
        else{
            cout << "c is large" << endl;
        }

    }

    if(b>c){
        if(b>c){
            cout << "b is large" << endl;
        }
        else{
            cout << "c is large" << endl;
        }
    }

}





