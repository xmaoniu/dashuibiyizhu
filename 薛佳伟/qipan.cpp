#include<iostream>

#include<cstdio>

#include<algorithm>

#include<cmath>

#include<cstring>

using namespace std;

int c,n,k;

char mp[30][30];

int v[30];

void dfs(int pos,int k)

{

	    if(k==0)

		        {

				        c++;

					        return ;

						    }

	        if(pos>=n)

			        return ;

		    for(int i=0;i<n;i++)

			        {

					        if(mp[pos][i]=='#'&&v[i]==0)

							        {

									            v[i]=1;

										                dfs(pos+1,k-1);

												            v[i]=0;

													            }

						    }

		        if(pos+k<n)dfs(pos+1,k);

			        return ;

}

int main()

{

	    while(cin>>n>>k&&(n!=-1||k!=-1))

		        {

				        c=0;

					        for(int i=0;i<n;i++)

							            scanf("%s",mp[i]);

						        memset(v,0,sizeof(v));

							        dfs(0,k);

								        cout<<c<<endl;

									    }

	        return 0;

}
