 conc([],L,L).
 conc([X|T],L2,[X|T1]):-
     conc(T,L2,T1).

reverse([],[]).
reverse([H|T],ReversedList):-
    reverse(T,Reverse),
    conc(Reverse,[H],ReversedList).

pal([],[]).
pal(X,Res) :-
    reverse(X,[Y|ReversedList]),
    conc(X,ReversedList,Res).
