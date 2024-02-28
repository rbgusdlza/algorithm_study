## 자주 사용하는 메서드

### +=

```c++
string a, b;
a = "bob"; b = "joa";
a += b;
cout << a; // bobjoa
```

* 문자열과 문자열을 더할 때 이용한다.
* 해당 문자열을 앞에 더하고 싶을 때는 a = b + a 로 표현한다.

### size()

```c++
string a = "bob";
cout << a.size(); // 3
```

* 문자열의 크기를 반환한다.
* O(1)의 시간복잡도를 갖는다. (string class 내부 변수로 저장되어 있기 때문)

### insert(위치, 문자열)

```c++
string a, b;
a = "joa"; b = "bob";
a.insert(0, b);
cout << a; // bobjoa
```

* 특정 위치에 주어진 문자열을 삽입한다.
* O(n)의 시간복잡도를 갖는다. (기존 문자열 처음 또는 중간에 삽입될 경우,  해당 위치 이후의 모든 문자들을 이동시켜야 하기 때문)

### erase(위치, 크기)

```c++
string a = "bobjoa";
a.erase(0, 3);
cout << a; // joa
```

* 특정 위치에서 **크기**만큼 문자열을 지운다.
* O(n)의 시간복잡도를 갖는다. (처음 또는 중간에서 삭제할 경우,  해당 위치 이후의 모든 문자들을 이동시켜야 하기 때문)

### find(문자열)

```c++
string a = "bobjoa";
auto it = a.find("joa");
if (it != string::npos) cout << "Yes"; // Yes
```

* 특정 문자열을 찾아 위치를 반환한다.
* 해당 문자열을 못 찾을 경우, string::npos(-1)를 반환한다.
* O(n)의 시간복잡도를 갖는다. (문자열 처음부터 끝까지 확인해야 하기 때문)

### substr(위치, 크기)

```c++
string a = "bobjoa";
string b = a.substr(0, 3);
cout << b; // bob
```

* 특정 위치에서 **크기**만큼 문자열을 추출한다.
* 특정 위치에서 주어진 문자열의 끝까지 추출하고 싶을 때, 위치만 파라미터로 넣어주면 된다.
* O(n)의 시간복잡도를 갖는다. (문자열 처음부터 끝까지 확인해야 하기 때문)

### replace(교체하고 싶은 문자열의 위치, 교체하고 싶은 문자열의 길이, 새로운 문자열)

```c++
string str = "bobjoa";
string find_str = "bob";
string replace_str = "kim";
str.replace(str.find(find_str), find_str.length(), replace_str);
cout << str; // kimjoa
```

* 문자열 내의 특정 부분 문자열을 다른 문자열로 교체한다.
