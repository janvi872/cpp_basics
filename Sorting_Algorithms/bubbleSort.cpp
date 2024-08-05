#include<iostream>
using namespace std;

int main(){
    int Arr[] = {34, 21, 9, 7, 20};

    int size = sizeof(Arr)/sizeof(int);

    bool flag =  false;
    for(int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            if(Arr[j]>Arr[j+1]) {
                int x = Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=x;

                flag = true;
            }
        }
    }
   for(int i=0; i<size; i++) {
    cout<<Arr[i]<<" ";
   }
return 0;
}