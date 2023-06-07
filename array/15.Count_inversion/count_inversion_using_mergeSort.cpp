#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &v, int left, int mid, int right){
   int i = left;
   int j = mid+1;
   int k =0;
   int inv_count=0;
   vector<int> temp{right-left+1};
   while (i<=mid && j<=right)
   {
    if(v[i]<=v[j]){
        temp[k]=v[i];
        ++k;
        ++i;
    }
    else{
        temp[k]=v[j];
        inv_count+=(mid-i+1);
        ++k;
        ++j;
    }
   }

   // copy the data
   while (i<=mid)
   {
    temp[k]=v[i];
    ++k;
    ++i;
   }
   while (j<=right){
    temp[k]=v[j];
    ++k;
    ++j;
   }
   for(i=left,k=0;i<=right;i++,k++) v[i]=temp[k]; 
   return(inv_count);
}

int Count_inversions_using_MergeSort(vector<int> &v,int left, int right){
    int mid;
    int inv_count=0;
    if(right>left){
        mid=(right+left)/2;
        inv_count=Count_inversions_using_MergeSort(v,left,mid);
        inv_count+=Count_inversions_using_MergeSort(v,mid+1,right);
        inv_count+=merge(v,left,mid,right);
    }
    return inv_count;
}

int main()
{
    /* code */
    vector<int> v ={2,4,1,3,5};
    cout<<"Total number of count inversions : "<<Count_inversions_using_MergeSort(v,0,v.size()-1);
    return 0;
}