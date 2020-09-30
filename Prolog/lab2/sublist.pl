
sublist([],[]). %1

sublist([First|Rest],[First|Sub]):-   %2
    sublist(Rest,Sub).
    
sublist([_|Rest],Sub):- %3
    sublist(Rest,Sub).



