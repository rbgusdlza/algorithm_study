## vector 초기화

```
// 기본
vector<int> v;

// 기본 초기화(원소 할당)
vector<int> v {1, 2, 3};

// 기본 초기화(크기, 원소 할당)
vector<int> v(3); // {0, 0, 0}
vector<int> v(3, 1); // {1, 1, 1}
```

<br>

## 자주 사용하는 메서드

### pop_back(), push_back(요소)

```
vector<int> v {1, 2, 3};
v.pop_back();
for(int n : v) cout << n << " "; // 1 2
v.push_back(5)
for(int n : v) cout << n << " "; // 1 2 5
```

* ``pop_back()``은 vector의 맨 뒤의 요소를 삭제한다.
* ``push_back(요소)``은 vector의 뒤에서부터 요소를 추가한다.

### erase()

```
vector<int> v {1, 2, 3};
erase(v.begin());
for(int n : v) cout << n << " "; // 2 3
erase(v.begin(), v.end());
for(int n : v) cout << n << " "; //
```

* ``erase()``는 파라미터 한 개가 주어졌을 때, 그 위치에 해당하는 요소 하나를 삭제한다.
* 파라미터 두 개가 주어졌을 때, [from, to)의 범위에 해당하는 요소를 전부 삭제한다.

### find(from, to, value)

```
vector<int> v {1, 2, 3};
auto it = find(v.begin(), v.end(), 2);
if(it != v.end()) cout << "YES"; // YES
```

* ``find(from, to, value)``는 [from, to)의 범위에서 value를 찾고 해당하는 위치를 반환한다.
* 주어진 범위에 value가 없을 시, 범위 마지막 값(to)를 반환한다.

### clear()

* vector의 모든 요소를 삭제한다.

### fill(from, to, value)

```
vector<int> v(3);
fill(v.begin(), v.end(), 1);
for(int n : v) cout << n << " "; // 1 1 1
```

* ``fill(from, to, value)``은 vector 내의 value로 값을 할당할 때 이용한다.
