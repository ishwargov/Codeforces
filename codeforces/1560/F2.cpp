#include <bits/stdc++.h>
using namespace std;

void solve(){
	string n;
	int k;
	cin>>n>>k;

	while (1){
		set<char> s;
		for (auto c : n) s.insert(c);
		if (s.size() <= k) {cout<<n;return;}

		s.clear();
		int j = 0;
        while(1){
			s.insert(n[j]);
			if (s.size() > k){
				while (n[j] == '9') j--;
				n[j]++;
				for (int i=j+1; i<n.size(); i++) n[i] = '0';
				break;
			}
            j++;
		}
	}
    cout<<n;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		solve(); 
        cout<<'\n';
    }
    return 0;
}