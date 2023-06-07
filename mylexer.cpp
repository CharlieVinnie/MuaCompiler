#include <bits/stdc++.h>
#include "mylang.hpp"
#include "lexer.hpp"
#include "lang.hpp"
using namespace std;

// map<string,Variable*> Variable::var_map;

Commands* whole_program = nullptr;

double MakeDemInt(char* s,int len){
	double res=0;
	for(int i=0;i<len;i++) res=res*10+(s[i]-'0');
	return res;
}

double MakeHexInt(char* s,int len){
	assert(s[0]=='0'&&(s[1]=='x'||s[1]=='X'));
	double res=0;
	for(int i=2;i<len;i++){
		if(s[i]>='0'&&s[i]<='9') res=res*16+(s[i]-'0');
		else res=res*16+10+(toupper(s[i])-'A');
	}
	return res;
}

double MakeReal(char* s,int len){
	int p=0;
	double a=0,b=0,pw=0.1; int neg=0;
	for(p=0;p<len;p++){
		if(s[p]=='.'||s[p]=='e'||s[p]=='E') break;
		a=a*10+(s[p]-'0');
	}
	if(p==len) return a;
	if(s[p]=='.'){
		for(p++;p<len;p++){
			if(s[p]=='e'||s[p]=='E') break;
			a=a+pw*(s[p]-'0'); pw/=10;
		}
		if(p==len) return a;
	}
	p++;
	if(s[p]=='-') neg=1,p++;
	else if(s[p]=='+') p++;
	for(;p<len;p++){
		b=b*10+(s[p]-'0');
	}
	if(neg) b=-b;
	fprintf(stderr,"MakeReal(%s) = %.5lf %.5lf\n",s,a,b);
	return a*pow(10,b);
}

char* MakeString(char* s,int len){
	char* res=new char[len+1];
	for(int i=0;i<len;i++) res[i]=s[i];
	res[len]=0;
	return res;
}