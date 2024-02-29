## vector 초기화

```c++
// 기본
vector<int> v;

// 기본 초기화(원소 할당)
vector<int> v {1, 2, 3};

// 기본 초기화(크기, 원소 할당)
vector<int> v(3); // {0, 0, 0}
vector<int> v(3, 1); // {1, 1, 1}

// vector를 포함한 기존 컨테이너를 이용한 초기화
// 단, stack, queue와 같이 이터레이터를 지원하지 않는 컨테이너는 제외
vector<int> v1 {1, 2, 3, 4};
set<int> s {1, 2, 3};
vector<int> v2(v1.begin(), v1.begin() + 2); // 1 2
vector<int> v3(s.begin(), s.end()) // 1 2 3
```

<br>

## 자주 사용하는 메서드

### pop_back(), push_back(요소)

```c++
vector<int> v {1, 2, 3};
v.pop_back();
for(int n : v) cout << n << " "; // 1 2
v.push_back(5)
for(int n : v) cout << n << " "; // 1 2 5
```

* ``pop_back()``은 vector의 맨 뒤의 요소를 삭제한다.
* ``push_back(요소)``은 vector의 뒤에서부터 요소를 추가한다.

### erase()

```c++
vector<int> v {1, 2, 3};
erase(v.begin());
for(int n : v) cout << n << " "; // 2 3
erase(v.begin(), v.end());
for(int n : v) cout << n << " "; //
```

* ``erase()``는 파라미터 한 개가 주어졌을 때, 그 위치에 해당하는 요소 하나를 삭제한다.
* 파라미터 두 개가 주어졌을 때, [from, to)의 범위에 해당하는 요소를 전부 삭제한다.

### find(from, to, value)

```c++
vector<int> v {1, 2, 3};
auto it = find(v.begin(), v.end(), 2);
if(it != v.end()) cout << "YES"; // YES
```

* ``find(from, to, value)``는 [from, to)의 범위에서 value를 찾고 해당하는 위치를 반환한다.
* 주어진 범위에 value가 없을 시, 범위 마지막 값(to)를 반환한다.

### clear()

* vector의 모든 요소를 삭제한다.

### fill(from, to, value)

```c++
vector<int> v(3);
fill(v.begin(), v.end(), 1);
for(int n : v) cout << n << " "; // 1 1 1
```

* ``fill(from, to, value)``은 vector 내의 value로 값을 할당할 때 이용한다.

### max_element(start, end), min_element(start, end)

```c++
vector<int> v {1, 2, 3};
cout << *max_element(v.begin(), v.end()); // 3
cout << *min_element(v.begin(), v.end()); // 1
```

* ``max_element(start, end)``와 ``min_element(start, end)``는 각각 [start, end) 범위 중 가장 큰 값과 가장 작은 값의 이터레이터를 반환한다.
* vector 이외에 array와 list에도 사용 가능하다.
