#include <iostream>
#include <array>
using namespace std;
void findIndexes(int arr[8], int target, int& n1, int& n2, int arrLength); //passing n1 and n2 by reference to ensure the values are stored
int main(){
    int n1 = 0;
    int n2 = 0;
    int target = 8;
    int arr[8]={1,2,3,4,5,5,4,9};
    int len = sizeof(arr)/4;

    findIndexes(arr, target, n1, n2, len);
    cout<<"The indexes are: "<<n1<< " and "<<n2;
    return 0;
}
void findIndexes(int arr[4], int target, int& i1, int& i2, int arrLength){
    for(int i=0; i<arrLength; i++){
        for(int a=i+1; a<arrLength; a++){
            cout<<arr[i]<<"+"<<arr[a]<<"="<<arr[i]+arr[a]<<'\n';
            if(arr[i]+arr[a]==target){
                i1 = i;
                i2 = a;
                return;
            }
        }
    }
}
