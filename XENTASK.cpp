/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
#define take(n,a)                   forall(i,0,n)cin>>a[i]
#define print(n,a)                  forall(i,0,n)cout<<a[i]<<" "
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int n,i;
    	cin>>n;
    	int a[n],b[n];
    	take(n,a);
    	take(n,b);
    	ll s1=0,s2=0;
    	forall(i,0,n)
    	{
    		if(i%2==0)
    		{
    			s1+=a[i];
    			s2+=b[i];
    		}
    		else
    		{
    			s1+=b[i];
    			s2+=a[i];
    		}
    	}
    	cout<<MIN(s1,s2)<<endl;
    }
    return 0;
}