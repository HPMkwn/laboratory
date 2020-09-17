domains
    x = integer
    l = integer*

predicates
    has(x,l)
    add(x,l,l)
clauses
    has(X,[H|T]):-
    	X = H;
    	has(X,T).
    add(X,L,L):-
    	has(X,L),!.
    add(X,L,LL):-
    	LL = [X|L]