 vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
      
      int st=0;
      int en=0;
      long long sum=0;
      while(en<=n)
      {
          if(st==en || sum<s)
          {
              sum+=arr[en];
              en++;
          }
          else if(sum>s)
          {
              sum-=arr[st];
              st++;
          }
          else
          {
              return { st+1,en};
          }
      }
      return {-1};
    }
