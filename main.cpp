#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int t,x=0,y=0,tx=0,ty=0,out;
   vector<pair<int,int> > v;
   set<vector<pair<int,int> > >se;
   string ch;
   cin>>t;
   for(int i=0;i<t;i++){
       out=0;
       cin>>ch;
       se.clear();
       for(int j=0;j<ch.size();j++){
           switch(ch[j]){
               case 'N': ty++; break;
               case 'W': tx--; break;
               case 'E': tx++; break;
               case 'S': ty--; break;
           }
           v.clear();
           v.push_back(make_pair(x,y));
           v.push_back(make_pair(tx,ty));
           sort(v.begin(),v.end());
           if(se.find(v)!=se.end())
               out++;
           else{
               se.insert(v);
               out+=5;
           }
           x=tx;
           y=ty;
              
       }
       cout<<out<<'\n';
      
   }
   return 0;
}

