#include "mylang.hpp"

void PrintExpr(Expression* expr,char mp[][100],int& x,int y){
    string t=expr->what();
    int lstx=x;
    if(t=="Nil"){
        sprintf(mp[x++]+y,"Nil");
    }
    else if(t=="Boolean"){
        sprintf(mp[x++]+y,dynamic_cast<Boolean*>(expr)->v?"true":"false");
    }
    else if(t=="Number"){
        sprintf(mp[x++]+y,"%.6lf",dynamic_cast<Number*>(expr)->v);
    }
    else if(t=="String"){
        sprintf(mp[x++]+y,"\"%s\"",dynamic_cast<String*>(expr)->v.c_str());
    }
    else if(t=="FunctionArgs"){
        int y2=y+sprintf(mp[x]+y,"|--");
        FunctionArgs* p=dynamic_cast<FunctionArgs*>(expr);
        PrintExpr(p->fir,mp,x,y2);
        for(int i=lstx;i<x;i++) mp[i][y2-3]='|';
        if(p->oth){
            PrintExpr(p->oth,mp,x,y);
        }
    }
    else if(t=="Function"){
        sprintf(mp[x++]+y,"FUNCTION");
    }
    else if(t=="Table"){
        sprintf(mp[x++]+y,"TABLE");
    }
    else if(t=="Variable"){
        sprintf(mp[x++]+y,"$var %s",dynamic_cast<Variable*>(expr)->name.c_str());
    }
    else if(t=="TableIndex"){
        TableIndex* p=dynamic_cast<TableIndex*>(expr);
        int y2=y+sprintf(mp[x]+y,"$tab %s|--",p->t->name.c_str());
        PrintExpr(p->e,mp,x,y2);
        for(int i=lstx;i<x;i++) mp[i][y2-3]='|';
    }
    else if(t=="FunctionCall"){
        FunctionCall* p=dynamic_cast<FunctionCall*>(expr);
        int y2=y+sprintf(mp[x]+y,"$fun %s",p->f->name.c_str());
        PrintExpr(p->args,mp,x,y2);
        for(int i=lstx;i<x;i++) mp[i][y2]='|';
    }
    else if(t=="BinopExpression"){
        const char* name[]={"ADD","SUB","MUL","DIV","MOD","XOR","CROSS","EQ","GEQ","LEQ","GT","LT","NEQ","DOT","DOT2","ASSIGN","OR","AND"};
        BinopExpression* p=dynamic_cast<BinopExpression*>(expr);
        int y2=y+sprintf(mp[x]+y,"%s|--",name[int(p->op)]);
        PrintExpr(p->lhs,mp,x,y2);
        sprintf(mp[x]+y2-3,"|--");
        PrintExpr(p->rhs,mp,x,y2);
        for(int i=lstx;i<x;i++) mp[i][y2-3]='|';
    }
    else if(t=="UnopExpression"){
        const char* name[]={"POS","NEG","LEN","NOT"};
        UnopExpression* p=dynamic_cast<UnopExpression*>(expr);
        int y2=y+sprintf(mp[x]+y,"%s|--",name[int(p->op)]);
        PrintExpr(p->exp,mp,x,y2);
        for(int i=lstx;i<x;i++) mp[i][y2-3]='|';
    }
    else if(t=="BracketExpression"){
        PrintExpr(dynamic_cast<BracketExpression*>(expr)->exp,mp,x,y);
    }
    else{
        fprintf(stderr,"WUT IZ ZIS???\n"); exit(-1);
    }
}

void PrintCmd(Commands* cmd,char mp[][100],int& x){
    if(cmd==nullptr) return;
    sprintf(mp[x++],"---- New Command");
    PrintExpr(cmd->exp,mp,x,0);
    sprintf(mp[x++],"");
    sprintf(mp[x++],"");
    PrintCmd(cmd->oth,mp,x);
}

void PrintProgram(){
    char mp[1000][100]={0};
    int ln=0;
    for(int i=0;i<1000;i++) for(int j=0;j<99;j++) mp[i][j]=' ';
    PrintCmd(whole_program,mp,ln);
    for(int i=0;i<ln;i++) printf("%s\n",mp[i]);
}