#include <iostream>
using namespace std;
void bubble(int arr[], int s){
    int c;
    for(int i=0; i<s; i++){
        bool f =true;
        for(int j=0; j<s-i-1; j++){
            c++;
            if(arr[j]>arr[j+1]){
                int tem;
                tem=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tem;
                f=false;
            }
        }
        if(f==true){
            
            cout<<"Total count = "<<c;
            break;
        }
    }
}
int main(){
    int arr[]={5,3,6,1,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
    bubble(arr,s);
    cout<<"\nAfter applying bubble sort\n";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
}