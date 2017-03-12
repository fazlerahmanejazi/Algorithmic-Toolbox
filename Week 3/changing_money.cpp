#include <bits/stdc++.h>
using namespace std ;

int main()
{
  ios_base::sync_with_stdio (false) ;
  int m, n=0 ;
  cin>> m ;
  n+=m/10 ;
  m=m%10 ;
  n+=m/5 ;
  m=m%5 ;
  n+=m ;
  cout<< n ;
  return 0 ;
}
