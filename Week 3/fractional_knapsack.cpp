#include <bits/stdc++.h>
using namespace std ;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
  {
    double value = 0.0;
      vector<double> a(weights.size()) ;
      for(int i=0 ; i< weights.size() ; i++)
         a[i]=(double)values[i]/(double)weights[i] ;
      double max ;
      while(capacity>0)
      { max=0 ;
        for(int i=1 ; i<weights.size() ; i++)
          if(a[max]<a[i]) max=i ;
        if(weights[max]>=capacity)
        {
          value+=a[max]*(double)capacity ;
          return value ;
        }
        else
        {
          value+=values[max] ;
          a[max]=0 ;
          capacity=capacity-weights[max] ;
        }
      }

    return value;
  }

int main()
  {
    int n ;
    int capacity ;
    cin >> n >> capacity ;
    vector<int> values(n) ;
    vector<int> weights(n) ;
    for (int i = 0; i < n; i++)
       cin >> values[i] >> weights[i] ;
    double optimal_value = get_optimal_value(capacity, weights, values);
    cout.precision(10);
    cout << optimal_value << endl ;
    return 0 ;
  }
