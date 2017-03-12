#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using namespace std ;

int main()
  {
     int n, m=10000, M=-1000, ans=0;
     cin>> n ;
     vector<int> a(n), b(n), points ;
     for(int i=0 ; i<n ; i++)
      { cin>> a[i] >> b[i] ;
        if(M<b[i]) M=b[i] ;
        if(m>a[i]) m=a[i] ;
      }
     vector<int> q(M+1,0) ;
     for(int i=0 ; i<n ; i++)
       for(int j=a[i] ; j<=b[i] ; j++)
         q[j]++ ;

     for(int i=m ; i<=M ; i++)
     {
       if(q[i]>q[i-1] && q[i]>=q[i+1])
       {
         ans++ ;
         points.push_back(i) ;
       }
     }
      cout<< ans << endl ;
      for(int i=0 ; i<points.size() ; i++)
      cout<< points[i] << " " ;
      return 0 ;
  }
