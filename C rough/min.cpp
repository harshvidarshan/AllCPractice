
void solution () {
            long n;
            cin>>n;
            vector<long>v(n);
            for(long i=0;i<n;i++)
                cin>>v[i];
        
            long res =__gcd(v[0],v[1]);
            for(long i=2;i<n;i++)
                res=__gcd(res,v[i]);
            cout<<(res*n)<<endl;   
        }
