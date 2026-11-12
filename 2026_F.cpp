#include <iostream>

using namespace std;

int mult_3_v1(int n){

    int v1 = 1;
    int v2 = 2;
    int holder;

    while(v2<n){
        holder = v2;
        v2 = 3*v1;
        v1 = holder;

   }

   return v1;
};

// Vou lembrar de pointers para usar o swap
int mult_3_v2(int n){

    int v1 = 1;
    int v2 = 2;
    int holder;

    while(v2<n){
        holder = v2;
        v2 = 3*v1;
        v1 = holder;
   }

   return v2;
};
////////////////////////////////////////////

int main(void){

    int n,v1,v2;
    int d_min;
    int d_prox;
    int d_t;
    cin >> n;

    v1 = mult_3_v1(n);
    v2 = mult_3_v2(n);

    d_min = n - v1;
    d_t = v2 - v1;
    d_prox = 3*v1 - v2;

    cout << v2 + d_min*(d_prox/d_t) << endl;
    

    return 0;
}