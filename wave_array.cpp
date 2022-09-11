 void convertToWave(int n, vector<int>& arr){
        
        for(int i=0;i<n;i+=2)
        {
            if(arr[i]<=arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        
    }