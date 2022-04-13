#include <iostream>

using namespace std;

int fibonacci(int i){
if(i<2){
    return i;
}
else{
    return fibonacci(i-1)+fibonacci(i-2);
}
}

int main()
{
    int n;
    cout<<"¿Cuantos numeros de fibonacci desea?"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}

