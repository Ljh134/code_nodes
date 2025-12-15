print("sb") 
print("(^_^)")
print("bug")
print(111)
#bug
print(123)
#打两个字
"""
随便打几个字
""" 
print(":D ")
print(":D ")
print(1,3,5)
print("a","b","c",sep=".")
print("我",end="tm")
print("真nb")
A = 0
print(A)
_dsb1 = 643
print(_dsb1)
中文1 = 666
print(中文1)
num = 5.6
print(type(num))
print(type(True))
print(True+False)
print(type(2+3j))
z1 = 1+1j
z2 = 3 + 4j
print(z1*z2)
name2="""
第一行
第二行
哈哈v
"""
print(name2)#占位符
print("占位符：%s" % name2)   # %s代str %d代整数 %f代小数
word1 ="hahahahaha"
num2 = 114
num3 = 514
print("牛魔%s%d%s" % (word1,num2,num3))
p2 = 114514
p1 = 1.14514
print("%08d" % p2)
print("%f" % p1)
print("%.3f" % p1)      #  %.xf取x位小数
print("25%f%%" % p1)
print("25%")
print(num2,"%")
og1 = "大展宏图"
哦给 = "来财"
print(f"你说{og1}要{哦给}")
count1 = 1+1j
print(count1,count1**2025)
print(5.3//2)
print(4.2%4)
a = 1#赋值运算符
a +=1
print(a)
b = 4
b -= 2
print(b)
n=10
n *= 10
n /=5
print(n)
'''nn1 = input("输入")
print(nn1)
'''
print(1)
print("内容一","内容二" ,sep="   ")
print("内容一\t内容二")#制表符
print("换行\n换一行")
print("内容一","内容二" ,sep="   ",end="直接接")
print("内容一","内容二" ,sep="   ")
print("我其实还有好好好\r将此移到开头")
print("\\s\\tar")#\\就是\
#r后字符串不转义
print(r"s\tar")
#if结构：
'''
if 条件:
    执行代码

'''
a1 = 17
if a1 >18:
    print("你过关")

'''比较运算符：== ！= > < >= <=
逻辑运算符 ：and or not
'''
print(a==b)
print (a!=b)
 # if else格式:
"""
if 条件：
    执行1
else：      #else后不加任何东西 
    执行2
"""
#三目运算结构：
# 执行1 if 条件1 else 执行2
print("a大于或等于b") if a>=b else print("a小于b")
#if-elif:多条件(把后面的if换成elif即可)
#if elif else 同级 

'''
while循环结构：

while 条件 :
    执行
    改变变量
'''   #  while True :   （条件只写True）  为死循环 

'''
for 循环格式：     （多用于遍历取值 ）
for 临时变量 in 可迭代对象：  (可迭代对象就是遍历取值的整体)
    执行
'''
str = "come on"
for i in str:
    print(i)

# range 函数：记录循环次数，相当一个计数器
# 有 range(start,stop,step)
for i in range (1,6):  #从1开始，  6结束，包前不包后 
    print(i)
for i in range(5):  #从0开始，循环5次 
    print(i)
for i in range(5):  #循环5次 
    print("循环")
"""
break  continue  (只能在循环内 )
break指结束整个循环
continue指结束此循环，继续下一循环   continue前一定要修改计数器，否则会成死循环
"""
s0 = "你好"
s1 = "hello"
s2 = s1.encode()  #编码 括号中加编码类型（utf-8）
s3 = s2.decode()   #解码
print(s1,s2,s3,type(s1),type(s2),type(s3))
s4 = s0.encode("utf-8")
s5 = s4.decode("utf-8")
print(s4)
print(s5)
print("e" in s1)
s6 = "abcdefghijklmnopqrstuvwxyz"
print(s6[10:17])
"""字符串常见操作：
1:  “+”字符串拼接  eg: "10"+"210"=10210
2:  "*"重复输出
3: 成员运算符：检查字符串中有没有某个子字符串：
     in : 包含为True，不含为Fause
     not in:…………
4:  下标： python中下标从0开始（通过下标可以快速找到对应数据）
    格式：[x] (从左往右数从0开始)(从右往左数从-1开始)  eg: s1[0] = h , s1[-1] = o
5:  切片：  格式:  对象[开始位置：结束位置：步长]  （包前不包后）
                       (若开始位置或结束位置不写则视为截到头)
                       （步长为选取间隔，不写默认为1，步长为负时反着切）
                    
"""
"""字符串常见操作2
1: 查找： find（查找子字符串，有则返回下标，无则返回-1）
       格式：  对象.find（子字符串，开始位置下标，结束位置下标）
       开始位置下标，、结束位置下标可省 包前不包后
2: 查找2:  index  ： 与find差不多，找不到会报错
3: 查找3： count  : 返回次数
4:  replace ：替换
          格式 ： 对象.replace(老内容，新内容，修改次数)
          替换次数省略则默认全部替换
5:  split : 分割 以某个分隔符（啥都行）分割 输出列表，如果没有分割内容，则不分割
          格式：  对象.split("分隔符"，次数)
          
6:判断：  stattswith() :是否以某个子字符串开头 是就True,不是就False
 格式：  对象.find（子字符串，开始位置下标，结束位置下标）
7:判断2: endswith
8:判断3:是否大写/小写 (所有字母)  ： isupper（）/islower（）
9: 首字母大写： capitalize :
        格式： 对象.capitalize（）
10: 小写： lower（）：大写字母全部小写
11: 大写：  upper（）：小写字母全部大写
"""
s7 = "abcdefg"
print(s6.find("hi",2,9))
print(s7.startswith("a"))
print(s7.isupper())
print(s6.split("m"))
print(s6.upper())
    #列表       #列表为可迭代对象，可以用for遍历取值
"""
格式：    列表名 = [元素1，元素2，元素3，……]    元素类型可以互不相同
"""
li1 = [1,2,3,4]
print(type(li1))
print(li1[2])     #列表中元素有下标，可以根据下标查找元素
print(li1[0:3])    #列表的切割
for ai in li1:
    print(ai)
'''列表的常见操作：
1，添加元素：
append() extend() insert()
'''
li2 = ['one','two','three']
li2.append('four')  # append()将元素整体插入
print(li2)
li2.extend('five')  #  extend（）将元素分开插入、且只用于可迭代对象
print(li2)
li2.insert(5,'six')  #  insert（）将元素插入到指定标号的位置上，原该下标的元素后移
print(li2)
''' 2.修改元素：直接通过下标修改
'''
li2[0] = 1314
print(li2)
'''3.查找元素：
in
not in   与字符串相同
index
count  同上

4.删除元素：
del 列表名 [对象下标]  (没有下标时，删除整个列表)

列表名.pop（对象下标）  删除指定位置数据（python3默认删除最后一个）

列表名.remove(对象)    删除指定对象 （默认删除第一个

5.排序

（1）  列表名.sort()    按照特定顺序排序，默认从小到大
'''
li3 = [1,98,67,4,9,35,2]
li3.sort()
print(li3)
'''
（2）  列表名.reverse()  将列表倒置
'''
li3.reverse()
print(li3)
li4 = []

'''
6.列表推倒式： 
格式一：   [表达式 for 对象 in 可迭代对象]
等效于：
for 对象 in 可迭代对象：
    表达式

eg:  原代码：
for i in range(1,6):
    li4.append(i)
print(li)
      可写为：'''
[li4.append(i) for i in range(1,6)]
print(li4)
'''
格式二： [表达式 for 对象 in 可迭代对象 if 条件]
     等效于：
for 对象 in 可迭代对象：
    if 条件：
        表达式
        '''
li5 = []
[li5.append(i) for i in range(1,11) if i % 2 == 1]
print(li5)

'''
7.列表嵌套
列表的元素可以是列表
'''
lili = [1,2,3,4,5,[6,7,8,9,0]]
print(lili[5])
print(lili[5][3])
'''
元组:
格式：  元组名 = （元素1，元素2，元素3，……）
         若只有一个元素，末尾也要加，
         空元组只打（）
         '''
tua = (1,2,3,4)
print(type(tua))
#元组与列表区别：   元组只支持查询，不能修改  其余操作和列表，字符串相同
'''元组的应用
1、  函数的参数与返回值
2、  格式化输出后的括号
3、数据不可以修改的时候
'''
info1 = ("yes","no")
print("点头%s摇头%s" % info1)
'''
字典：  格式： 字典名 = {键名1:值名1，键名2:值名2……}
'''
dic1 = {'点头':'yes','摇头':'no','不良诱惑':'gogogo'} #字典中键具有唯一性，但值可以重复
print(type(dic1))                       #键名重复不会报错，但前面的值会被后面的覆盖
'''
字典常见操作：
查看元素：
 变量名[键名]        没有会报错
 变量名.get(键名,不存在时返回的值)    默认没有会返回None
 '''
#字典没有下标
print(dic1["点头"])
print(dic1.get('111',"无"))
'''修改/添加：  （键名存在就修改，不存在则添加）
字典名[键名] = 修改值

删除
del.字典名       删除整个字典
del.字典名[键名] 删除特定键值对
字典名.clear()   清空字典
字典名.pop(键名)   删除特定键值对
'''
'''字典常见操作2:
len(名)   求长度
字典名.keys()    返回字典所有的键名    （可用于for循环）
字典名.values()   返回所有值        （同上）
字典名.items()    返回键值对   （以元组的形式）
'''
print(dic1.keys())
for i in dic1.keys():
    print(i)
print(dic1.items())
'''集合：
格式： 集合名 = {元素1，元素2，……}
     空集合： s0 = set()

  特点： 1、无序性，2、互异性 3、元素可以是不同数据类型  （可用于列表，字典，元组查重）
'''
#因为无序性 集合值不能修改
#集合输入时有重复的值，输出时自动去重
s1 = {1,3,4,6,2,4,1,3,7,9,5,7}
print(s1)
'''
集合的常见操作
添加

原集合.add（对象）     一次只能添加一个元素（整体添加）

原集合.update(可迭代对象)     只能添加可迭代对象（拆分添加）
'''
s1.update("567")
print(s1)
'''
删除元素

原集合.remove(删除对象)       有就删，没有就报错

原集合.pop()      删除第一个（数字就是最小那个，其他类型随机删）

原集合.discard(删除对象)   有就删，没有就无操作
'''
s1.discard('5')
print (s1)
'''
交集，并集：

交集：  &
并集：  ｜ 

'''
s2 = {1,2,3,4,5}
s3 = {3,4,5,6,7}
print (s2&s3)
print (s2|s3)
'''
类型转换：
int()    整数   小数转整数直接去尾  字符串只能转由纯数字及符号组合的字符串
float（） 浮点数
str()    字符串 可以转任何数据，包括列表等   小数转字符串，会删去末位0
eval()   执行字符串表达式，返回运算的值  整型与字符串不能相加
eval()可以实现list dict tuple str 之间的转换
list()   将可迭代对象转换成列表
'''
print(eval("10+10"))
print(type(eval("10+10")))
#str -> list:
st1 = "[[1,2],[3,4],[5,6]]"
li1 = eval(st1)
print (li1,type(li1))
#str -> dict 
st2 =" {'点头':'yes','摇头':'no','不良诱惑':'gogogo'}"
dic2 = eval (st2)
print(dic2,type(dic2))
# tuple -> list
print(list ((1,2,3,4,5)))
# dict -> list  只转键名
print(list(dic2))
#set -> list   会无序
print(list (s3))

'''深浅拷贝'''
#赋值
a = [1,2,3,4,5]
b = a
a.append(6)
print(a,b )
#列表,集合赋值，赋值后变化任一对象，另一赋值对象同时改变 等于完全共享资源


#浅拷贝  会创建新的对象，拷贝第一层的数据，嵌套层会指向原来的内存地址
'''步骤'''
import copy #导入copy模块
li0 = [1,2,3,[4,5,6]] #定义一个嵌套列表
li9 = copy.copy(li0) #浅拷贝
li0.append(8)
print('li0:',li0)
print('li9:',li9)
print('li0id:',id(li0))  #查看存储地址
print('li9id:',id(li9))
li0[3].append('sb')
print('li0:',li0)
print('li9:',li9)

#深拷贝   外层对象与元素都拷贝

import copy #导入copy模块
li8 = copy.deepcopy(li0)  #深拷贝
print(li8)
li0.append(114514)
print(li0)
print(li8)
'''
可变对象 ：存储空间保存的数据可以被改变,内存地址不变的
list  dict set

不可变类型：  变量对应的值不可修改，修改会生成一个新的值，重新分配内存空间
int str tua
'''
'''
函数： 将独立的代码块，组织成一个具有特殊功能的代码集需要时调用即可
格式： 1、定义函数： def 函数名（）：
                      函数体
      2、调用函数：  函数名（）'''
def text1():
    print("这是测试函数")
text1()  #调用几次，函数就会运行几次，每次调用，函数从头运行
'''
返回值： 函数执行结束后，给调用者的结果
1、return会给执行者返回值  函数中遇到return，代表函数结束，return下面代码不会执行
返回值：
1、一个没有：返回None
2、一个：返回值
3、两个及以上：以元组的形式返回
return与print的区别：
1、return表示函数结束，print不会结束
2、return时返回计算值，print是打印结果
 
'''
def buy():
    return "买买买",20
buy()
print(buy())  #return要print才会输出结果 return返回多个值，以元组形式返回
'''
参数：  形参：定义函数时的变量  实参：调用函数时给参数赋的值
格式：
  定义：  def 函数名（形参a,形参b）：
             函数体
    如：a=1,b=2
  调用： 函数名（实参1，实参2）
  '''
def add(a,b):
    return a + b
print(add(3,5))
'''
参数：
1、必备参数（位置参数）：传递，定义参数的顺序及个数必须一致
格式： def func(a,b)   写几个就要穿几个
2、默认参数：为参数提供默认值，调用函数时可以不传
注意：所有位置参数必须出现在默认参数前，包括函数定义和调用
格式： def func(a=默认值a,b=默认值b,……)
设置默认值，没有传值，就以默认值运行，传值，则按照传值运行
 
'''
def add2(b,a=8):  #没默认值的参数必须在有默认值的参数前面
    print(a+b)
add2(6,10) 
'''
3、可变参数：传入值的数量可以改变，可以传多个，也可以不传
格式： def func(*args)  以元组形式接收   参数名是args，*有特殊含义
'''
def text2(*args):
    print(args)
text2(1,2,3,4)
'''
4、关键字参数： 以字典形式接收 以字典形式传值
格式：  def func(**kwargs):
作用：扩展函数功能
'''
def text3(**kwargs):
    print(kwargs,type (kwargs))
text3(点头='yes',摇头='no')

'''
函数嵌套
嵌套调用： 在函数里面调用另一个函数
嵌套定义：在函数里定义另一个函数
'''
def study():
    print("速成")
def course():
    study()
    print("python")
course()

def study1():
    print("好好学习")
    def course1():    #在内层函数调用外层函数，会死循环
        print("day day up")
    course1()   #调用与定义同级
study1()
'''
作用域：变量生效的范围，分为全局变量与局部变量
全局变量：函数外部定义的变量，在整个文件中生效
局部变量：函数内部定义的变量，从定义位置开始，到函数末位结束
'''
a = 100
print(a)
def aaa():
    a = 120   #局部变量
    print('a=',a)
aaa()
print("a=",a)#a没有被覆盖
#函数内部如果要使用变量，会先从内部找，有的话用内部的，没有才用外部的
'''
函数内部改变全局变量用global
格式： global 变量名1,变量名2…… ： 将变量声明为全局变量
nonlocal:声明外层函数的局部变量，且不为全局变量
  只能在嵌套函数中使用，在外层函数先声明， 内部函数进行nonlocal声明
'''
a = 100
print(a)
def aaa():
    global a
    a = 120   #局部变量
    print('a=',a)
aaa()
print("a=",a)#a被覆盖

def outer():
    a = 5
    def inner():
        nonlocal a  
        a=33
        print('inner a=',a)
        def inner2():
            nonlocal a   #只影响上一级 
            a=44
            print('inner2 a=',a)
        inner2()
    inner()
    print('outer a=',a)
outer()
'''
匿名函数：   只能使用简单逻辑，简化代码
形式： 定义：   函数名 = lambda 形参 ：返回值（表达式）
        调用： 结果 = 函数名（实参）'''
'''原函数：
def addd(a,b):
    a+b
    return
print(addd(1,3))
'''
addd = lambda a,b : (a+b,a-b)  #不用return来返回，表达式本身就是返回值，
                                #返回多个值要打括号当作元组
print(addd(1,3))
'''  lambda参数形式：
1、无参'''
funa = lambda :'hahahaha'
print(funa())
'''必备参数： 略
默认参数： 同上
可变参数：同上
'''
'''
lambbda结合if判断：
'''
a = 3
b = 5
print('a比b小') if a<b else print('a大于等于b')  #三目运算
comp = lambda a,b :print('a比b小') if a<b else print('a大于等于b')#三目运算
comp(8,3)
'''
内置函数
查看所有内置函数
import builtins
print(dir(bulitins))
(大写开头的一般是内置常量名，小写开头的是内置函数名)
abs():返回绝对值
sum():求和  需要放可迭代对象（字符串也不行）
min():求最小值               以绝对值比较：min(a,b,……,key=abs)
max():求最大值  （可以放整型）  同上
zip():将可迭代对象作为参数，将对象中的元素打包成一个元组
'''
li1 =[1,2,3,4,5]
li2 =['a','b','c','d']
print(zip(li1,li2))
for i in zip(li1,li2):   #第一种提取方式
    print(i)  #两两配对输出，如果元素个数不同，则按照最短的输出
#第二种提取方式：转换成列表打印：
print(list(zip(li1,li2)))  #zip元素必须是可迭代对象
'''
map(): 可以对可迭代对象中的每一个元素进行映射，分别去执行
格式： map(函数名，可迭代对象)
'''
def func(x):
    return x*5
mp = map(func,li1)
print(mp)
'''for i in mp:     #取出结果
    print(i)'''
print(list(mp))  #  取出结果
'''
reduce(): 先把对象中的两个值取出计算，然后保存着，再把这个计算值与第三个元素计算
需要先导包
格式： from functools import reduce
reduce(函数，可迭代对象)   函数必须是有两个参数的
'''
from functools import reduce
res = reduce(add,li1)
print(res)
'''拆包：对于函数中的多个返回数据，去掉元组，列表，字典，直接获取里面数据
'''
tua = (1,2,3,4)
print(tua)
#拆包方法一   ：一般用于获取元组值
a,b,c,d =tua
print('a=',a,'b=',b,'c=',c,'d=',d)  #要求元组内元素个数与变量个数相同
#方法二：    一般用于函数调用
a,c,*b = tua
print(a,b,c)     #先把单个的取完，盛夏的打包给带*的 
def chaibao(a,b,*args):
    print(a,b)
    print(args)
chaibao(*tua)
 
'''抛出异常：
异常对象：  Exception(异常信息)
抛出对象：raise 异常对象
执行raise后代码不继续运行
捕获异常：检测到异常时代码继续运行
例：'''
try:
    raise Exception ("有bug")
except Exception as e:
    print(e)
print('继续运行的代码')
'''模块  ：一个py文件就是一个模块，导入一个模块本质就是执行一个文件
分类：
1、内置模块
random 、 time 、 os 、logging  直接导入即可使用

2、第三方模块（第三方库）
下载：cmd窗口输入 pip install 模块名
3、自定义模块：自己在项目中定义的（命名不要与内置模块起冲突）
'''
'''
导入：
1、import 模块名
语法：
导入模块： import 模块名1，模块名2，……
调用功能：  模块名.功能名
'''
import pytest
print(pytest.pp1)
'''
2、 from 模块名 import 功能1，功能2，
'''
from pytest import funa
funa()   #调用时不需要再添加模块名,导入函数时不加（）
'''
3、 from 模块名 import *     把模块中的所有内容导入
'''
from pytest import *
print(pp1)
#如果调用了同名的对象，会只用后面导入的
'''
as 给模块起别名
语法：import 模块名 as 别名
'''
import pytest as ppt
ppt.funa()
print(ppt.pp1)
'''
as给功能起别名
语法： from 模块名 import 功能名 as别名
'''
from pytest import funa as f  #导入多个功能用，隔开
f()
'''
内置全局变量；__name__
语法：  if __name__ == "__main__"
或：  __name__ == 模块名
作用：控制py文件在不同情况执行不同逻辑
1、文件在当前程序执行：__name__=="__main__" (文件自己执行自己的时候)
#被当作模块导入时下面的代码不会显示和执行 
2、文件被当作模块被其他文件导入：  __name__ ==模块名
'''
import pytest2
pytest2.test()
'''
包：就是项目结构中的文件夹/目录
与普通文件夹的区别：  含有__init__.py文件
作用： 将有联系的模块放到同一个文件夹下，避免模块冲突问题让结构更清晰
      打开包时先运行__init__.py里面的代码（不建议在里面写大量代码）
'''
'''导包方式1:
import 包名
模块名.功能名   -> 运行模块  运行模块前先运行__init__文件
导包方式2:
from 包名 import 模块名
模块名.功能名   -> 运行模块  运行模块前先运行__init__文件
'''
import package01
from package01 import pytest001
pytest001.ppt2()

