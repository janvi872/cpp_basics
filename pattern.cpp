#include<iostream>
using namespace std;

int main(){
    int n, k;
    cout<<"Enter the number of the rows and cols: "<<endl;
    cin>>n>>k;

    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}