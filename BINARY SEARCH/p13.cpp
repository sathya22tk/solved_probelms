//finding a position of a number in infinite sorted array
//(means legth of the array is not specified and not allowing to use legnth of arry)
#include<bits/stdc++.h>
using namespace std;

/* tc is O(log N) becoz in normal BS(knowing bounds)
    it goes like this N,N/2,N/4,N/8.....1 => log N
    now just reverse this like 1,....,N/8,N/4,N/2,N => log N
    so this too takes log N time.*/
int search(int *a,int target){
    int low = 0,high = 1,mid,temp;


        /*here we r increasing the space exponentially
        becoz as per question we r not allowed to use length
        so we don't know the bounds.to tackle this we use below code*/
    while(target > a[high]){
          temp = high + 1; 
          high = high + (high - low + 1)*2;
          low = temp;
         }
    while(low <= high){

        mid = low + (high - low)/2;

        

        if(target < a[mid])
          high = mid - 1;
        else if(target > a[mid])
          low = mid + 1;
        else
          return mid;

        /*here we r increasing the space exponentially
        becoz as per question we r not allowed to use length
        so we don't know the bounds.to tcakle this we use below code*/

    }
}
int main(){
  int a[] = { 1,2,3,4,5,6,7,8,9,10,13,15,17,19,23,25,28,30};
  int target,ans;

  cout <<"\nenter the number: ";
  cin >> target;

  ans = search(a,target);

  cout <<"\n"<<target<<" found at "<<ans;

}
