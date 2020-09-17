domains
N,N1,N2,Ans=integer
predicates

test(integer,integer)
findfibo(integer,integer)
go
clauses

go:-
    write("Enter number"),nl,
    readint(N),
    test(1,N).
go.
test(0,N).
test(X,N):-
    X<=N,
    findfibo(X,Ans),
    write(Ans," ,"),
    X1=X+1,
    test(X1,N).



findfibo(1,1).
findfibo(2,1).
findfibo(N,Ans):-
    N>1,
    N1=N-1,
    N2=N1-1,
    findfibo(N1,Ans1),
    findfibo(N2,Ans2),
    Ans=Ans1+Ans2.