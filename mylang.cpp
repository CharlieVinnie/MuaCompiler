#include "mylang.hpp"

void PrintExpr(Expression* expr,char mp[][1000],int& x,int y){
    string t=expr->what();
    int lstx=x;
    if(t=="Nil"){
        sprintf(mp[x++]+y,"Nil");
    }
    else if(t=="Boolean"){
        sprintf(mp[x++]+y,dynamic_cast<Boolean*>(expr)->v?"true":"false");
    }
    else if(t=="Number"){
        sprintf(mp[x++]+y,"%.6lf\n",dynamic_cast<Number*>(expr)->v);
    }
}

void PrintProgram(Commands* cmd,char mp[][1000],int& x){
    if(cmd==nullptr) return;
    sprintf(mp[x++],"---- New Command");
    PrintExpr(cmd->exp,mp,x,0);
    sprintf(mp[x++],"");
    sprintf(mp[x++],"");
    PrintProgram(cmd->oth,mp,x);
}