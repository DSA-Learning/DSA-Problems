int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        long long a,b,c=0,d,e=(long long)n*((long long)n+1)/2;
        e-=arr[0];
        for(a=1;a<n;a++)
        {
            e-=arr[a];
            if(arr[a]==arr[a-1])
            c=arr[a];
        }
        arr[0]=c;
        arr[1]=e+c;
        return arr;
    }
