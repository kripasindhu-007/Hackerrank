#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    for(int j=size-1;j>=0;j--){
        cout<<num[j]<<" ";
    }
    return 0;
}
