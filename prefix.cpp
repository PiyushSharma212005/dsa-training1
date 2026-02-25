#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter the  value of n";
     cin>>n;
     int arr[n];
     for(int r= 0;r<n;r++){
        cout<<"enter the values in array";
        cin>>arr[r];
     }

    // int arr[5]={2,4,6,8,10};
    int prefix[5]={};
    for(int i = 0;i<5;i++){
        if(i==0){
            prefix[i]=arr[i];
        }
        else{
        prefix[i] = prefix[i-1]+arr[i];
        }
    }
    for(int j = 0;j<5;j++){
        cout<<prefix[j]<<endl;
    }
    int m=0;
    cout<<"enter the number of queries";
    cin>>m;
    int l,r;
    int sum = 0;
    for(int g=0;g<m;g++){
    cout<<"value of l and r";
    cin>>l>>r;
    for(int k=l;k<=r;k++){
    if(l>0){
     sum = prefix[r]-prefix[l-1];
    }
    else{
        sum=prefix[r]; 
    }
    cout<<sum<<endl;
    }
    }
}