%{
#include <cstdlib>
#include <cstdio>
#include <string>
#include "tree.h"
using namespace std;
extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
gramTree *root;
extern int yylineno;
int yylex(void);
void yyerror(const char*);
int NUM = 0;
%}

%union{
	struct gramTree* gt;
}

%token <gt> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF CONSTANT_INT CONSTANT_DOUBLE
%token <gt> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <gt> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <gt> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <gt> XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token <gt> CHAR INT DOUBLE VOID BOOL 

%token <gt> CASE IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token <gt> TRUE FALSE

%token <gt> ';' ',' ':' '=' '[' ']' '.' '&' '!' '~' '-' '+' '*' '/' '%' '<' '>' '^' '|' '?' '{' '}' '(' ')'

%type <gt> primary_expression postfix_expression argument_expression_list unary_expression unary_operator
%type <gt> multiplicative_expression additive_expression shift_expression relational_expression equality_expression
%type <gt> and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression
%type <gt> assignment_expression assignment_operator expression

%type <gt> declaration init_declarator_list init_declarator type_specifier

%type <gt> declarator 

%type <gt> parameter_list parameter_declaration identifier_list
%type <gt> abstract_declarator initializer initializer_list designation designator_list
%type <gt> designator statement labeled_statement compound_statement block_item_list block_item expression_statement
%type <gt> selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition
%type <gt> declaration_list



%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%%

Program 
	: translation_unit {
		root = create_tree("Program",1,$1);
	}
	;

/*基本表达式*/
primary_expression 
	: IDENTIFIER {
		$$ = create_tree($1->content.c_str(),1,$1);
		$$->no = NUM ++;
		printf("%d:\tID Declaration,\t\tsymbol:%s\tChildren:\n", $$->no, $1->content.c_str());
	}
	| TRUE {
		$$ = create_tree($1->content.c_str(),1,$1);
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
		$$->no = NUM ++;
		printf("%d:\tValue Judgement,\t\tTRUE\tChildren:\n", $$->no);
	}
	| FALSE {
		$$ = create_tree($1->content.c_str(),1,$1);
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
		$$->no = NUM ++;
		printf("%d:\tValue Judgement,\t\tFALSE\tChildren:\n", $$->no);
	}
	| CONSTANT_INT {
		//printf("%d",$1->int_value);
		$$ = create_tree($1->content.c_str(),1,$1);
		// $$->type = "int";
		// $$->int_value = $1->int_value;
		$$->no = NUM ++;
		printf("%d:\tConstant INT Declaration,\tvalue:%s\tChildren:\n", $$->no, $1->content.c_str());
		
	}
	| CONSTANT_DOUBLE {
		$$ = create_tree($1->content.c_str(),1,$1);
		// $$->type = "double";
		// $$->double_value = $1->double_value;
		$$->no = NUM ++;
		printf("%d:\tConstant DOUBLE Declaration,\tvalue:%s\tChildren:\n", $$->no, $1->content.c_str());
	}
	| '(' expression ')' {
		$$ = create_tree("primary_expression",1,$2);
		$$->no = $2->no;
	}
	;

/*后缀表达式*/
postfix_expression
	: primary_expression {
		$$ = create_tree($1->content.c_str(),1,$1);
		$$->no = $1->no;
	}
	| postfix_expression '[' expression ']' {
		$$ = create_tree("postfix_expression",4,$1,$2,$3,$4);
		//数组调用
		$$->no = $1->no;
	}
	| postfix_expression '(' ')' {
		$$ = create_tree("postfix_expression",3,$1,$2,$3);
		//函数调用
		$$->no = $1->no;
	}
	| postfix_expression '(' argument_expression_list ')' {
		$$ = create_tree("postfix_expression",4,$1,$2,$3,$4);
		//函数调用
		$$->no = $1->no;
	}
	| postfix_expression INC_OP {
		//++
		$$ = create_tree("postfix_expression",2,$1,$2);
		$$->no = $1->no;
	}
	| postfix_expression DEC_OP {
		//--
		$$ = create_tree("postfix_expression",2,$1,$2);
		$$->no = $1->no;
	}
	;

argument_expression_list
	: assignment_expression {
		$$ = create_tree("argument_expression_list",1,$1);
		$$->no = $1->no;
	}
	| argument_expression_list ',' assignment_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tVar Declaration,\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*一元表达式*/
