#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

double getPrice(int minutes){
  double preco_total = 0;
  preco_total += 0.00 * min(15, max(0, minutes));
  minutes -= 15;
  preco_total += 0.10 * min(45, max(0, minutes));
  minutes -= 45;
  preco_total += 0.08 * min(120, max(0, minutes));
  minutes -= 120;
  preco_total += 0.06 * min(4*60, max(0, minutes));
  minutes -= 4*60;
  preco_total += 0.02 * max(0, minutes);
  return preco_total;
}

int main(){
	std::ios::sync_with_stdio(false);
	int minutes;
	while (cin >> minutes && minutes){
 		double preco = getPrice(minutes);
		cout << setprecision(2) << fixed << "Total: R$ " << preco  << endl;
	}	
	return 0;
}