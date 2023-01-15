#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Median(int v[],int n){
    if(n%2==0) return((v[n/2]+v[n/2-1])/2);
    else return v[n/2];
}

double Median_of_sorted_arrays_same_size(int v1[],int v2[],int size)
{
    // edge cases
    // case 1: if size is less than or equal to zero
    if(size<=0) return(-1);
    // case 2: if size is equal to 1
    if(size==1) return((v1[0]+v2[0])/2);
    // case 3: if size is equal to 2
    if(size==2) return((min(v1[0],v2[0])+min(v1[1],v2[1]))/2);

    // calculate the medians of both array individually
    int m1=Median(v1);
    int m2=Median(v2);
    if(m1==m2) return m1;
    if(m1<m2){
        // then the median must exists in v1[m1 to size] and v2[0 to m2]
        if(size%2==0) return Median_of_sorted_arrays_same_size(v1+size/2 -1,v2,size-size/2+1);
        return Median_of_sorted_arrays_same_size(v1+size/2,v2,size-size/2);
    }

    // then the median exists in v1[0 to m1] and v2[m2 to size]
    if(size%2==0) return Median_of_sorted_arrays_same_size(v2+size/2-1,v1,size-size/2+1);
    return Median_of_sorted_arrays_same_size(v2+size/2,v1,size-size/2);
}

int main()
{
    int v1[] = {1, 12, 15, 26, 38};
    int v2[] = {2, 13, 17, 30, 45};
    cout<<"Median :: "<<Median_of_sorted_arrays_same_size(v1,v2,5);
    return 0;
}
