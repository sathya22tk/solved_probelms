//FIND BIG & SMALL ELEMENT FROM AN ARRAY WITH MINIMUM COMPARISION
#include <stdio.h>

int findmaxmin(int *a,int n){
    int i,max = -1, min = 343676;
    if(n%2 == 0){
        if(a[0]>a[1]){
            max = a[0];
            min = a[1];
        }
        else{
            max = a[1];
            min = a[0];
        }
        i = 2;
    }
    else{
        max = a[0];
        min = a[0];
        i = 1;
        
    }
    while(i<n-1){
        if(a[i]>a[i+1]){
            if(a[i]>max){
                max = a[i];
            }
            if(a[i+1]<min){
                min = a[i+1];
            }
        }
        else{
            if(a[i+1]>max){
                max = a[i+1];
            }
            if(a[i]<min){
                min = a[i];
            }
        }
        i += 2;
    }
    printf("max : %d\n",max);
    printf("min : %d\n",min);
}
int main()
{
    int a[6] = {34,324,4,67,98,54};
    findmaxmin(a,6);
}
