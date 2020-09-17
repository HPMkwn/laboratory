domains
x=integer

predicates
gcd(x,x,x)

clauses
gcd(0,X,X):- X>0,!.
gcd(X,Y,Z):- X>=Y,X1=X-Y, gcd(X1,Y,Z).
gcd(X,Y,Z):- X<Y, X1=Y- X, gcd(X1,X,Z).