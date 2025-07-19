//binary search for decreasing order Array
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &arr,int target){
  int sizee=arr.size();
  int left=0,right=sizee-1;
  while(left<=right){
    int mid=left+(right-left)/2;
    if(arr[mid]==target){
      return mid;
    }
    
    else if(target>arr[mid]){
      right=mid-1;
    }
    else if(target<arr[mid]){
      left=mid+1;
    }
  }

  return -1;

}
int main()
{  
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 cout<<"Enter Target: ";
 int target;
 cin>>target;
  cout<<binary_search(arr,target);
}