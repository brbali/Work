#include <iostream>
using namespace std;
void findIndexes(int * p, int target, int& n1, int& n2, int arrLength); //passing n1 and n2 by reference to ensure the values are stored
int main(){
    int n1 = 0, n2 = 0;
    int target = 8;
    int arr[4]={1,3,5,9};
    int * p;
    p= arr;
    int len = sizeof(arr)/4;

    findIndexes(p, target, n1, n2, len);
    cout<<"The indexes are: "<<n1<< " and "<<n2;
    return 0;
}
void findIndexes(int * p, int target, int& i1, int& i2, int arrLength){
    int end = arrLength-1;
    for(int x=0;x<arrLength;x++){
        if(p[x]+p[end]==target){
            i1 = x;
            i2 = end;
            cout<<"yes";
        } else if(p[x]+p[end]>target){
            end -=1;
        }
    }
}
