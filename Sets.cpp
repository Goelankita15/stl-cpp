stores unique values // red black trees
------------------------------------------------------------------------------------------------------------
set < data_type > s;
sorted order
uniquely inserted //o[logn]
s.insert(x);
auto it = s.find(value)  // returns iterator
s.erase(it) // delets iterator
s.erase(value) // values deleted

unordered set  -> order doesnot matter //complex  nhi, hashtables se
------------------------------------------------------------------------------------------------------------

MULTISET
allowed multiple values -> Red black trees
sorted order
s.find(value) // returns first iterator
s.erase(value) // deletes all the values 
s.erase(it) // deletes the value at iteratot it
