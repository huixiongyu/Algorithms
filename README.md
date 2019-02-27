# Algorithms
Learning algorithms,most about data structure,OJ practice,and may add other types in the further.

## 常见问题

1. 输入指定个数的字符串，
2. 数字转字符串： std::string::to_string
3. npos的用法，头文件是#include\<cctype> ,容器中表示不存在的位置，比如s.find('a') != string::npos表示s中不存在a字母。
4. `getline` 从输入流读取字符并将它们放进 string  ，比如getline(std::cin, s);
5. 最大公约数：辗转相除法

```
int gcd(int x,int y){
    int z=y;
    while(x%y != 0)
    {
        z = x%y;
        x = y;
        y = z;
    }
    return z;
}
```

举例来说：30和24，30%24=6, z=6,x=24,y=6--->  24%6=0  得出最大公约数是6

以上简化可变成：

```
int gcd(int x,int y){
    return y==0 ? x : gcd(y, x % y);
}
```

6. 最小公倍数

```
int lcm(int m,int n){
    int minMultiple = (m>n) ? m : n;
    while(1){
        if(minMultiple % m == 0 && minMultiple % n ==0 ){
            return minMultiple;
        }
        ++minMultiple;
    }
}
```

7. 四舍五入：
   1. floor()  : 不大于自变量的最大整数
   2. ceil()   :不小于自变量的最大整数
   3. round()  : 四舍五入到最邻近的整数
8. std::swap()用来交换两个数据
9. 逻辑正确，但是运行超时，可能时数组太长，使用循环嵌套得不合适，还有使用了std::cin和std::cout.有时候改成scanf()和printf()可能就通过了
10. 末尾没有空格可以尝试先输出空格再输出数据。输出空格得条件是迭代器不在初始位置。
11. 数组下标只能是整型值，但是如果是字符常量作为下标，比如a['A'] ，‘A’对应得是ascaii码表得下标。
12. 几个数据关联得时候，不一定要用第一个数据作为标志位，找到某个位置可以关联到其他数据的才是标志位。
13. while((c = cin.get() !=EOF)) cout<<c;   EOF一般表示-1，但是ASCII代码为0~255，不可能存在-1.这个表达式意思是获取文件结束符之前的字符。



## 需要了解的库

### \<cctype>

* isalnum  检查字符是否为字母或数字
* isalpha    检查字符是否为字母
* islower   检查字符是否为小写
* isupper    检查字符是否为大写字符
* isdigit    检查字符是否为数字
* isxdigit   检查字符是否为十六进制字符
* iscntrl   检查字符是否为控制字符
* isgraph  检查字符是否为图形字符
* isspace    检查字符是否为空白字符
* isblank    检查字符是否为空格符
* isprint   检查字符是否为打印字符
* ispunct   检查字符是否为标点符
* tolower    转换字符为小写
* toupper   转换字符为大写   



### \<algorithm>

1. count()统计某个值的对象的个数，比如vector中统计数字19的个数count(v.begin(), v.end(), 19)





### \<string>

1. 字符串截取， string::s.substr(position, lenght);
2. append()
   1. str.append(5, 'a') 末尾添加5个a
   2. str.append(str2)  把str2加到str上
   3. str.append(str2, 5,4) 把str2，从第6位开始的四位加到str上





## 问题

* 1033有一个测试点没有通过，估计是大写问题
* 1041段错误，但是按逻辑来说应当是没问题的！
* 1044,逻辑正确，最后部分正确
* 





























