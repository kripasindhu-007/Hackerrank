#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    if(n<=9){
        cout<<arr[n-1];
    }
    else{
        cout<<"Greater than 9";
    }
    return 0;
}
