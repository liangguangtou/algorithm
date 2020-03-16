#include<iostream>
#include<stdlib.h>
using namespace std;

void Perm(int* array, int size, int N) 
{ 
    if(N == size) { 
        for(int i = 0; i < size; ++i){
            cout<<array[i]   ;
        }
        cout<<endl;
    } 
    else 
    { 
        for(int i = N; i < size; ++i){
            swap(array[i], array[N]);
            Perm(array, size, N+1);
            swap(array[i], array[N]);
        } 
    } 
} 

int main(){
    int arr[5]={1,2,3,4,5};
    Perm(arr,5,0);
    system("pause");
    return 0;
}
