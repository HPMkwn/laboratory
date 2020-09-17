domains
x=integer

predicates
interval(x,x,x)

clauses
interval(X,X,Z):- X<=Z.
interval(X,Y,Z):-
 X<=Z,YY= X+1,YY<Z,interval(YY,Y,Z).