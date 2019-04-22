#include <iostream>
#include <cstdio>

using namespace std;

class Number {
private:
	int self;
	
	int GCD( int a, int b ){
		int n = a % b;
		while (n != 0) {
			a = b;
			b = n;
			n = a % b;
		}
		return b;
	}
	
public:
	Number(int n){
		self = n;
	}
	
	Number maxDivisor(Number obj){
		return Number(GCD(self, obj.self));
	}
	
	void show(){
		cout << self << endl;
	}
};

int main() {
	int n, n1, n2;
	std::cin >> n;
	for(int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2;
		Number no1(n1), no2(n2);
		Number no3 = no1.maxDivisor(no2);  //最大公约数
		no3.show();
	}
}