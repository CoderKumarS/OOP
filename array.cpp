#include <iostream>
using namespace std;
int main()
{
    int a[100], i, n, k, item;
    cout << "How many number to store in array: ";
    cin >> n;
    cout << "Enter the Number: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 1. Insert at k position
    //  cout<<"Enter the number and its position";
    //  cin>>item >>k;
    //  k=k-1;
    //  for ( i = 0; i >= k; i--)
    //  {
    //      a[i+1]=a[i];
    //  }
    //  a[k]=item;

    // 2. Delete by value
    //  cout<<"Enter the number to delete: ";
    //  cin>>item;
    //  for(i = 0; i<n; i++){
    //      if(a[i]==item){
    //          for (int  j = i; j < n; j++)
    //          {
    //              a[j]=a[j+1];
    //          }
    //          n--;
    //      }
    //  }

    // 3. Delete by position
    // cout << "Enter the position to delete: ";
    // cin >> k;
    // k = k - 1;
    // for (int i = k; i < n; i++)
    // {
    //     a[i] = a[i + 1];
    // }
    // n--;

    // 4. Linear Search
    // int c = -1;
    // cout << "Enter the number to found: ";
    // cin >> item;
    //  for(i = 0; i<n; i++){
    //      if(a[i]==item){
    //         cout<<"Element found at index \t"<<i;
    //      c++;
    //      break;
    //      }
    //  }
    // if (c==-1)
    // {
    //     cout<<"Element not found";
    // }
    
    //  Display the Array
    cout << "Content of the array\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
