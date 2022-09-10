long long int product(int ar[], int n, long long int mod)
 {
     long long int res=1;
     for(int i=0;i<n;i++)
     {
         res=(res*ar[i])%mod;
     }
     return res;
 }