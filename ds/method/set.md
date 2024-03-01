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
