## 자주 사용하는 메서드

### insert({key, value})

```c++
map<int, string> mp;
mp.insert({1, "kim"});
cout << mp[1]; // kim
```

* ``insert({key, value})``는 key에 해당하는 value를 삽입한다.
* mp[1] = "kim"과 같은 방식으로도 가능하다.
* mp[key]를 통해 key를 기반으로 map의 요소를 참조한다.

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

### find(key)

```c++
map<int, string> mp;
mp[1] = "kim";
mp[2] = "hyeon";
auto it = mp.find("kim");
if(it != mp.end()) {
  cout << (*it).first << " : " << (*it).second; // 1 : kim
}
```

* ``find(key)``는 map에서 해당 key를 가진 요소를 찾아 그 이터레이터를 반환한다.
* 존재하지 않는 경우, 해당 map의 end() 이터레이터를 반환한다.

### clear()

* map에 있는 모든 요소를 제거한다.

<br>

## 주의할 점

```c++
map<int, int> mp;
cout << mp[1]; // 0
for(auto it : mp) cout << it.first << " : " << it.second; // 1 : 0
```

* 예시와 같이, key를 통한 참조만으로 map에 요소가 생성된다.
* 요소는 default 값으로 설정된다. (int형의 경우 0, string의 경우 빈 문자열)
* 따라서, 요소를 생성하지 않고 참조만 한다면 ``find(key)``를 이용하면 된다.
