// BRUTE FORCE SOLUTION TC--O(N*K)

 vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int j, max;
        vector<int>res;
         for (int i = 0; i <= n - k; i++) {
        max = arr[i];
 
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
           res.push_back(max); 
        }
        
        return res;
    }

// OPTIMIZED APPROACH TC--O(N)

