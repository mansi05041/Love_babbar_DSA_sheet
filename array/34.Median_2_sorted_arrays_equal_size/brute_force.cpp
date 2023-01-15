#include<iostream>
#include<vector>
using namespace std;

double Median_of_sorted_arrays_same_size(vector<int> v1,vector<int> v2)
{
    int i=0; // track v1 elements
    int j=0; // track v2 elements
    int count=0;
    int m1=-1; // store the prev median
    int m2=-1; // store the current median
    while(count<=v1.size()){
        if(i==v1.size()){
            // if all elements of v1 are smaller than first element of v2
            m1=m2;
            m2=v2[0];
            break;
        }
        else if(j==v1.size()){
            // if all the elements of v2 are smaller than first element of v1
            m1=m2;
            m2=v1[0];
            break;
        }
        if(v1[i]<=v2[j]){
            // store the previous median
            m1=m2;
            m2=v1[i];
            i++;
        }
        else{
            m1=m2;
            m2=v2[j];
            j++;
        }
        count++;
    }
    return((m1+m2)/2);
}

int main()
{
    /* code */
    vector<int> v1={1, 12, 15, 26, 38};
    vector<int> v2={2, 13, 17, 30, 45};
    cout<<"Median :: "<<Median_of_sorted_arrays_same_size(v1,v2);
    return 0;
}
