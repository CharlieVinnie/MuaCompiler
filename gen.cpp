#include "bits/stdc++.h"
#define For(i,a,b) for(int i=a;i<=b;i++)
#define Rev(i,a,b) for(int i=a;i>=b;i--)
#define Fin(file) freopen(file,"r",stdin)
#define Fout(file) freopen(file,"w",stdout)
#define assume(expr) ((!!(expr))||(exit((fprintf(stderr,"Assumption Failed: %s on Line %d\n",#expr,__LINE__),-1)),false))
using namespace std;
const int N=0; typedef long long ll;
signed main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char ss[100];
    while(cin>>ss){
        printf("|\tSIMPLE_EXPR TOK_%s SIMPLE_EXPR\n",ss);
        printf("\t{\n");
        printf("\t\t$$ = new BinopExpression($1,BinopExpression::%s,$2);\n",ss);
        printf("\t}\n");
    }
    cerr<<"Time = "<<clock()<<" ms"<<endl;
    return 0;
}

// START TYPING IF YOU DON'T KNOW WHAT TO DO
// STOP TYPING IF YOU DON'T KNOW WHAT YOU'RE DOING
// CONTINUE, NON-STOPPING, FOR CHARLIEVINNIE

// Started Coding On: May 25 Thu, 12 : 43 : 08