#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int max = a*b*c;
        for(int i=1;i<=5;i++){
            int mi = min(a,(min(b,c)));
            if(mi == a){
                a++;
            }
            else if(mi == b){
                b++;
            }
            else{
                c++;
            }
            if(a*b*c > max){
                max = a*b*c;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}