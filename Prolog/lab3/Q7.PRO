
domains
x = integer
l = integer*

predicates
 count(x,l,x)
clauses 
 count(Element,[],0).
 
 count(Element,[X|Tail],OccurNum) :-
  Element = X,!,
  count(Element,Tail,OccurNum1),
  OccurNum = OccurNum1 + 1.
  
 count(Element,[X|Tail],OccurNum) :-
  count(Element,Tail,OccurNum).
  