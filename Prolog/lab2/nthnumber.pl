NUM(X,1,[X|_]).
NUM(VAL, IND, [_|L]) :- NUM(VAL, K1, L), IND is K1 + 1.