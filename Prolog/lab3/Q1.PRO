domains
m=integer
s=symbol
g=symbol


predicates
grd(m,g)
go

clauses

go:- write("Enter Student`s name."),nl,
 readln(Student),nl,
 write("Enter Student`s Marks. "),nl,
 readint(Marks),nl,
 grd(Marks,Grade),nl,
 write(Student," has grade ",Grade),nl.
 
grd(Marks,Grade):- Marks >=90,!,Grade=aa.
grd(Marks,Grade):- Marks >=80,!,Grade=ab.
grd(Marks,Grade):- Marks >=70,!,Grade=bb.
grd(Marks,Grade):- Marks >=60,!,Grade=bc.
grd(Marks,Grade):- Marks >=50,!,Grade=cc.
grd(Marks,Grade):- Marks >=40,!,Grade=cd.
grd(Marks,Grade):- Marks >=30,!,Grade=dd.

grd(Marks,Grade):- Grade=ff.