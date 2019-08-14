#include <iostream>
using namespace std;
void findIndexes(int arr[4], int target, int& n1, int& n2); //passing n1 and n2 by reference to ensure the values are stored
int main(){
    int n1 = 0;
    int n2 = 0;
    int target = 8;
    int arr[4]={1,4,4,9};

    findIndexes(arr, target, n1, n2);
    cout<<"The indexes are: "<<n1<< " and "<<n2;

    return 0;
}
void findIndexes(int arr[4], int target, int& i1, int& i2){
    for(int i=0; i<4; i++){
        for(int a=i+1; a<4; a++){
            if(arr[i]+arr[a]==target){
                i1 = i;
                i2 = a;
                break; 
            }
        }
    }
}
