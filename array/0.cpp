#include <iostream>
using namespace std;

int main() {
	//code
	int totalcases,i,n;
	cin >> totalcases;
	
	for (i = 0;i < totalcases;i++) {
	    cin >> n;
	    int arr[n],j;
	    
	    for (j =0;j < n;j++) {
	        cin >> arr[j];
	    }
	    
	    for (j = n-1;j > -1;j--) {
	        cout << arr[j] << " ";
	    }
	    cout << endl;
	}
	
	
	return 0;
}