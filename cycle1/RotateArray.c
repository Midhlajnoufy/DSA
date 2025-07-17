// A function which takes the array ,the number of elements in an  array,the di>
#include<stdio.h>
void rotate(int arr[],int n,char d,int count){
  count%=n;
  int temp[count];
  if(d=='R' || d=='r'){
    for(int i=0;i<=count-1;i++){
        temp[i]=arr[n-count+i];
    }
    for(int i=n-1;i>=n-count-1;i--){
        arr[i]=arr[i-count];
    }
    for(int i=0;i<=count-1;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<=n-1;i++){
        printf("a[%d]=%d \n",i,arr[i]);
    }
  }
}
void main(){
    int arr[]={1,2,3,4,5,6,7};
    char rot='r';
    rotate(arr,7,rot,10);
    }
