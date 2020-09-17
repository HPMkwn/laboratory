delete(X,[],[]).
delete(X,[H|T],R):-
	X=H,
	!,
	delete(X,T,R1),
	R is R1.
delete(X,[H|T],R):-
	delete(X,T,R1),
	R=[H|R1].