#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        
        for(int &i:v){cin>>i;}
        
        int m;
        cin>>m;
        while(m--)
        {
            string s;
            cin>>s;
            map<char,int>mp;
            bool check=true;
            if(s.length()!=n)
            {
                cout<<"NO"<<endl;
                continue;
            }
            for(int i=0;i<s.length();i++)
            {
                if(mp.find(s[i])!=mp.end())
                {
                    if(v[mp[s[i]]]==v[i])
                    {
                        continue;
                    }
                    else
                    {
                        //cout<<s[i]<<" "<<i<<endl;
                        //cout<<mp[s[i]]<<" "<<v[i]<<endl;
                        check=false;
                        break;
                    }
                }
                else
                {
                    mp[s[i]]=i;
                }
            }
            bool check2=true;
            map<int,int>mp1;
            for(int i=0;i<n;i++)
            {
                if(mp1.find(v[i])!=mp1.end())
                {
                    if(s[mp1[v[i]]]==s[i])
                    {
                        continue;
                    }
                    else
                    {
                        check2=false;
                        break;
                    }
                }
                else
                {
                    mp1[v[i]]=i;
                }
            }
            //cout<<check<<" "<<check2<<endl;
            if(check && check2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}