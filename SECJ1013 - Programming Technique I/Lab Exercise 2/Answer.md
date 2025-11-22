```
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter the number of lines: ";
    cin>> N;
    int i = 1;
  
    while (i <= N){
        int j = 1;
  
        while (j <= i){
            cout << j << " ";
            j = j + 1;
      }
  
        cout << "\n";
        i = i + 1;
    }
  
    return 0;
}
```

## Example Output
When N = 3,

```
Enter the number of lines: 3
1
1 2
1 2 3
