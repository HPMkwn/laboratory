del(X, [], []) :- !.
del(X, [X|Xs], Y) :- !, del(X, Xs, Y).
del(X, [T|Xs], Y) :- !, del(X, Xs, Y2), append([T], Y2, Y).