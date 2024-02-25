## 자주 사용하는 메서드

### insert({key, value})

```c++
map<int, string> mp;
mp.insert({1, "kim"});
cout << mp[1]; // kim
```

* ``insert({key, value})``는 key에 해당하는 value를 삽입한다.
* mp[1] = "kim"과 같은 방식으로도 가능하다.

### size(), erase(key)

```c++
map<int, string> mp;
mp[1] = "kim";
mp[2] = "gyu";
mp[3] = "hyeon";
cout << mp.size(); // 3
mp.erase(1);
cout << mp.size(); // 2
```

* ``size()``는 map에 존재하는 요소들의 개수를 반환한다.
* ``erase(key)``는 key에 해당하는 요소를 삭제한다.
