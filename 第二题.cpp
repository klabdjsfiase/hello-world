#include <iostream>

using namespace std;

class HanXin {
private:
	int l3, l5, l7;
public:
	void line3(int n){
		l3 = n;
	}
	
	void line5(int n){
		l5 = n;
	}
	
	void line7(int n){
		l7 = n;
	}
	
	void showMany(){
		int ans = -1;
		for (int i = 10; i <= 100; ++i) {
			if (i % 3 == l3 && i % 5 == l5 && i % 7 == l7) {
				ans = i;
			}
		}
		if (ans == -1) {
			cout << "Impossible" << endl;
		}else {
			cout << ans << endl;
		}
	}
};


int main() {
	int n, n1, n2, n3;
	std::cin >> n;
	for(int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2 >> n3;
		HanXin hx;  //韩信
		hx.line3(n1);  //3人一排
		hx.line5(n2);   //5人一排
		hx.line7(n3);   //7人一排
		hx.showMany();
	}
}