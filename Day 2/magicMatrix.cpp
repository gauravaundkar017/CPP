#include <iostream>
using namespace std ;

int main(){
	int size=3;
	
	int arr[size][size], i,j, sumRow = 0 , sumColumn = 0, sumDiagonal = 0;
	
	for(i=0 ; i<size ; i++){
		for(j = 0 ; j < size ; j++){
			cin>>arr[i][j];
		}
	}
	for(i=0 ; i<size ; i++){
		for(j = 0 ; j < size ; j++){
			cout<<arr[i][j]<<" ";
		}
		if(size == 2){
			cout<<endl;
		}
	}
	
	cout<<endl;
	cout<<"Row Sum : "<< endl;
	for(i=0 ; i<size ; i++){
		for(j = 0 ; j < size ; j++){
			sumRow = sumRow + arr[i][j];

		}
		

	}
	cout<<"sumRow => "<<sumRow<< endl;
	
	cout<<endl;
	cout<<"Sum of column : "<< endl;
	for(i=0 ; i<size ; i++){
		for(j = 0 ; j < size ; j++){

			sumColumn = sumColumn + arr[j][i];
		}
	}
	
	
	cout<<"sumColumn => "<<sumColumn<< endl;
	
	cout<<"DiagonalSum => "<< endl;
	
	int principal = 0, secondary = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
 
            // Condition for principal diagonal
            if (i == j)
                principal += arr[i][j];
 
            // Condition for secondary diagonal
            if ((i + j) == (size - 1))
                secondary += arr[i][j];
        }
	}
	cout<<"principal DiagonalSum => "<<principal<< endl;
	cout<<"secondary DiagonalSum => "<<secondary<< endl;
	
	
	if(sumRow == sumColumn == principal == secondary){
		cout<<"Magic Number"<< endl;
	}else{
		cout<<"Not Magic Number"<< endl;
	}
	
	
	return 0;
}
