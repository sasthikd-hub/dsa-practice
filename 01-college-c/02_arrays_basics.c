#include <stdio.h>

void printdetails(int nums[],int n);
int largestnum(int nums[],int n);
void reversearr(int nums[],int n);
int main(){

    int num[5] = {5,6,8,4,3};
    int max = 0;

    printdetails(num,5);
    
    max = largestnum(num,5);

    printf("the largest num is %d\n",max);

    reversearr(num,5);

    printdetails(num,5);

    return 0;
}

void printdetails(int nums[],int n){
    for(int i=0;i<n;i++){
        printf("Num is : %d Address is %p\n",nums[i],&nums[i]);
    }
}

int largestnum(int nums[],int n){
    int max=nums[0];

    for(int i=0;i<n;i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }

    return max;
}

void reversearr(int nums[],int n){
    int temp = 0;
    
    for(int i=0;i<n/2;i=i+1){
        temp = nums[i];
        nums[i]=nums[n-i-1];
        nums[n-i-1]= temp;
    }
}