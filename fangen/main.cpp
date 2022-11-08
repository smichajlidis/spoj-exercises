#include <iostream>

using namespace std;

int main() {
	
	int r {};
	bool minus {false};
	
	do {
	
	    cin >> r;
	
		if (r<0) {
			r*=-1;
		    minus = true;
		}
		
		bool wiatraczek[r*2][r*2];

		for (int i {0}; i < r*2; i++) {
	        for (int j {0}; j < r*2; j++) {
	    	    wiatraczek[i][j] = false;
	        }
	    }
		    
	    int count = 0;
	    
	    if (minus == true) {
	        do {
		        for (int i {0}; i < r - count; i++) {
			        wiatraczek[i][i + count] = true;
			        wiatraczek[i + count][r*2-1-count] = true;
			        wiatraczek[r*2-1-count][r + i] = true;
			        wiatraczek[r+count][i] = true;
		        }
	        count++;	
	        } while(count<r);	     
	    }
	    else {
	        do {
	            for (int i {0}; i < r - count; i++) {
	            wiatraczek[i][r+count] = true;	
	            wiatraczek[r+i][r*2-1-count] = true;	
	            wiatraczek[r*2-1-i][i+count] = true;
	            wiatraczek[i + count][i] = true;	
	        	}
	        count++;
	    	} while (count<r);
	    }
	    
	    for (int i {0}; i < r*2; i++) {
	        for (int j {0}; j < r*2; j++) {
	    	    if (wiatraczek[i][j] == false)
	                cout << ".";
	    	    else
	 
	   	        cout << "*";
	        }
	        cout << "\n";
	    }
	    
	   minus = false; 
	} while (r != 0);
	return 0;
}