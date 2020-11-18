#ifndef InsertSort_h
#define InsertSort_h

void InsertSort(int a[], int n ){
	int i,j,t;
	for (i=1; i<n; i++){
		t=a[i];
		j = i-1;
		while (j>=0 && a[j]>t){
				a[j+1] = a[j];
				j--;
		}
		a[j+1] = t;
	}
}

#endif
