find([Head|Tail], 1):- write('The element in the list is '), write(Head).
find([Head|Tail], N):- N1 is N - 1, find(Tail, N1).
find([], N):- write('There is no such element in the list').