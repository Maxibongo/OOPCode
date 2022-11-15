// This file combines exercise 3 and 4 
#include "Fraction.hh"



void farey(int N){
	std::vector<Fraction> init;
	init.push_back(Fraction(0,1));
	init.push_back(Fraction(1,1));
	std::vector<Fraction> sol;
	int j = 1;
	if(N <= 1){
		sol = init;
	}
	else{
		while(j < N){
			for(int i = 0; i < init.size()-1; i++){
				sol.push_back(init[i]);
				if(init[i].denom + init[i+1].denom == j +1){
					sol.push_back(Fraction(init[i].num + init[i+1].num,init[i].denom + init[i+1].denom));
				}
			}
			sol.push_back(init[init.size()-1]);
			init = sol;
			sol.clear();
			j++;
		}
	}
	for(int i = 0; i < init.size(); i++){
		std::cout << init[i].to_string() << std::endl;
	}
}

void test_fraction(){
	Fraction f1(-3,12);
	Fraction f2(4,3);
	Fraction f3(0,1);
	int gcd_;

	//f3 = f1 + f2
	f3 = (f1+f2);
	std::cout << f3.to_string() << std::endl;

	//f3 = f1 * f2
	f3 = (f1*f2);
	std::cout << f3.to_string() <<std::endl;

	//f3 = 4 + f2
	f3 = Fraction(4) + f2;
	std::cout << f3.to_string() <<std::endl;

	//f3 = f2 + 5
	f3 = f2 + Fraction(5);
	std::cout << f3.to_string() <<std::endl;

	//f3 = 12 * f1
	f3 = 12 * f1;
	std::cout << f3.to_string() <<std::endl;

	//f3 = f1 * 6
	f3 = f1 * 6;
	std::cout << f3.to_string() <<std::endl;

	//f3 = f1/2
	f3 = (f1/f2);
	std::cout << f3.to_string() <<std::endl;
}

int main(){
	test_fraction();

	for(int i = 1; i < 7; ++i){
		std::cout << "========================" << std::endl;
		std::cout << i << std::endl;
		farey(i);
	}

	return 0;
}