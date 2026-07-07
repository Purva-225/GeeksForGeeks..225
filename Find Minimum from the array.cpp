#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
    int arr[] = {-3,2,3,4,5,1,0,8,-9}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int mid = 0; 
    int low = 0; 
    int high = n-1; 

    while(low < high){ // <= YAHA EQUAL KYU LAGEGA ? KYA HUM TARGET KO THODI NA MATCH KR RHE HAI GADHE. 
       mid = low + (high - low)/2; 

      if(arr[mid] < arr[high]){
        high = mid; // why equal to why not MID-1 ?
        // kyuki yaha hume ye bhi dekhna hai ki kya merra mid he vo minimum element nahi na? 
      }else {
            low = mid+1; 
        }
    }
    cout<< arr[low]<< endl; 
    return arr[low]; 
}
