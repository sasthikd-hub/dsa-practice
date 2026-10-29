//we are assuming the two given inputs are distinct

#include <stdio.h>

void getminmax(int a,int b,int *min, int*max);

int main(){
    int x=12,y=42;
    int smallest=0,largest=0;

    getminmax(x,y,&smallest,&largest);

    printf("largest: %d smallest: %d",largest,smallest);
}

void getminmax(int a,int b,int *min, int*max){

    if(a>b){
        *min = b;
        *max = a;
    }
    else{
        *min = a;
        *max = b;
    }
}