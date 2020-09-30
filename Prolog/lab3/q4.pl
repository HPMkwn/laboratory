
test(0,N).
test(N,X):-

fib(1,1).
fib(2,1).

fib(X,Ans):-
    X>2,
    X1 is X-1,
    X2 is X-2,
    fib(X1,Ans1),
    fib(X2,Ans2),   
    Ans is Ans1 + Ans2.
