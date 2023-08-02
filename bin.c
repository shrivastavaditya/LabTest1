#include<stdio.h>

int search(int arr[],int s,int e,int key){
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key){
            e=mid;
        }else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,5,6,9};
    int len=6;
    int key=8;
    int b= search(arr,0,5,key);
    printf("%d",b);


    return 0;
}
