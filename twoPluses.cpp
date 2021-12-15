#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    vector<bool>* a;
    int** data;
    //scan input
    scanf("%i %i", &r, &c);
    a = new vector<bool>[r] {};
    data = new int* [r] {};
    
    for (int i{}; i < r; ++i){
        data[i] = new int[c] {};
        a[i].resize(c);
        string s;
        cin >> s;
        for (int j{}; j < c; ++j) a[i][j] = (s[j] == 'G');
    }
    //find plus coord, store plus length in array data
    for (int i{ 0 }; i < r; ++i)
        for (int j{ 0 }; j < c; ++j)
            if (a[i][j])
            {
                int search = min(min(i, j), min(r - i - 1, c - j - 1));

                int t{ 1 };
                for (; t <= search; ++t)
                    if (a[i][j + t] && a[i + t][j] && a[i - t][j] && a[i][j - t]) {}
                    else break;
                data[i][j] = t - 1;
            }
    //brute force    
    int maxarea{};
    for (int i{ 0 }; i < r; ++i)
        for (int j{ 0 }; j < c; ++j)
            for (int i1{ 0 }; i1 < r; ++i1)
                for (int j1{ 0 }; j1 < c; ++j1)
                    for (int u{}; u <= data[i][j]; ++u)
                        for (int v{}; v <= data[i1][j1]; ++v)
                        {
                            if (i == i1)
                            {
                                if (u + v < abs(j - j1))goto notoverlap;
                                else continue;
                            }
                            else if (j == j1)
                            {
                                if (u + v < abs(i - i1)) goto notoverlap;
                                else continue;
                            }
                            else
                            {
                                if (abs(i - i1) <= u && abs(j - j1) <= v) continue;
                                if (abs(i - i1) <= v && abs(j - j1) <= u) continue;
                                goto notoverlap;
                            }

                        notoverlap:

                            int area = (u * 4 + 1) * (v * 4 + 1);
                            if (area > maxarea)maxarea = area;
                        }

    printf("%i", maxarea);
    delete[] a;
    for (int i{}; i < r; ++i) delete[] data[i];
    delete[] data;
    return 0;
}