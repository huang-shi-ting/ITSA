#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            printf("0\n");
            return 0;
        }else if(i==n-2){
            printf("1\n");
        }
    }
    return 0;
}