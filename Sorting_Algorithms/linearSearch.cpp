#include<iostream>
using namespace std;
int main() {
    int x, mid, size;
    int arr[]={12, 13, 2, 9, 77};
    cout<<"Enter the element to find: "<<endl;
    cin>>x;
    size = sizeof(arr)/sizeof(int);
    mid = arr[0 + size/2];

    for(int i = 0; i<size-1; i++) {
        if(arr[i]==x) {
            cout<<i;
            break;
        }
    }
    
    return 0;
}