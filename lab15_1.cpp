#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 1; i < N; i++){
		for(int k = 0; k < i; k++){
			if(d[i] > d[k]){
				T temp = d[i];
				d[i] = d[k];
				d[k] = temp;
			}
		}
		cout << "Pass " << i << ":";
		for(int j = 1; j <= N; j++){
			cout << d[j-1] << " ";
		}
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
