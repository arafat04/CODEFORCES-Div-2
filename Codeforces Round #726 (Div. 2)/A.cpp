#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        int sum=0;
        for(int j=0;j<n;j++){
            int value=0;
            cin>>value;
            arr[j]=value;
            sum+=arr[j];
        }
        if(sum>0&&sum>=n){
            cout<<sum-n<<"\n";
        }

        else{
            cout<<"1\n";
        }
    }
    return 0;
}
