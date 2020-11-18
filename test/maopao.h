#ifndef maopao_h
#define maopao_h
void bubble1(int a[],int n)

{
    int i,j,t;
    for(i=1;i<n;i++)
    {for (j=0;j<n-i;j++){

        if (a[j]>a[j+1])
            {
             t=a[j];
             a[j]=a[j+1];
             a[j+1]=t;
             }
        }

    }
}


void bubble2(int a[], int n){
	int i, j, t;
	for (i=0; i<n-1;i++){
		for (j=n-1; j>i; j--){
			if(a[j-1]>a[j])
			{
				t = a[j-1];a[j-1] = a[j];
				a[j] = t;
			}
		}
	}
}

void bubble3(int a[],int n)

{
    int i, flag=1, t,j;
    for(i=1; i<n && flag == 1; i++){
		flag = 0;
    for (j=0;j<n-i;j++){

        if (a[j]>a[j+1])
            {                                                                              
             t=a[j];
             a[j]=a[j+1];
             a[j+1]=t;
             flag = 1;
			}
        }

    }
}

#endif
