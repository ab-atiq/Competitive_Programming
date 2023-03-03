#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,X;
    cin>>N>>X;
    string str;
    for(int i=0;i<N;i++)cin>>str[i];
    // for(int i=0;i<N;i++)cout<<str[i];
    for(int i=0;i<X;i++){
        for(int j=0;j<N;j++){
            if(str[j]=='B'&&str[j+1]=='G'){
                swap(str[j],str[j+1]);
                j++;
            }
        }
    }
    for(int i=0;i<N;i++)cout<<str[i];
    return 0;
}