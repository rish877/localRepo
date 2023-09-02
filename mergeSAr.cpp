#include <bits/stdc++.h>

using namespace std;

void msa(int a[], int n, int b[], int m, int c[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];

            k++;
            j++;
        }
    }
    while (i < n)
    {
        c[k] = a[i];

        k++;
        i++;
    }

    while (j < m)
    {
        c[k] = b[j];

        k++;
        j++;
    }
}
void print(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{

    int p;
    cin >> p;
    int a[p];
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }
    int c[p + q] = {0};

    msa(a, p, b, q, c);
    print(c, p + q);
}