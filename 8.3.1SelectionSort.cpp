#include<iostream>
using namespace std;

void selectionSort(int n, int array[]){// 13 14 15 16 17
  for(int i=0; i<n-1; i++){
      for(int j=i+1; j<n; j++){
          if(array[j]<array[i]){
              int temp = array[j];
              array[j]=array[i];
              array[i]=temp;
              
          }
      }
  }  
     for(int i=0; i<n; i++){
         cout<<array[i]<<" ";
     }
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    selectionSort(n,array);

}