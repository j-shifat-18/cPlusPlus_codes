#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int mx=0,ind;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
            if(a[i]>mx)
            {
                mx=a[i];ind=i;
            }
        }
        int cnt=0;
        for(i=0;i<k;i++)
        {
            if(ind==i)
                continue;

            if(a[i]>=2)
            {
                cnt+=(a[i]-2);
                cnt+=(a[i]-2);
                cnt++;
                cnt+=2;
            }
            else{
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
