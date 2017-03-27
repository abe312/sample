//https://www.codechef.com/ALKH2017

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void operate(vector<ll> &vec){
  ll count=0;
  if(vec.size()==1) {
    cout<<1<<endl;
    return;
  }

  if(vec.size()%2==1) {
    count++;
    vec.pop_back();
  }


  for(int i=1, n=vec.size(); i<n; i++){
    if((vec[i]^vec[i-1])) count++;
  }
  cout<<count<<endl;
}
int main(){
  vector<ll> vec;
  int test=0;
  ll n,temp;
  cin>>test;
  for(int i=0; i<test; i++){
    cin>>n;
    for(int j=0; j<n; j++){
      cin>>temp;
      vec.push_back(temp);

    }
    operate(vec);
    vec.clear();
  }

}
