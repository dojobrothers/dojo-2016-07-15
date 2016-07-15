#include <iostream>
#include <cmath>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	int n;
	while (cin >> n && n){
		int points = 0;
		for (int j = 0; j < n; j++){
			int minutes;
			cin >> minutes;
			points += calculate_points(xi, yi);
		}
		cout << points << " pontos" << endl;
	}	
	return 0;
}