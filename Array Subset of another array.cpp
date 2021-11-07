int bs(int a1[], int l, int h, int num)
    {
        if(l <= h)
        {
            int mid = (l+h)/2;
            
            if(a1[mid]==num) 
                return mid;
            
            if(a1[mid]>num) 
                return bs(a1, l, mid-1, num);
            
            if(a1[mid]<num) 
                return bs(a1, mid+1, h, num);
        }
        
        return -1;
    }


string isSubset(int a1[], int a2[], int n, int m) {
    
    sort(a1,a1+n);
    
    int index;
    
    for(int i=0; i<m; i++)
    {
        index = bs(a1,0,n-1,a2[i]);
        if (index == -1)
        {
            return "No";
        }
    }
    
    return "Yes";
}
