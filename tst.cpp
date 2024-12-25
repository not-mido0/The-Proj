#include <iostream>
#include <iomanip>
#include <algorithm>
#include <climits>  
using namespace std;

int main() {
  long long SumOfAll =  0 ;
    long long arr[] = {51000, 5155 , 62000, 12555, 193000, 153555, 754000, 10545 , 250560, 206450, 310000, 315453, 450543 , 455356, 6416520, 6056515, 7589500, 748565, 615489 , 6268478};
  int size = sizeof(arr) / sizeof(arr[0]);
  int vis[size] ;
  char order ; 
  for (int i = 0; i < size; i++) {
    SumOfAll += arr[i];
  }
  cout << "The avrege Balance is : " << SumOfAll / size << endl;

  cout << "The maximum balance is : " << *max_element(arr, arr + size ) << endl;

  cout << "The minimum balance is : " << *min_element(arr, arr + size ) << endl;

   for (int i = 0; i < size; i++) {
        vis[i] = 0; 
    }
        for (int i = 0; i < size; i++) {
        
        if (vis[i] == 1) {
            continue; 
        } 
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                vis[j] = 1;
                count++;
            }
        
        }
        cout << arr[i] << count << endl; 
        }

  cout << "Enter the order (A || a  for ascending, D || d for descending) : ";
  cin >> order;
  if (order == 'A' || order == 'a' ) {
    sort(arr, arr + size);
  } else if (order == 'D' || order == 'd'  ) {
    sort(arr, arr + size, greater<int>());
  }
  cout << "The sorted balances are : " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

        
         




}

