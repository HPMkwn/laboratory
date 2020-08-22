range(M,N):-
    between(M,N,X),
    writeln(X),
    X>=N-1,!.
    range(M,X).
