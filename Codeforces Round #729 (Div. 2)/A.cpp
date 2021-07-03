#include<bits/stdc++.h>
using namespace std;

int main(){
       int t,n,value,odd=0,even=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr [2*n];
        for(int j=0;j<2*n;j++){
            cin>>value;
            arr[j]=value;
        }
        for(int k=0;k<2*n;k++){
            if(arr[k]%2==0){
                even++;
            }
            else if(arr[k]%2==1){
                odd++;
            }
        }
        if(even==odd){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        odd=0;
        even=0;
     }
    return 0;
}
