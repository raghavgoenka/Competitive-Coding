    #include<bits/stdc++.h>
    using namespace std;

    bool m[4000005];
    vector<int> sieve(int n)
    {
        memset(m, true, sizeof(m));
        for(int i = 2; i * i <= n; i++)
        {
            if(m[i])
            {
                for(int j = i * i; j <= n; j += i)
                {
                    m[j] = false;
                }
            }
        }
        vector<int> a;
        for(int i = 2; i <= n; i++)
        {
            if(m[i])
                a.push_back(i);
        }
        return a;
    }

    int main()
    {
        vector<int> a = sieve(4000000);
        int tt; cin >> tt;
        while(tt--)
        {
            int n; cin >> n;
            vector<int> b(n);
            for(int i = 0; i < n; i++)
            {
                cin >> b[i];
                b[i]--;
            }
            for(int i = 0; i < n; i++)
            {
                cout << a[b[i]] << " ";
            }
            cout << endl;
        }
    }
    #include<bits/stdc++.h>
    using namespace std;

    bool m[4000005];
    vector<int> sieve(int n)
    {
        memset(m, true, sizeof(m));
        for(int i = 2; i * i <= n; i++)
        {
            if(m[i])
            {
                for(int j = i * i; j <= n; j += i)
                {
                    m[j] = false;
                }
            }
        }
        vector<int> a;
        for(int i = 2; i <= n; i++)
        {
            if(m[i])
                a.push_back(i);
        }
        return a;
    }

    int main()
    {
        vector<int> a = sieve(4000000);
        int tt; cin >> tt;
        while(tt--)
        {
            int n; cin >> n;
            vector<int> b(n);
            for(int i = 0; i < n; i++)
            {
                cin >> b[i];
                b[i]--;
            }
            for(int i = 0; i < n; i++)
            {
                cout << a[b[i]] << " ";
            }
            cout << endl;
        }
    }