unary_expression
	: postfix_expression{
		//printf("postfix");
		$$ = create_tree("unary_expression",1,$1);
		$$->no = $1->no;
	}
	| INC_OP unary_expression{
		//++
		$$ = create_tree("unary_expression",2,$1,$2);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:++\t\tChildren:", $$->no);
	}
	| DEC_OP unary_expression{
		//--
		$$ = create_tree("unary_expression",2,$1,$2);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:--\t\tChildren:", $$->no);
	}
	| unary_operator unary_expression{
		$$ = create_tree("unary_expression",2,$1,$2);
		$$->no = $1->no;
	}
	;

/*单目运算符*/
unary_operator
	: '+' {
		$$ = create_tree("unary_operator",1,$1);
		$$->no = $1->no;
	}
	| '-' {
		$$ = create_tree("unary_operator",1,$1);
		$$->no = $1->no;
	}
	| '~' {
		$$ = create_tree("unary_operator",1,$1);
		$$->no = $1->no;
	}
	| '!' {
		$$ = create_tree("unary_operator",1,$1);
		$$->no = $1->no;
	}
	;

/*可乘表达式*/
multiplicative_expression
	: unary_expression {
		$$ = create_tree("multiplicative_expression",1,$1);
		$$->no = $1->no;
	}
	| multiplicative_expression '*' unary_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:*\t\tChildren: ", $$->no);
		printNo($$);
	}
	| multiplicative_expression '/' unary_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:/\t\tChildren: ", $$->no);
		printNo($$);
	}
	| multiplicative_expression '%' unary_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:%\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*可加表达式*/
additive_expression
	: multiplicative_expression  {
		$$ = create_tree("additive_expression",1,$1);
		$$->no = $1->no;
	}
	| additive_expression '+' multiplicative_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:+\t\tChildren: ", $$->no);
		printNo($$);
	}
	| additive_expression '-' multiplicative_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:-\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*左移右移*/
