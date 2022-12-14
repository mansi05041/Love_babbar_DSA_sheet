#include<iostream>
using namespace std;

string Reverse_Str(string s){
    int start=0;
    int end = s.size()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}

int main(){
    string st = "Hello";
    cout<<"Reverse String : "<<Reverse_Str(st);
    return 0;
}