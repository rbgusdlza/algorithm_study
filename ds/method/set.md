## set 초기화

```c++
// 기본 초기화
set<int> s;
set<int> s {1, 2, 3}; // 1 2 3

// 이터레이터, 포인터 활용
int arr[] = {1, 2, 3};
vector<int> v {1, 2, 2};
set<int> s(arr, arr + 2); // 1 2
set<int> s(v.begin(), v.end()) // 1 2

// 기존 set 활용
set<int> s1 {1, 2, 3};
set<int> s2(s1) // 1 2 3
set<int> s3 = s1 // 1 2 3
```

## 자주 사용하는 메서드

### insert()

```c++
set<int> s;
s.insert(3);
cout << *s.begin() // 3
```

* ``insert()``는 set에 파라미터를 삽입한다.

### size(), erase()

```c++
set<int> s;
s.insert(1);
s.insert(2);
s.insert(3);
cout << s.size(); // 3
s.erase(3)
for(int n : s) cout << n << " "; // 1 2 
```

* ``size()``는 set에 있는 요소의 개수를 반환한다.
* ``erase()``는 해당 파라미터와 값은 값을 갖는 요소를 set에서 제거한다.

### find()

```c++
set<int> s;
s.insert(1);
s.insert(2);
auto it = s.find(2);
if(it != s.end()) cout << "Yes"; // Yes
```

* ``find()``는 set에서 해당 파라미터 값을 갖는 요소를 찾아 이터레이터를 반환한다.
* 존재하지 않으면, 해당 set의 end() 이터레이터를 반환한다.

### clear()

* set에 있는 요소를 전부 제거한다.
