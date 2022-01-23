//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#define ll long long
//
//ll factor(int num, int mul) {
//	ll fct = 0;
//
//	for (ll i = mul; i <= num; i *= mul) {
//		fct += num / i;
//	}
//
//	return fct;
//}
//
//int main() {
//	ll n, m;
//	scanf("%lld %lld", &n, &m);
//	
//	ll fct2 = factor(n, 2) - (factor(m, 2) + factor((n - m), 2));
//	ll fct5 = factor(n, 5) - (factor(m, 5) + factor((n - m), 5));
//	
//
//	printf("%lld", min(fct2, fct5));
//}