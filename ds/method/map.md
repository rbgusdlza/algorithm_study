## 자주 사용하는 메서드

### insert({key, value})

```
map<int, string> mp;
mp.insert({1, "kim"});
cout << mp[1]; // kim
```

* ``insert({key, value})``는 key에 해당하는 value를 삽입한다.
* mp[1] = "kim"과 같은 방식으로도 가능하다.
