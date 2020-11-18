#ifndef SelectSort_h
#define SelectSort_h

void SelectSort(int a[], int n){
	int i, j, k, m;
	for (i=0; i<n-1; i++){
		m = a[i];
		k = i;
		for (j=i+1; j<n; j++)
			if (a[j] < m){
				m=a[j];
				k=j;
			}
		a[k] = a[i];
		a[i] = m;
	}
}
#endif