shift_expression
	: additive_expression {
		$$ = create_tree("shift_expression",1,$1);
		$$->no = $1->no;
	}
	| shift_expression LEFT_OP additive_expression {
		//<<
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:<<\t\tChildren: ", $$->no);
		printNo($$);
	}
	| shift_expression RIGHT_OP additive_expression {
		//>>
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:>>\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*关系表达式*/
relational_expression
	: shift_expression {
		$$ = create_tree("relational_expression",1,$1);
		$$->no = $1->no;
	}
	| relational_expression '<' shift_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:<\t\tChildren: ", $$->no);
		printNo($$);
	}
	| relational_expression '>' shift_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:>\t\tChildren: ", $$->no);
		printNo($$);
	}
	| relational_expression LE_OP shift_expression {
		// <= 
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:<=\t\tChildren: ", $$->no);
		printNo($$);
	}
	| relational_expression GE_OP shift_expression {
		// >=
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:>=\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*相等表达式*/
equality_expression
	: relational_expression {
		$$ = create_tree("equality_expression",1,$1);
		$$->no = $1->no;
	}
	| equality_expression EQ_OP relational_expression {
		// ==
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:==\t\tChildren: ", $$->no);
		printNo($$);
	}
	| equality_expression NE_OP relational_expression {
		// !=
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:!=\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

and_expression
	: equality_expression {
		$$ = create_tree("and_expression",1,$1);
		$$->no = $1->no;
	}
	| and_expression '&' equality_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:&\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*异或*/
exclusive_or_expression
	: and_expression {
		$$ = create_tree("exclusive_or_expression",1,$1);
		$$->no = $1->no;
	}
	| exclusive_or_expression '^' and_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:^\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*或*/
inclusive_or_expression
	: exclusive_or_expression {
		$$ = create_tree("inclusive_or_expression",1,$1);
		$$->no = $1->no;
	}
	| inclusive_or_expression '|' exclusive_or_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:|\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*and逻辑表达式*/
logical_and_expression
	: inclusive_or_expression {
		$$ = create_tree("logical_and_expression",1,$1);
		$$->no = $1->no;
	}
	| logical_and_expression AND_OP inclusive_or_expression {
		//&&
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:&&\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*or 逻辑表达式*/
logical_or_expression
	: logical_and_expression {
		$$ = create_tree("logical_or_expression",1,$1);
		$$->no = $1->no;
	}
	| logical_or_expression OR_OP logical_and_expression {
		//||
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:||\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

/*赋值表达式*/
assignment_expression
	: logical_or_expression {
		//条件表达式
		$$ = create_tree("assignment_expression",1,$1);
		$$->no = $1->no;
	}
	| unary_expression assignment_operator assignment_expression {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:%s\t\tChildren: ", $$->no, $2->content.c_str());
		printNo($$);
	}
	;

/*赋值运算符*/
assignment_operator
	: '=' {
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| MUL_ASSIGN {
		//*=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| DIV_ASSIGN {
		// /=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| MOD_ASSIGN {
		// %=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| ADD_ASSIGN {
		// += 
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| SUB_ASSIGN {
		// -=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| LEFT_ASSIGN {
		// <<=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| RIGHT_ASSIGN {
		// >>=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| AND_ASSIGN {
		// &=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| XOR_ASSIGN {
		// ^=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	| OR_ASSIGN {
		// |=
		$$ = create_tree("assignment_operator",1,$1);
		$$->no = $1->no;
	}
	;

/*表达式*/
expression
	: assignment_expression {
		//赋值表达式
		$$ = create_tree("expression",1,$1);
		$$->no = $1->no;
	}
	| expression ',' assignment_expression {
		//逗号表达式
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", $$->no);
		printNo($$);
	}
	;


declaration
	: type_specifier ';' {
		$$ = create_tree("declaration",1,$1); //?
		$$->no = $1->no;
	}
	| type_specifier init_declarator_list ';' {
		$$ = create_tree("declaration",2,$1,$2);
		$$->no = $1->no;
	}
	;


init_declarator_list
	: init_declarator {
		$$ = create_tree("init_declarator_list",1,$1);
		$$->no = $1->no;
	}
	| init_declarator_list ',' init_declarator {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", $$->no);
		printNo($$);
	}
	;

init_declarator
	: declarator {
		$$ = create_tree("init_declarator",1,$1);
		$$->no = $1->no;
	}
	| declarator '=' initializer {
		$$ = create_tree($2->content.c_str(),2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:=\t\tChildren: ", $$->no);
		printNo($$);
	}
	;


/*类型说明符*/
type_specifier
	: VOID {
		$$ = create_tree("type_specifier",1,$1);
		$$->no = NUM ++;
		printf("%d:\tType Specifier,\t\tvoid\t\tChildren:\n", $$->no);
	}
	| CHAR {
		$$ = create_tree("type_specifier",1,$1);
		$$->no = NUM ++;
		printf("%d:\tType Specifier,\t\tchar\t\tChildren:\n", $$->no);
	}
	| INT {
		$$ = create_tree("type_specifier",1,$1);
		$$->no = NUM ++;
		printf("%d:\tType Specifier,\t\tint\t\tChildren:\n", $$->no);
	}
	| DOUBLE {
		$$ = create_tree("type_specifier",1,$1);
		$$->no = NUM ++;
		printf("%d:\tType Specifier,\t\tdouble\t\tChildren:\n", $$->no);	
	}
	| BOOL {
		$$ = create_tree("type_specifier",1,$1);
		$$->no = NUM ++;
		printf("%d:\tType Specifier,\t\tbool\t\tChildren:\n", $$->no);
	}
	;



declarator
	: IDENTIFIER {
		//变量
		$$ = create_tree("declarator",1,$1);
		$$->no = NUM ++;
		printf("%d:\tID Declaration,\t\tsymbol:%s\tChildren:\n", $$->no, $1->content.c_str());
	}
	| '(' declarator ')' {
		//.....
		$$ = create_tree("declarator",1,$2);
		$$->no = $2->no;
	}
	| declarator '[' assignment_expression ']' {
		//数组
		//printf("assignment_expression");
		$$ = create_tree("declarator",2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tArray Declaration,\tsymbol:%s, interval: %s\tChildren:", $$->no, $1->content.c_str(), $3->content.c_str());
		printNo($$);
	}
	| declarator '[' '*' ']' {
		//....
		$$ = create_tree("declarator",1,$1);
		$$->no = NUM++;
		printf("%d:\tArray Declaration,\tsymbol:%s\tChildren:\n", $$->no, $1->content.c_str());
	}
	| declarator '[' ']' {
		//数组
		$$ = create_tree("declarator",1,$1);
		$$->no = NUM ++;
		printf("%d:\tArray Declaration,\tsymbol:%s\tChildren:", $$->no, $1->content.c_str());
		printNo($$);
	}
	| declarator '(' parameter_list ')' {
		//函数
		$$ = create_tree("declarator",2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tFunction Declaration,\tsymbol:%s, interval: %s\tChildren:", $$->no, $1->content.c_str(), $3->content.c_str());
		printNo($$);
	}
	| declarator '(' identifier_list ')' {
		//函数
		$$ = create_tree("declarator",2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tFunction Declaration,\tsymbol:%s, interval: %s\tChildren:", $$->no, $1->content.c_str(), $3->content.c_str());
		printNo($$);
	}
	| declarator '(' ')' {
		//函数
		$$ = create_tree("declarator",1,$1);
		$$->no = NUM ++;
		printf("%d:\tFunction Declaration,\tsymbol:%s\tChildren:", $$->no, $1->content.c_str());
		printNo($$);
	}
	;


//参数列表
parameter_list
	: parameter_declaration {
		$$ = create_tree("parameter_list",1,$1);
		$$->no = $1->no;
	}
	| parameter_list ',' parameter_declaration {
		$$ = create_tree("parameter_list",2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", $$->no);
		printNo($$);
	}
	;

parameter_declaration
	: type_specifier declarator {
		$$ = create_tree("parameter_declaration",2,$1,$2);
		$$->no = $1->no;
	}
	| type_specifier abstract_declarator {
		$$ = create_tree("parameter_declaration",2,$1,$2);
		$$->no = $1->no;
	}
	| type_specifier {
		$$ = create_tree("parameter_declaration",1,$1);
		$$->no = $1->no;
	}
	;

identifier_list
	: IDENTIFIER {
		$$ = create_tree("identifier_list",1,$1);
		$$->no = $1->no;
	}
	| identifier_list ',' IDENTIFIER {
		$$ = create_tree("identifier_list",2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", $$->no);
		printNo($$);
	}
	;

abstract_declarator
	: '(' abstract_declarator ')' {
		$$ = create_tree("abstract_declarator",1,$2);
		$$->no = $2->no;
	}
	| '[' ']' {
		$$ = create_tree("abstract_declarator",1,$$);
		$$->no = $1->no;
	}
	| '[' assignment_expression ']' {
		$$ = create_tree("abstract_declarator",1,$2);
		$$->no = $2->no;
	}
	| abstract_declarator '[' ']' {
		$$ = create_tree("abstract_declarator",1,$1);
		$$->no = $1->no;
	}
	| abstract_declarator '[' assignment_expression ']' {
		$$ = create_tree("abstract_declarator",2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tArray Declaration,\tsymbol:%s, interval: %s\tChildren:", $$->no, $1->content.c_str(), $3->content.c_str());
		printNo($$);
	}
	| '[' '*' ']' {
		$$ = create_tree("abstract_declarator",1,$$);
		$$->no = $1->no;
	}
	| abstract_declarator '[' '*' ']' {
		$$ = create_tree("abstract_declarator",1,$1);
		$$->no = $1->no;
	}
	| '(' ')' {
		$$ = create_tree("abstract_declarator",1,$$);
		$$->no = $1->no;
	}
	| '(' parameter_list ')' {
		$$ = create_tree("abstract_declarator",1,$2);
		$$->no = $2->no;
	}
	| abstract_declarator '(' ')' {
		$$ = create_tree("abstract_declarator",1,$1);
		$$->no = $1->no;
	}
	| abstract_declarator '(' parameter_list ')' {
		$$ = create_tree("abstract_declarator",2,$1,$3);
		$$->no = $1->no;
	}
	;

//初始化
initializer
	: assignment_expression {
		$$ = create_tree("initializer",1,$1);
		$$->no = $1->no;
	}
	| '{' initializer_list '}' {
		//列表初始化 {1,1,1}
		$$ = create_tree("initializer",1,$2);
		$$->no = $2->no;
	}
	| '{' initializer_list ',' '}' {
		//列表初始化 {1,1,1,}
		$$ = create_tree("initializer",1,$2);
		$$->no = $2->no;
	}
	;

initializer_list
	: initializer {
		$$ = create_tree("initializer_list",1,$1);
		$$->no = $1->no;
	}
	| designation initializer {
		$$ = create_tree("initializer_list",2,$1,$2);
		$$->no = $1->no;
	}
	| initializer_list ',' initializer {
		$$ = create_tree("initializer_list",2,$1,$3);
		$$->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", $$->no);
		printNo($$);
	}
	| initializer_list ',' designation initializer {
		$$ = create_tree("initializer_list",3,$1,$3,$4);
		$$->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", $$->no);
		printNo($$);
	}
	;

designation
	: designator_list '=' {
		$$ = create_tree("designation",1,$1);
		$$->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:=\t\tChildren: ", $$->no);
	}
	;

designator_list
	: designator {
		$$ = create_tree("designator_list",1,$1);
		$$->no = $1->no;
	}
	| designator_list designator {
		$$ = create_tree("designator_list",2,$1,$2);
		$$->no = $1->no;
	}
	;

designator
	: '[' logical_or_expression ']' {
		$$ = create_tree("designator",1,$2);
		$$->no = $2->no;
	}
	| '.' IDENTIFIER {
		$$ = create_tree("designator",1,$2);
		$$->no = $2->no;
	}
	;

//声明
statement
	: labeled_statement {
		$$ = create_tree("statement",1,$1);
		$$->no = $1->no;
	}
	| compound_statement {
		$$ = create_tree("statement",1,$1);
		$$->no = $1->no;
	}
	| expression_statement{
		$$ = create_tree("statement",1,$1);
		$$->no = $1->no;
	}
	| selection_statement {
		$$ = create_tree("statement",1,$1);
		$$->no = $1->no;
	}
	| iteration_statement {
		$$ = create_tree("statement",1,$1);
		$$->no = $1->no;
	}
	| jump_statement {
		$$ = create_tree("statement",1,$1);
		$$->no = $1->no;
	}
	;

//标签声明
labeled_statement
	: IDENTIFIER ':' statement {
		$$ = create_tree("labeled_statement",2,$1,$3);
		$$->no = $1->no;
	}
	| CASE logical_or_expression ':' statement {
		$$ = create_tree("labeled_statement",3,$1,$2,$4);
		$$->no = $1->no;
		printNo($$);
	}
	;

//复合语句
compound_statement
	: '{' '}' {
		$$ = create_tree("compound_statement",1,$$);
		$$->no = NUM ++;
		printf("%d:\tCompoundK statement,\tChildren: ", $$->no);
		printNo($$);
	}
	| '{' block_item_list '}' {
		$$ = create_tree($2->content.c_str(),1,$2);
		$$->no = NUM ++;
		printf("%d:\tCompoundK statement,\tChildren: ", $$->no);
		printNo($$);
	}
	;

block_item_list
	: block_item {
		$$ = create_tree("block_item_list",1,$1);
		$$->no = $1->no;
	}
	| block_item_list block_item {
		$$ = create_tree("block_item_list",2,$1,$2);
		$$->no = $1->no;
	}
	;

block_item
	: declaration {
		$$ = create_tree("block_item",1,$1);
		$$->no = $1->no;
	}
	| statement {
		$$ = create_tree("block_item",1,$1);
		$$->no = $1->no;
	}
	;

expression_statement
	: ';' {
		$$ = create_tree("expression_statement",1,$1);
		$$->no = $1->no;
	}
	| expression ';' {
		$$ = create_tree("expression_statement",1,$1);
		$$->no = $1->no;
	}
	;

//条件语句
selection_statement
	: IF '(' expression ')' statement %prec LOWER_THAN_ELSE {
		$$ = create_tree("selection_statement",2,$3,$5);
		$$->no = NUM ++;
		printf("%d:\tJudgementK statement,\tif\t\tChildren: ", $$->no);
		printNo($$);
	}
    	| IF '(' expression ')' statement ELSE statement {
		$$ = create_tree("selection_statement",3,$3,$5,$7);
		$$->no = NUM ++;
		printf("%d:\tJudgementK statement,\tif...else\t\tChildren: ", $$->no);
		printNo($$);
	}
    	| SWITCH '(' expression ')' statement {
		$$ = create_tree("selection_statement",2,$3,$5);
		$$->no = NUM ++;
		printf("%d:\tJudgementK statement,\tswitch\t\tChildren: ", $$->no);
		printNo($$);
	}
    	;

//循环语句
iteration_statement
	: WHILE '(' expression ')' statement {
		$$ = create_tree("iteration_statement",2,$3,$5);
		$$->no = NUM ++;
		printf("%d:\tRepeatK statement,\twhile\t\tChildren: ", $$->no);
		printNo($$);
	}
	| DO statement WHILE '(' expression ')' ';' {
		$$ = create_tree("iteration_statement",2,$2,$5);
		$$->no = NUM ++;
		printf("%d:\tRepeatK statement,\tdo...while\tChildren: ", $$->no);
		printNo($$);
	}
	| FOR '(' expression_statement expression_statement ')' statement {
		$$ = create_tree("iteration_statement",3,$3,$4,$6);
		$$->no = NUM ++;
		printf("%d:\tRepeatK statement,\tfor\t\tChildren: ", $$->no);
		printNo($$);
	}
	| FOR '(' expression_statement expression_statement expression ')' statement {
		$$ = create_tree("iteration_statement",4,$3,$4,$5,$7);
		$$->no = NUM ++;
		printf("%d:\tRepeatK statement,\tfor\t\tChildren: ", $$->no);
		printNo($$);
	}
	| FOR '(' declaration expression_statement ')' statement {
		$$ = create_tree("iteration_statement",3,$3,$4,$6);
		$$->no = NUM ++;
		printf("%d:\tRepeatK statement,\tfor\t\tChildren: ", $$->no);
		printNo($$);
	}
	| FOR '(' declaration expression_statement expression ')' statement {
		$$ = create_tree("iteration_statement",4,$3,$4,$5,$7);
		$$->no = NUM ++;
		printf("%d:\tRepeatK statement,\tfor\t\tChildren: ", $$->no);
		printNo($$);
	}
	;

//跳转指令
jump_statement
	: GOTO IDENTIFIER ';' {
		$$ = create_tree("jump_statement",1,$2);
		$$->no = NUM ++;
		printf("%d:\tGoto statement,\t\tChildren: ", $$->no);
		printNo($$);
	}
	| CONTINUE ';' {
		$$ = create_tree("jump_statement",2,$1,$2);
		$$->no = NUM ++;
		printf("%d:\tContinue statement,\t\tChildren: ", $$->no);
	}
	| BREAK ';' {
		$$ = create_tree("jump_statement",2,$1,$2);
		$$->no = NUM ++;
		printf("%d:\tBreak statement,\t\tChildren: ", $$->no);
	}
	| RETURN ';' {
		$$ = create_tree("jump_statement",2,$1,$2);
		$$->no = NUM ++;
		printf("%d:\tReturn statement,\t\tChildren: ", $$->no);
	}
	| RETURN expression ';' {
		$$ = create_tree("jump_statement",1,$2);
		$$->no = NUM ++;
		printf("%d:\tReutrn statement,\t\tto:%s\tChildren: ", $$->no, $2->content.c_str());
		printNo($$);
	}
	;

translation_unit
	: external_declaration {
		$$ = create_tree("translation_unit",1,$1);
		$$->no = $1->no;
	}
	| translation_unit external_declaration {
		$$ = create_tree("translation_unit",2,$1,$2);
		$$->no = $1->no;
	}
	;

external_declaration
	: function_definition {
		$$ = create_tree("external_declaration",1,$1);
		$$->no = $1->no;
		//函数定义
		//printf("function_definition");
		printNo($$);
	}
	| declaration {
		$$ = create_tree("external_declaration",1,$1);
		$$->no = $1->no;
		//变量声明
		//printf("declaration");
		printNo($$);
	}
	;

function_definition
	: type_specifier declarator declaration_list compound_statement {
		$$ = create_tree("function_definition",4,$1,$2,$3,$4);
		$$->no = $1->no;
		printNo($$);
	}
	| type_specifier declarator compound_statement {
		$$ = create_tree("function_definition",3,$1,$2,$3);
		$$->no = $1->no;
		printNo($$);
	}
	;

declaration_list
	: declaration {
		$$ = create_tree("declaration_list",1,$1);
		$$->no = $1->no;
	}
	| declaration_list declaration {
		$$ = create_tree("declaration_list",2,$1,$2);
		$$->no = $1->no;
	}
	;

%%

extern int column;
int success = 1;

void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {

	yyin = fopen(argv[1],"r");
	
	yyparse();
	printf("\n");
	//eval(root,0);	//输出语法分析树

	freeGramTree(root);

	fclose(yyin);
	return 0;
}
