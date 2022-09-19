
//FINDING MAXIMUM AND MINIMUM IN AN ARRAY

#include <iostream>
#include<climits>
using namespace std;

int getMax(int num[],int n){
    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[],int n){
    int min = INT_MAX;
    for(int i =0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int num[10];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
        cout<<"max is"<<getMax(num,size)<<endl;
      cout<<"min is"<<getMin(num,size)<<endl;
    
}
