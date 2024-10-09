#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string st;
    cin>>st;
    vector<int> parindapernahimarta(4);
    for(int i = 0;i<4;i++){
        parindapernahimarta[i] = (int)st[i]-'0';
    }
    int yuppi = 0;
    for(int i = 0;i<4;i++){
        yuppi += parindapernahimarta[i];
    }
    if(yuppi == 1){
        cout<<(11)<<endl;
        return;
    }
    if(yuppi == 3){
        cout<<231<<endl;return;
    }
    if(yuppi == 4){
        cout<<441<<endl;return;
    }
    if(yuppi == 2){
        if((parindapernahimarta[0] == 1  && parindapernahimarta[2] == 1) || (parindapernahimarta[0] == 1  && parindapernahimarta[3] == 1) ||  (parindapernahimarta[1] == 1  && parindapernahimarta[2] == 1) || (parindapernahimarta[1] == 1  && parindapernahimarta[3] == 1)){
            cout<<121<<endl;return ;
    }
    }
    else{
        cout<<(21)<<endl;
    }
}   


int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}