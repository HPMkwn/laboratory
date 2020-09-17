codes([],[]).

codes([X|T],Res) :- 
    codes(T,Res1),
    char_code(C,X),
    Res = [C|Res1].