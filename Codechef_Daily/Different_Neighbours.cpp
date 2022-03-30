#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define DEB(x) cout << #x << "=" << x << endl
#define DEB2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PB push_back
#define F first
#define S second
#define ALL(x) x.begin(), x.end()
typedef pair<int, int>  PII;
typedef pair<LL, LL>    PLL;
const int MOD = 1000000007;
#define PI 3.1415926535897932384626

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1) cout<<1<<endl<<1<<endl;
        else if(n==1 || m==1){
            if(n>2 || m>2) cout<<2<<endl;
            else cout<<1<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++) {
                    if(i%4>1  || j%4>1) cout<<2<<" ";
                    else cout<<1<<" "; 
                }
                cout<<endl;
            }
        }else if(n==2 || m==2){
            if(m==2 && n==2) cout<<2<<endl;
            else cout<<3<<endl;
            if(n==2){
                for(int j=1;j<=m;j++){
                    if(j%3==0) cout<<3<<" ";
                    else cout<<j%3<<" ";
                }
                cout<<endl;
                for(int j=1;j<=m;j++){
                    if(j%3==0) cout<<3<<" ";
                    else cout<<j%3<<" ";
                }
            }else{
                for(int j=1;j<=n;j++){
                    if(j%3==0) cout<<3<<" "<<3<<endl;
                    else cout<<j%3<<" "<<j%3<<endl;
                }
            }

        }else{
            cout<<4<<endl;
            for(int i=1;i<=n;i++){
                if(i%4==0){
                    for(int j=1;j<=m;j++){
                        if(j%4==1) cout<<1<<" ";
                        else if(j%4==2) cout<<3<<" ";
                        else if(j%4==3) cout<<4<<" ";
                        else cout<<2<<" ";
                    }
                }else if(i%4==1){
                    for(int j=1;j<=m;j++){
                        if(j%4==1) cout<<4<<" ";
                        else if(j%4==2) cout<<3<<" ";
                        else if(j%4==3) cout<<1<<" ";
                        else cout<<2<<" ";
                    }
                }else if(i%4==2){
                    for(int j=1;j<=m;j++){
                        if(j%4==1) cout<<4<<" ";
                        else if(j%4==2) cout<<2<<" ";
                        else if(j%4==3) cout<<1<<" ";
                        else cout<<3<<" ";
                    }
                }else if(i%4==3){
                    for(int j=1;j<=m;j++){
                        if(j%4==1) cout<<1<<" ";
                        else if(j%4==2) cout<<2<<" ";
                        else if(j%4==3) cout<<4<<" ";
                        else cout<<3<<" ";
                    }
                }
                cout<<endl;


            }
        }
    }
}



