Normal Maps
-----------
  
stores  (key_value) paires
map <d1, d2> p  // implemented by red black trees
keys ke according sorted order m store hongi
nut unordered maps donot stores value soted order
it++ is used not it+1 as not cntinous
m.insert({d1, d2}); //o[logn] as sorted order insertion + depends on the key data type 
//on basis of comparision with each value , so in case of string each char is comapred then time is O[s.size() *logn]

m[k1] = v1;
m[k2] = v2;
m.first and m.second

keys UNIQUE 
m[2] = "abs"
m[2] = "ANKITA"
cout << m[2] ;  => ANKITA  // unique keys so value changed at that location

auto it = m.find(value) // returns iteraor , if not present then give v.end() // o[logn]
m.erase(key) // all values erased
m.erase(it) // delete pair at particular iterator; => prefered
m.clear() // deletes all the vector


Hashing limitiaations
negative values and greater values
