domains
x=real
pow=integer
ans=real

predicates
raised(x,pow,ans)

clauses
raised(X,0,1).
raised(X,P,A):- P1=P-1,
raised(X,P1,A1),A=A1*X.