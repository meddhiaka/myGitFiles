# Simple linear search
```c
    int linearSearch(int n, int array[], int needle){
        for(int i=0;i<n;i++){
            if (array[i] == needle){
                return 1;
            }
        }
        return 0;
    }
```
<hr>

# An optimized search algorithm, Binary search.

```c
    void binarySearch(int n, int array[], int needle){
        
        int low = 0, high = n, m;

        do{
            m = low + (high - low)/2;
            
        }while();
    }

```