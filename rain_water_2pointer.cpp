#include <bits/stdc++.h>
using namespace std;
  
int maxWater(vector<int> arr, int n)
{ 
    int left = 0;
    int right = n-1;
   
    // To store Left max and right max 
    // for two pointers left and right
    int l_max = 0;
    int r_max = 0;
   
    // To store the total amount 
    // of rain water trapped
    int result = 0;
    while (left <= right)
    {
   
      // We need check for minimum of left 
      // and right max for each element
      if(r_max <= l_max)
      {
        // Add the difference between 
        // current value and right max at index r
        result += max(0, r_max-arr[right]);
   
        // Update right max
        r_max = max(r_max, arr[right]);
   
        // Update right pointer
        right -= 1;
      }
      else
      { 
        // Add the difference between 
        // current value and left max at index l
        result += max(0, l_max-arr[left]);
   
        // Update left max
        l_max = max(l_max, arr[left]);
        // Update left pointer
        left += 1;
      }
    }
    return result;
}

int main(){
vector<int> a={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
int n=a.size();
int sum=5;
int i=0;int j=n-1;
while(i<j){
    if(a[i]+a[j]==sum){
        cout<<i<<" "<<j;
        }
        i++;j--;
}
cout<<maxWater(a,n);




    return 0;
}