#include <bits/stdc++.h>
//For ordered_set
#include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
using namespace std;
// For ordered_set
using namespace __gnu_pbds;
template <typename T>
using ord_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

void solve(){
    int n;
    cin>>n;
    V<ll>v1,v2,vu,vd;
    map<ll,ll>map1,map2,mapf;
    // map<int,int>map2;
    
    ll x,y,flag=0;
    loop(i,0,n){
        cin>>x;
        v1.push_back(x);
        map1[x]++;
        mapf[x]++;
    }
    loop(i,0,n){
        cin>>y;
        v2.push_back(y);
        map2[y]++;
        mapf[y]++;
    }
    for(auto it:mapf){
        if(it.second%2!=0){
            flag=1;
            break;
        }
    }
    if(flag!=1){
    for(auto i:mapf){
        x=map1[i.first];
        y=i.second/2;

        if(x==y)continue;
        else if(x>y){
            int a=x-y;
            loop(j,0,a)vu.push_back(i.first);
        }
        else{
            int a=y-x;
            loop(j,0,a)vd.push_back(i.first);
        }
    }
        // loop(i,0,vu.size())cout<<vu[i]<<" ";
        // loop(i,0,vd.size())cout<<vd[i]<<" ";
    ll min1= *min_element(v1.begin(), v1.end()); 
    ll min2= *min_element(v2.begin(), v2.end()); 
    ll wmin=min(min1,min2);
    sort(vu.begin(),vu.end());
    sort(vd.begin(),vd.end(), greater <>());

    ll count=0;
    loop(k,0,vu.size()){
        count+=min(2*wmin,min(vu[k],vd[k]));
    }
    cout<<count<<endl;
    }
    else cout<<-1<<endl;


}

int main(){
   int t = 0;
   cin >> t;
   while(t--){
       solve();
   }
   return 0;
}