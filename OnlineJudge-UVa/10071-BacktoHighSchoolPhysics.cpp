#include<iostream>

using namespace std;

int main(){
    // freopen("../input.txt","r",stdin);
    // freopen("../output.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int v,t;
    while(cin>>v>>t){
        cout<<v*t*2<<'\n';
    }

    return 0;
}