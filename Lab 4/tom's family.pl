parent(tom,bob).
parent(tom,john).
parent(bob,jim).
parent(bob,kim).
parent(john,sam).
parent(jim,pat).

grandparent(X,Y):-
    parent(X,Z),
    parent(Z,Y).

ancestor(X,Y):-
    parent(X,Y).
ancestor(X,Y):-
    parent(X,Z),ancestor(Z,Y).