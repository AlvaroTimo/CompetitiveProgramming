#include<iostream>
#include<math.h>

using namespace std;

#define LIMIT 10e18

int main(){
    // freopen("../input.txt","r",stdin);
    // freopen("../output.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int testCases;
    long n,rows;
    cin>>testCases;

    // suma = (rows*(rows+1))/2
    // suma = (rows^2 + rows) / 2
    // 0 = rows^2 + rows -2*suma
    // Formula general y tomamos siempre la solucion positiva (a=1 b=1 c=-2*suma)
    // (-b + sqrt(b^2 - 4ac))/2a
    // (-1 + sqrt(1 + 8*suma))

    while(testCases--){
        cin>>n;
        rows = (-1 + sqrt(1+8*n))/2;
        cout<< rows <<'\n';
    }
    return 0;
}