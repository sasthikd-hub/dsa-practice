#include <iostream>

using namespace std;

void sqaure(int x);
void triangle(int x);
void trianglenum(int x);
void trianglenum2(int x);
void invertedtriangle(int x);
void pyramidstar(int x);

int main(){

    int n = 0;
    
    cout<<"Enter the number: ";
    cin >> n ;

    sqaure(n);
    triangle(n);
    trianglenum(n);
    trianglenum2(n);
    invertedtriangle(n);
    pyramidstar(n);
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

void trianglenum2(int x){

    for(int i=1;i<=x;i++){
        for(int j = i; j>0; j--){
            cout<<i;
        }
        cout<<"\n";
    }
}

void invertedtriangle(int x){

    for(int i = 0; i<x;i++){
        for(int j = x - i; j > 0; j--){
            cout<<x-i;
        }
        cout<<"\n";
    }
}

void pyramidstar(int x){
    int space = x-1;
    for(int i=1;i<=x;i++){
        
        for(int j=0;j<space;j++){
                cout<<" ";
        }
        for(int k=0;k<2*i-1;k++){
                cout<<"*";
        }
        space--;
        
        cout<<"\n";
    }
}