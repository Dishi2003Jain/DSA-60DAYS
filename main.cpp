#include<iostream>
using namespace std;

int main(){
    int a , b , x , y;
    cin>> a >> b>> x>> y;
    cout<< a*x + b*y;
return 0;
}


#include<iostream>
using namespace std;

int main(){
    int N ;
    cin>>N;
    if ((N%5==0 ||N%11==0) && (N%55!=0)){
        cout<<"ONE";
    }
    else if ((N%5==0)&&(N%11==0)){
        cout<<"BOTH";
    }
    else{
        cout<<"NONE";
    }
return 0;
}

#include<iostream>
using namespace std;

int main(){
    long int N,A,B,arr[N];
    A=0;
    B=0;
    cin>>N;
    for (int i = 1; i <=N ; i++)
    {
        if (N%i==0)
        {
            A++;
            arr[B]=i;
            B++;
        }
    }
    cout<<A<<endl;
    for (int j = 0; j < A; j++)
    {
        cout<<arr[j]<<" ";
    }
      
return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    if((a>b&&b>c)||(a<b&&b<c)){
        cout<<b;
    }
    else if((b>a&&a>c)||(b<a&&a<c)){
        cout<<a;
    }
    else{
        cout<<c;
    }
return 0;
}

#include<iostream>
using namespace std;

int main(){
    int L, R;
    cin>>L>>R;
    for ( L; L<=R; L++)
    {
         if(L%2 == 1){
            cout<<L<<" ";
         }
    }
    
    
return 0;
}

#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    if (N%5==0 || N%6==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}

#include<iostream>
using namespace std;

int main(){
    long int n, arr[n];
    cin>>n;
    for (long int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (long int j = n-1;  j>=0; j--)
    {
        cout<<arr[j]<<" ";
    }
    
    
return 0;
}


#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int p=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if(arr[j]==k)
        {
            p = 1;
            break;
        }
    }
    if(p==1){
        cout<<"1"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    
return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a >>b >>c;
    if (a+b>c && b+c>a && c+a>b){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
return 0;
}

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans + i;
    }
    cout<<ans;
    
return 0;
}


#include<iostream>
using namespace std;

int main(){
   long int n;
   cin>>n;
   long int ans = 0;
   long int sol = 0;
   for (int i = 1; i <= 2*n; i++)
   {
       if(i%2==0){
           ans = ans + i;
       }
       else{
           sol = sol + i;
       }
    }
    cout<<sol<<" "<<ans;
return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a+b+c==180){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a >>b >>c;
    if (a+b>c && b+c>a && c+a>b){
        if(a==b && b==c){
            cout<<"1";
        }
        else if((a==b&&a!=c)||(b==c&&b!=a)||(c==a&&c!=b)){
            cout<<"2";
        }
        else{
            cout<<"3";
        }
    }
    else {
        cout<<"-1";
    }
return 0;
}