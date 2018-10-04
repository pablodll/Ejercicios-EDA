// Misión 1  (Backtrack to the Future)
#include <iostream>

using namespace std;

const int MAX = 10000;


// Complejidad O(n)

// { Pre : 3 <= n <= longitud(v) }
int casoPrueba(int v[], int n) /* return ret*/ {
	int i = 0, mayores[3] = { 0,0,0 };

	/*{ I :
			(0 <= i <= n) ^
			(mayores[0] = MAX a : 0 <= a < i : v[a]) ^
			(mayores[1] = MAX b : 0 <= b < i : v[b]) ^
			(mayores[2] = MAX c : 0 <= c < i : v[c]) ^
			(mayores[2] <= mayores[1] <= mayores[0])
	}*/
	while (i < n) {
		if (v[i] > mayores[0]) {
			mayores[2] = mayores[1];
			mayores[1] = mayores[0];
			mayores[0] = v[i];
		}
		else if (v[i] > mayores[1]) {
			mayores[2] = mayores[1];
			mayores[1] = v[i];
		}
		else if (v[i] > mayores[2]) {
			mayores[2] = v[i];
		}
		i++;
	}
	return  mayores[0] + mayores[1] + mayores[2];
}
/*{ Post :	(mayores[0] = MAX a : 0 <= a < i : v[a]) ^
			(mayores[1] = MAX b : 0 <= b < i : v[b]) ^
			(mayores[2] = MAX c : 0 <= c < i : v[c]) ^
			(mayores[2] <= mayores[1] <= mayores[0]) : 
			ret = (mayores[0] + mayores [1] + mayores[2]
}*/

int main() {
	int n, v[MAX];

	cin >> n;
	while (n != 0) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		cout << casoPrueba(v, n) << endl;
		cin >> n;
	}
	return 0;
}