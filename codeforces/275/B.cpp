#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
using namespace std;
 
#define PII pair<int,int>
 
int main(int argc, char *argv[]) {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
        cin >> grid[i];
    string result = "YES";
    vector<PII> elems;
   
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            PII a = PII(i, j);
            elems.push_back(a);
        }
 
 
    int s = elems.size();
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            PII I = elems[i];
            PII J = elems[j];
            char vi = grid[elems[i].first][elems[i].second];
            char vj = grid[elems[j].first][elems[j].second];
 
            if (vi != 'B' || vj != 'B')
                continue;
 
            int vert = (elems[i].first < elems[j].first)? 1: - 1;
            int hort = (elems[i].second <elems[j].second)? 1 : -1;
 
            bool valid = true;
            for (int y = elems[i].first; y != elems[j].first; y+=vert)
                if (grid[y][I.second] != 'B') {
                    valid = false;
                    break;
                }
            for (int x = elems[i].second; x != elems[j].second; x+=hort)
                if (grid[J.first][x] != 'B') {
                    valid = false;
                    break;
                }
            if (valid)
                continue;
            valid = true;
           for (int x = elems[i].second; x != elems[j].second; x+=hort)
                if (grid[I.first][x] != 'B') {
                    valid = false;
                    break;
                }
           for (int y = elems[i].first; y != elems[j].first; y+=vert)
                if (grid[y][J.second] != 'B') {
                    valid = false;
                    break;
                }
 
            if (!valid) {
                result = "NO";
                goto end;
            }
        }
    }
 
end:
    cout << result << endl;
    
    return EXIT_SUCCESS;
}