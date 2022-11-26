
/* Data - Graph definition */

arc(a,b).  % 1
arc(a,c).  % 2
arc(b,c).  % 3
arc(b,d).  % 4
arc(c,d).  % 5
arc(c,a).  % 6


/* Determines whether an element belogs to list */

member(X,[X|_]).
member(X,[_|T]) :- member(X,T).


/* Reverse list */

reverse([H|T], R, AccR) :- reverse(T,R,[H|AccR]).
reverse([], R, R).
reverse(List, ReversedList) :- reverse(List, ReversedList, []).


/* Find path between nodes of graph */

path(X, Y, P, AccP) :- 
    arc(X, Z),
    \+ member(Z, AccP),
    path(Z, Y, P, [X|AccP]).

path(X, X, P, P).

path(X, Y, P) :- 
    path(X, Y, RP, []),
    reverse([Y|RP], P).