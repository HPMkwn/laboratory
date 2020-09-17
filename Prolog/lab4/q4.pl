mergelist([],[],[]).
mergelist([X],[],X). 
mergelist([],[Y],Y).

mergelist([X|List1],[Y|List2],Res):-
        X < Y,
        mergelist(List1,[Y|List2],Res1),
        Res = [X|Res1].

 mergelist([X|List1],[Y|List2],Res):-
        mergelist([X|List1],List2,Res1),
        Res = [Y|Res1].