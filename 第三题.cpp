#include <iostream>
#include <string.h>

using namespace std;

class Number {
private:
	int self, from;
	char ans[1000];
public:
	Number (int n, int radix){
		self = n;
		from = radix;
	}
	
	Number converto(int n){
		memset(ans, 0, sizeof(ans));
		int obj = self;
		int remainder;
		int len = 0;
		int build = 0;
		while (obj >= 1){
			remainder = obj % n;
			obj /= n;
			ans[len++] = remainder + 48;
		}
		
		for (int i = len - 1; i >= 0; --i) {
			build = build * 10 + (int)(ans[i]) - '0';
		}
		
		return Number(build, n);
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
		Number no1(n1, 10);     //n1是10进制正整数
		Number no3 = no1.converto(n2);  //no3是n2进制的正整数
		no3.show();     //输出结果
	}
}