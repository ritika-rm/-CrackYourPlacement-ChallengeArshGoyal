https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1/#


bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    if(n>arr[size-1])
    return false;
    
    for(int i=size-1;i>0;i--)
    {
        // int s=0;
        int k= arr[i]-n;
        // int e=i-1;
        if(binary_search(arr,arr+i,k))
              return true;
    }
    return false;
    
}


spent so much time on figuring out  how to return 1
