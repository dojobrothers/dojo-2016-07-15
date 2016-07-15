#include <iostream>
#include <cmath>

using namespace std;

int calculate_points(double x,double y){
	double r = sqrt(x*x + y*y);
	return r >= 6 ? 0 : r <= 0 ? 10 : 11 - ceil(r);
}

int main(){
	std::ios::sync_with_stdio(false);
	int n;
	while (cin >> n && n){
		int points = 0;
		for (int j = 0; j < n; j++){
			double xi, yi;
			cin >> xi >> yi;
			points += calculate_points(xi, yi);
		}
		cout << points << " pontos" << endl;
	}	
	return 0;
}