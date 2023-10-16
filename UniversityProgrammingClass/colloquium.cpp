#pragma region task-1
/* #include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i, positive, negative;
    positive=0,negative=0;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>0){
            positive++;
        }
        else{
            negative++;
        }
    }
    cout<<"Negative numbers="<<negative<<endl<<"Positive numbers="<<positive;
} */
#pragma endregion
#pragma region task-2
#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int n,m,i,j,k;
    cout<<"Enter size of first array:"<<endl;
    cin>>n;
    int a[n];
    int mergedArray[500];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
        mergedArray[i]=a[i];
    }
    cout<<"Enter size of second array:"<<endl;
    cin>>m;
    int b[m];
    k=i;
    for ( i = 0; i < m; i++)
    {
        cin>>b[i];
        mergedArray[k]=b[i];
        k++;
    }
    
    sort(mergedArray,mergedArray+k);
    for ( i = 0; i < k; i++)
    {
        cout<<mergedArray[i]<<" ";
    }
    return 0;
}
#pragma endregion
#pragma region task-5
#include <iostream>
using namespace std;
int main() {
    int numRows = 5;
    for (int i = 0; i < numRows; ++i) {
        int val = 1;
        for (int j = 0; j < numRows - i; ++j)
            cout << " ";
        for (int j = 0; j <= i; ++j) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
#pragma endregion
#pragma region task-6
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
	int n=10,result,count=0,i;
	int a[500];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
	    if(a[i]<100){
		cout<<a[i]<<" ";
	    }
	}
	return 0;
}
#pragma endregion
#pragma region task-7
    #include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
 int rekursiya (int n){
 if(n==1){
     return 0;
 }
 if(n==2){
     return 1;
 }
 if(n==3){
     return 1;
 }
 if(n==4){
     return 2;
 }
 else{
     return rekursiya(n-1)+rekursiya(n-2);
 }
 }
 int main(){
     int n;
     cin>>n;
     cout<<rekursiya(n);
 }

#pragma endregion
#pragma region task-8
#include<string.h>
#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
  int a;
  cin>>a;
  int n1=0;
  int n2=1;
  int n3=0;
    while(n2<=a){
        n3=n1+n2;
    
    n1=n2;
    n2=n3;
    }
    cout<<n3;
}
#pragma endregion
#pragma region task-9
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int n=10,m=10,i;
    int a[n],b[m];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    int max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<max<<endl;
//    int min=a[0];
//    for(i=0;i<n;i++){
//        if(min>a[i]){
//            min=a[i];
//        }
//    }
//    cout<<min;
    
    // for(i=0;i<m;i++){
    //     cin>>b[i];
    // }
      
	return 0;
}
#pragma endregion
#pragma region task-11
/* #include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i,say=0;
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>=10 && a[i]<=30){
            say++;
        }
    }
    cout<<say;
    return 0;  
} */
#pragma endregion
