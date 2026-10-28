#include <iostream>

using namespace std;

void sqaure(int x);
void triangle(int x);
void trianglenum(int x);

int main(){

    int n = 0;
    
    cout<<"Enter the number: ";
    cin >> n ;

    sqaure(n);
    triangle(n);
    trianglenum(n);
    return 0;

}

void sqaure(int x){


    for(int i = 0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void triangle(int x){

    for(int i = 1; i<=x ; i++){
        for (int j = 0; j<i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void trianglenum(int x){
   
    for(int i = 1; i<=x ; i++){
        for (int j = 0; j<i; j++){
            cout<<j+1;
        }
        cout<<"\n";
    }

}