    #include<bits\stdc++.h>
using namespace std;
    
    int binarysearch(int arr[], int n, int k) {
        // code here
        int l=0;int r=n-1;
      //  int mid=(l+r)/2;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(k>arr[mid]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return -1;
    }
int main(){
    int a[]={2,4,10,80,20,50};
    int n=sizeof(a)/sizeof(a[0]);
    int k=50;
cout<<binarysearch(a,n,k);

    return 0;
}
    