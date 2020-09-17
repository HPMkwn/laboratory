findlen([],X) :- X=0.

findlen([X|Tail],Count) :-
    findlen(Tail,Prev),
    Count is Prev + 1.

length(X) :-
        findlen(X,Count),
        write(Count).
