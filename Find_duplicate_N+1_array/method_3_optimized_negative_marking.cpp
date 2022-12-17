#include<iostream>
#include<vector>
using namespace std;

int Duplicate_Negative_Marking(vector<int> a){
    int pos=-1;
    for(int i=0;i<a.size();i++){
        pos=abs(a[i]);
        if(a[pos]<0) break;
        a[pos]*=(-1);
    }
    return(pos);
}

int main()
{
    /* code */
    vector<int> a ={3,1,3,4,2};
    cout<<"Duplicate value :: "<<Duplicate_Negative_Marking(a);
    return 0;
}
