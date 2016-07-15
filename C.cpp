#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double getPrice(int minutes){
  if (minutes <= 15)
  	return 0;
  if (minutes > 15 && minutes <= 60)
  	return 0.10 * (minutes - 15);
}

int main(){
	std::ios::sync_with_stdio(false);
	int minutes;
	while (cin >> minutes && minutes){
 		double preco = getPrice(minutes);
		cout << setprecision(2) << fixed << preco  << endl;
	}	
	return 0;
}