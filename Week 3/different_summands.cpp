#include <bits/stdc++.h>
using namespace std ;

vector<int> optimal_summands(int n)
  {
    vector<int> summands;
    int i=1 ;
    while(n>0)
      {
        if(n-i>i || n-i==0)
          {
            summands.push_back(i) ;
            n=n-i ;
          }
        i++ ;
      }
    return summands;
  }

int main()
  {
    int n;
    cin >> n;
    vector<int> summands = optimal_summands(n);
    cout << summands.size() << endl ;
    for (int i = 0; i < summands.size(); ++i)
      cout << summands[i] << ' ';
  }
