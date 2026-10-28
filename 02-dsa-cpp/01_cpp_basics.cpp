#include <iostream>

using namespace std;

void getminmax(int a,int b, int &min, int &max);
int main(){

    int smallest = 0;
    int largest = 0;
    int x=11,y=8;

    getminmax(x,y,smallest,largest);

    cout << "smallest: " << smallest << " largest: " << largest << "\n";

    return 0;
}

void getminmax(int a,int b, int &min, int &max){

    if (a>b){
        min = b;
        max = a;
    }
    else {
        min = a;
        max = b;
    }
}