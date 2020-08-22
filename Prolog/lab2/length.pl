length(x) :-
        findlen(X,Count),
        write(Count).

    findlen([],X) :-
        X=0.
    
    findlen([X|Tail],Count) :-
        findlen(Tail,Prev),
        Count is Prev + 1.