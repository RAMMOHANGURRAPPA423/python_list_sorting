a=[1,2,3]
id(a)
1851011034816
a[1]=10
print(a)
[1, 10, 3]

a[2]=20
print(a)
[1, 10, 20]

print(a)
[1, 10, 20]

a=[1,2,3]
id(a)
1851043730240

a=[1,2,3]
a=a+[5,6]
print(a)
[1, 2, 3, 5, 6]

a=[1,"freedom",20,8]
print(a)
[1, 'freedom', 20, 8]

print(len([10,20,30]))
3

a=[10,20,30]
a[0]
10
10
10

a=[10,20,[1,2,3],30]
print(a)
[10, 20, [1, 2, 3], 30]
a[3]
30
a[2]
[1, 2, 3]
a[0]
10
a[2][1]
2

s=['t','h','u','n']
print("s[0]:",s[0])
s[0]: t
print("s[3]:",s[3])
s[3]: n

s=[10,20,30,[4,5],60,70,80,90]
s[1:]
[20, 30, [4, 5], 60, 70, 80, 90]
s[:1]
[10]
s[1::2]
[20, [4, 5], 70, 90]
s[:2]
[10, 20]
s[:-2]
[10, 20, 30, [4, 5], 60, 70]
s[::-2]
[90, 70, [4, 5], 20]
s[1:2:3]
[20]
s[:]
[10, 20, 30, [4, 5], 60, 70, 80, 90]

#extend
a=[1,2,3]
b=[4,5,6]
a.extend(b)
print{a)
SyntaxError: closing parenthesis ')' does not match opening parenthesis '{'
#extend
a=[1,2,3]
b=[4,5,6]
a.extend(b)
print(a)
SyntaxError: multiple statements found while compiling a single statement
a=[1,2,3]
a,insert(5,78)
Traceback (most recent call last):
  File "<pyshell#55>", line 1, in <module>
    a,insert(5,78)
NameError: name 'insert' is not defined
a.insert(5,78)
print(a)
[1, 2, 3, 78]

a=[1,2,3]
a.remove(3)
print(a)
[1, 2]

a=[1,2,3]
a.pop()
3
#sort
a=[2,7,4,8]
a.sort()
print(a)
[2, 4, 7, 8]

#copy
a=[1,2,3]
b=a;
c=a.copy()
print(c)
[1, 2, 3]

#list comprehension
original_prices=[1.25,-9.45,10.22,3.78,-5.92,1.16]
def get_price(price}
SyntaxError: closing parenthesis '}' does not match opening parenthesis '('
def get_price(price):
    return price if price>0 else 0
prices=[get_price(i) for i in original_prices]
SyntaxError: invalid syntax
prices=[get_price(i)for i in original_prices]
Traceback (most recent call last):
  File "<pyshell#82>", line 1, in <module>
    prices=[get_price(i)for i in original_prices]
  File "<pyshell#82>", line 1, in <listcomp>
    prices=[get_price(i)for i in original_prices]
NameError: name 'get_price' is not defined
#tuple
a=(1,2,3)
a=a+(4,5)
print(a)
(1, 2, 3, 4, 5)

#variable length
a=(1,2,3)
print(a)
(1, 2, 3)
#zero based indexing
a=[1,2,3,4]
a[0]
1
a[3]
4
