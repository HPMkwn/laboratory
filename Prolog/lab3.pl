grade(marks).
range(n1, n2).
print_range(n1,n2).
gcd(a,b,gcd).
ordered(list).
raised_to(number, power, result).
fibonacci(n).
list_member(list, element).
insert(list,element,result).
even_odd(list, even,odd).
counte(element,list,number).
fibo(a,b).
fib(a,b).


%q1
grade(Marks):- 
	Marks>= 90, write("Your grade is AA"), 
	!; Marks >= 80, write("Your grade is AB"), 
	!; Marks >= 70, write("Your grade is BB"), 
	!; Marks >= 60, write("Your grade is BC"), 
	!; Marks >= 50, write("Your grade is CC"), 
	!; Marks >= 40, write("Your grade is CD"), 
	!; Marks >= 33, write("Your grade is DD"),
	!; write("Your grade is FF").

%q2

range(N1,N2):- write(N1),nl, print_range(N1,N2), write(N2).
print_range(N1, N2) :- N1 \= N2, N is N1 + 1,N \= N2, write(N), nl,
print_range(N, N2).

%q3 (1)
gcd(A,B,GCD):- A = 0, GCD is B, !; B = 0, GCD is A, !; A = B, GCD is A, !; A > B,N is A - B, gcd(N,B, GCD), !;B > A, N is B - A, gcd(A, N,GCD).

%q3 (2)

ordered([X,[]]).

ordered([X,Y|Tail]):- X < Y, ordered([Y|Tail]).


%q3 (3)

raised_to(_, 0, 1).
raised_to(X, Y, Z):- Y1 is Y - 1, raised_to(X, Y1, Z1), Z is Z1*X.

%q4

fib(1,1).
fib(2,1).
fib(N,F):-
	N>2,
	N1 is N-1,
	N2 is N-2,
	fib(N1,F1),
	fib(N2,F2),
	F is F1+F2.

fibo(X,N):-
	fib(X,Y),
	Y =< N,
	write(Y),
	nl,
	X1 is X+1,
	fibo(X1,N).
	

%q5
list_member(X, [X|_]).
list_member(X,[Head|Tail]):- list_member(X, Tail).

insert(Element, List, X):- list_member(Element, List), X is A, !.
insert(Element, List, [List|Element]).

%q6
# even_odd(list, odd, even).

count([],0,0).
count([H|T], X,Y):- 1 is mod(H,2), count(T, P, Y), X is P + 1, !.
count([H|T], X, Y):- 0 is mod(H,2), count(T, X, P), Y is P + 1, !.

%q7
counte(Element,[],0).
counte(Element, [X|List], Count) :-
Element = X, !,
counte(Element, List, Count1),
Count = Count1+1.

counte(Element,[X|List], Count) :-
counte(Element, List, Count).



