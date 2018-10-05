// Las dimensiones del puzzle
#include <iostream>
#include <cmath>
using namespace std;

// { Pre: 0 < n <= 1000000000 }
int puzzle(int n)/* return ret */{

    int a = sqrt(n);

    //{ I: 0 < a <= sqrt(n) } MAL
    while (n % a > 0)
    {
       a--;
    }

   return n / a;
}
// { Post: ret = max i : (0 < j < i < sqrt(n)) ^ (i * j = n) ^ (P.t. x : 0 <= x < j : i - j < x) : i } MAL

int main(){
    int n;
    cin >> n;

    while(n != 0){
        cout << puzzle(n) << '\n';
        cin >> n;
    }

    return 0;
}

/*Version mas rapida (C)*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n, a;
//     scanf("%d", &n);

//     while(n != 0){
//         a = sqrt(n);

//         while (n % a > 0)
//         {
//             a--;
//         }
//         printf("%d\n", n/a);
//         scanf("%d", &n);
//     }

//     return 0;
// }