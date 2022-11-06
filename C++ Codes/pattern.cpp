#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=0; i<n; i++){
        for(j=n; j>0; j--){
            for(k=n; k>i; k--){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}