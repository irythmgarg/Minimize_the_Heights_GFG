/*
Given an array arr[] denoting heights of N towers and a positive integer K.
For each tower, you must perform exactly one of the following operations exactly once.
Increase the height of the tower by K
Decrease the height of the tower by K
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.
You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.
*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);//sort
      int k;
      cin>>k;
      int mini=a[0];
       int maxi=a[n-1];
       int res=maxi-mini;
       for(int i=1;i<=n-1;i++)
       {
          if(a[i]>=k)
          {
               mini=min(a[0]+k,a[i]-k);
               maxi=max(a[n-1]-k,a[i-1]+k);
          }
               res=min(res,maxi-mini);
       }
       cout<<res;
}
    