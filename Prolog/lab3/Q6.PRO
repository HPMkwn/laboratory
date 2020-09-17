domains
    l = integer*

predicates
    even(l)
    odd(l)
clauses
    even([H|T]):-H mod 2 = 0;even(T).
    odd([H|T]):-H mod 2 = 1;odd(T).