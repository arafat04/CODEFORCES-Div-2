#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int l=0;l<t;l++){
        cin>>n;
        long long arr[n];

        for(int i =0;i<n;i++){

            arr[i] = i+1;
        }
        for(int i=0;i<n-1;i+=2){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        if(n%2!=0){
            int temp = arr[n-2];
            arr[n-2]=arr[n-1];
            arr[n-1]=temp;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<"\n";
    }
    return 0;
}
