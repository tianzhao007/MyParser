# MyParser
###lex myparser.l
###yacc myparser.y -d
###g++ -std=c++11 -o compiler tree.cpp tools.cpp lex.yy.c y.tab.c
###./compiler test(Your File Name)
