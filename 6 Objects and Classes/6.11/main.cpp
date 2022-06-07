#include <iostream>

using namespace std;

class fraction {
private:
	int num;
	int den;
public:
	void set(){
		char p;
		cout << "Enter fraction (n/d): ";
		cin >> num >> p >> den;
	}

	fraction fadd(fraction n) { //n2=n
		fraction sum;
		sum.num = num * n.den + n.num * den;
		sum.den = den * n.den;
		return sum;
	}

	fraction fsub(fraction n) {
		fraction sum;
		sum.num = num * n.den - n.num * den;
		sum.den = den * n.den;
		return sum;
	}

	fraction fmul(fraction n) {
		fraction sum;
		sum.num = num * n.num;
		sum.den = den * n.den;
		return sum;
	}

	fraction fdiv(fraction n) {
		fraction sum;
		sum.num = num * n.den;
		sum.den = den * n.num;
		return sum;
	}

	void lowterms() {
		long tnum, tden, temp, gcd;

		tnum = labs(num);
		tden = labs(den);

		if (tden == 0) {
			cout << "Illegal fraction: division by 0";
			exit(1);
		}
		else if (tnum == 0) {
			num = 0;
			den = 1;
			return;
		}

		while (tnum != 0) {
			if (tnum < tden) {
				temp = tnum;
				tnum = tden;
				tden = temp;
			}
			tnum = tnum - tden;
		}
		gcd = tden;
		num = num / gcd;
		den = den / gcd;
		cout << "Fraction values is " << num << "/" << den << endl;
	}

	/*void get() const {
		cout << "Fraction values is " << num << "/" << den << endl;
	}*/
};



int main(){
	fraction n1, n2, sum;
	char ch;
	
	do {
		char var;
	
		n1.set();
		n2.set();
		cout << "Enter operation (+, -, *, /): ";
		cin >> var;

		switch (var)
		{
		case '+':
			sum = n1.fadd(n2); 
			sum.lowterms();
			break;
		case '-':
			sum = n1.fsub(n2); 
			sum.lowterms();
			break;
		case '*':
			sum = n1.fmul(n2); 
			sum.lowterms();
			break;
		case '/':
			sum = n1.fdiv(n2); 
			sum.lowterms();
			break;
		default:
			break;
		}
		
		cout << "\nDo you want to repeat (y/n)? ";
		cin >> ch;
	} while (ch != 'n');
	

	return 0;
}


