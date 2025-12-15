#include <iostream>
using namespace std ;
/* int main()
// {
//     using namespace std;      //编译指令
//     cout << "Come up and C++ me sone time ." ;      //cout 输出
//     cout << endl;
//     cout << "you won't forget it !"  << endl ;
//     cin.get();
//     return 0 ;
 } */
//如果要用C语言的函数，在头include <stdio.h>
//使用cin和cout进行输入和输出的程序必须包含文件iostream

/*如果程序要使用C++输入或输出工具，请提供这样两行代码：
#include <iostream>  
using namespace std
*/


/*头文件：  C语言的头文件一般以.h为扩展名，C++也可以用
老式C++也一样
新式C++取消后缀，且在C语言的头文件名前加c    eg: iostream.h  ->. iostream
math.h  ->.  cmath         但是使用要加上编译指令  using namespace std

编译指令：using namespace std
指使用std中定义的名称，如果不用，则其他函数前要加入前缀： std:: 
 eg :  cout  ->.  std::cout
 也可以用 using std::cout   (使cout可用)

<< 标识数据流向 ， cout << a  指把a发送给cout ，cout 只是一个预定义的对象
eg:  cout << "Come up and C++ me sone time ." ;    它将字符串“Come up and C++ me some time.”插入到输出流中
     cin >> a 输入a 的值。           cin 可以自动识别输入变量的类型并自动转换输入数据的类型
eg:*/

// int main()
// {
//     using namespace std;
//     int a ;
//     cout << "输入a" << endl ;
//     cin >> a ; 
//     printf("a = %d\n", a);
//     return 0;

// }
/*
endl : 重启一行     cout << endl     : 换行。（\n也可以）
*/

// int main()
// {
//     using namespace std;
//     int count = 25;
//     cout << "I have ";
//     cout << count ;
//     cout << " carrot" << endl;
//     count -= 1;
//     cout << "Now i have " << count << " carrot." << endl ;
//     return 0 ;
// }

/*变量的定义与C一致，运算大致一致
赋值： C++可以使用连等号。  eg:     a = b = c = 8
*/


/*函数：
与C一致
rand()生成随机数
*/

/*
数据类型：
1、整型： char short iht long    long long      (与C大致相同)
长度无限制，short 至少16位，int比short长，long至少32位 以此类推
可以用unsigned使数据表示范围扩大2倍（只能表示正数）
正常写：10进制  0开头：8进制    0x开头：16进制（a~f表示11～15）
cout 输出：dec、hex和oct，分别用于指示cout以十进制、十六进制和八进制格式显示整数
eg: 
cout << 10 ;   //10进制
cout << oct ;   //转换为8进制
cout << 8 ;     //8进制输出
如cout<<hex;等代码不会在屏幕上显示任何内容，而只是修改cout显示整数的方式
因此，控制符hex实际上是一条消息，告诉cout采取何种行为

后缀： 整数后面加后缀表示其数据类型，否则默认按照int储存
 l  : long      u : unsigned    ll : long long 
 eg:  ul : unsigned long
 
 
char : 字符（包括整数和字符）
C++里面表示字符用 ' '  ,字符串用 " " 
eg: 
char i ; 
cin >> i ;    (input M)
cout << i ;    (output M)
cin 和cout 可以自动转换输入数据的类型（以字符形式输入、输出）
与C一样， C++可以将字符与int 转换
eg :  char M =  'M' ; 
      int i = M ;
      (i == 77)

* char 即使输入数字也会自动转换成字符 
可以用cout.put(输出字符)来输出字符

转义序列：
\n  : 换行
\t  ： 水平制表
\v  ： 竖直制表
\b  ： 退格
\r  ： 回车
\a  ： 振铃
\   ： 反斜杠 \
\?  ： ？
\'  : '
\"" : ""

const :常量限定符   eg: const int Month = 12
*/

/*
浮点数：
1、科学计数法： En 指10^n   eg: 1.2E4  == 12000
float : 至少32位        后缀f
double ： 至少64位且比float多       
long double         后缀l


强行格式转换：
格式：  目标格式 （变量名）     或      （格式）变量名
数值转数值可以用 ： static_cast<目标格式> （转换内容）
eg :  int x   
long a = long (x) ;

auto关键字：  声明变量时可以用auto，此时计算机自动把输入数据保存为应该的类型
*/

/*数组 array
声明： 与C一样


字符串：    以数组形式表示
1、C风格字符串： 要以空字符结尾  （\0） 如果用""扩起则省略 \0
eg : char str1[3] = "hi". (计算长度时要算上\0)
or  : char str1[] = "hi"
   :  char str1[] = {'h','i','\0'}
strlen() : 返回字符串长度（要包含头文件 cstring ）
strcpy( )将字符串从一个位置复制到另一个位置 ： * 如果复制的内容长度大于数组长度，则会覆盖其他内容（用strncpy）
strcpy(目标地址，要复制的字符串的地址)
strncpy()与strcpy类似,可以限制最大复制字符数  ：* 如果到最大字符数前已经把内存用完，则不会添加\0,需要手动添加
strncpy(目标地址，要复制的字符串的地址，最大复制字符数)

但
strlen( )函数返回的是存储在数组中的字符串的长度，而不是数组本身的长度
另外，strlen( )只计算可见的字符，而不把空字符计算在内

输入字符串时：cin使用空白空格、制表符和换行符）来确定字符串的结束位置
这意味着cin在获取字符数组输入时只读取一个单词
读取该单词后，cin将该字符串放到数组中，并自动在结尾添加空字符
（无法读取中间有空格的词）

面向行的输入：
1、 cin.getline(目标变量名，长度)        （长度要算上\0)
以换行符结束，不读取换行符，把它换成\0
2、 cin.get(目标变量名，长度)
以换行符结束，不读取换行符，但不能跳过      （不能连续调用两个cin.get()）
解决办法： 使用空cin.get()      ->  可以读取下一个字符（跳过下一个字符）
或者用2个get 
eg: 要读取连续两行数据时：
cin.get(a,10);
cin.get();
cin,get(b,10);
或：
cin.get(a,10).get();
cin.get(b,10);

*因此可以用空 cin.get()设置停顿

2、string 类：
要包含头文件string
应用： 和C类字符串类似
但是将字符串保存在string类型中，但仍能够将其当作数组访问
eg :
sting str1 = "hi";
str1[1] = o
-> str1 == "ho"

优点：
1、可以将一个string的值赋给另一个string 
2、可以使用运算符+将两个string对象合并起来
还可以使用运算符+=将字符串附加到string对象的末尾

对于C-风格字符串，程序员使用C语言库中的函数来完成这些任
务。头文件cstring（以前为string.h）提供了这些函数。例如，可以使用
函数strcpy( )将字符串复制到字符数组中，使用函数strcat( )将字符串附
加到字符数组末尾
eg: strcpy(str1,str2)   // 2 -> 1
    strcat(str1,str2)   // 1 <- 2
*/

/*
结构：可以包含不同种类的数据的集合
格式：
    声明： (用分号隔开）
    struct 结构名 
    {
    类型1 变量名1;
    类型2 变量名2;
    ……
    }；

    初始化：  （用，隔开）
    (struct) 结构名 该结构名 = 
    {
    数据1，
    数据2，
    ……
    }；

    调用：
    该结构名.变量名

*/
//eg:
/*int main()
{
    struct form1
    {
        char name[10] ;
        int age ;
        double height;
        char spe[30];
    };
    form1 Lihua =
    {
        "Lihua" ,
        18 ,
        1.75,
        "can\'t finish his assey"
    };
    cout << "name " << Lihua.name << endl ;
    cout << "age " << Lihua.age << endl;
    cout << "height " << Lihua.height << "\nspecial " << Lihua.spe ; 
}
    */   
/*
注意：
1、允许列表初始化（如果{}则全部为0 ）
2、不允许缩窄转换
3、结构可以传递给函数，可以整体赋值给另一个结构
4、可以创建类型为结构的数组：  结构名 数组名[元素个数]
    调用时：    数组名[下标].变量名
    eg:
    form1 member[2] = {
    {Lihua,18,1.75, "can\'t finish his assey"},
    {Xiaohong,18,1.65,"perfect"}
    };

*/

/*
公用体：
与结构相似，但只能一次储存一个数据
关键词为union
作用：共用体的用途之一是，当数据项使用两种或更多种格式（但不会同时使用）时，可节省空间
例如，假设管理一个小商品目录，其中有一些商品的ID为整数，而另一些的ID为字符串
*/


/*
枚举：（自定义一种类型）
    声明：  enum 类型名 {元素0，元素1，元素2……}；
    此时将0赋值给元素0……
    该类型名变成一个新类型
    定义：  类型名 变量名
    初始化： 变量名 = 元素x  （只能用该类型的元素）
    或：  变量名 = 类型名（枚举量的值）
注意：
1、元素x可以转换成int x 但int 不能转换成枚举量
2、枚举只有赋值运算符，没有算数运算符，如果进行算数操作，则转换成int

枚举量的值可以自己设置
方法1: 用赋值直接设置 ：  enum 类型名 {元素0 = a，元素1 = b，元素2 = c……}；
(设置的值只能是整数，也可以只设置部分枚举量的值，但后面的枚举量的值默认比前面的+1)
*/

/*
指针：与C一致
指针与数组 ：C++将数组名解释为地址
指针访问数组：
1、 数组元素类型 * 指针名 = 数组名
2、 数组元素类型 * 指针名 = &数组名[0]

一定要在对指针应用解除引用运算符（*）之前，将指针初始化为一个确定的、适当的地址。
这是关于使用指针的金科玉律
指针赋值：不能直接用整数赋值，要转换
eg: int *p = (int * ) 0xB8000000

向未定义的地址赋值： new 
eg:  int * pn = new int //运行时找到一个适合int 的地址并储存数据，用*pn访问

delete 释放内存：
delete 指针 （释放该部分内存）
eg:
int * pb = new int 
delete pb // 只释放内存，不删除指针
一定要配对地使用new和delete；否则
将发生内存泄漏（memory leak），也就是说，被分配的内存再也无法
使用了。如果内存泄漏严重，则程序将由于不断寻找更多内存而终止
不要尝试释放已经释放的内存块
只能用delete来释放使用new分配的内存。然而，对空指针使用delete是安全的

用new 创建动态数组：
eg: 
int * pa = new 元素类型[元素个数]
释放内存： delete [] 指针   （[]代表释放整个数组）
动态数组的访问：    用 * 指针[下标]
* ：C++将数组名解释为地址
*/

/*
指针运算： 将指针变量加1后，增加的量等于它指向的类型的字节数（指向下一个值）
有： 数组名[x] == *（指针名 + x）

*使用sizeof(数组名) 时，数组名不会被解释成地址
*使用sizeof(指针名) 时，返回的是指针的长度
*对数组名使用&时返回数组的地址，数组名返回第一个元素的地址
eg:  int a[20]
a -> *int
&a -> int (*)[20]
声明：  int (* pa)[20] = &a
//如果： int *pa[20]    则认为是一个指针数组

C++允许将指针和整数相加。加1的结果等于原来的地址值加上指向的对象占用的总字节数
还可以将一个指针减去另一个指针，获得两个指针的差
后一种运算将得到一个整数，仅当两个指针指向同一个数组（也可以指向超出结尾的一个位置）时
这种运算才有意义；这将得到两个元素的间隔

使用new[ ]运算符创建数组时，将采用动态联编（动态数组）
即将在运行时为数组分配空间，其长度也将在运行时设置
使用完这种数组后，应使用delete [ ]释放其占用的内存
*/

/*
同理，C-风格字符串名字也可以认为是指针
“”和里面的内容也是指针 
string 类型同理
允许：    指针名 = "字符串"        指针名 = 字符串名
因此： 不可以直接用关系运算符对字符串处理
cout输出时是读取了指针如果给cout提供一个指针，它将打印地址
但如果指针的类型为char *，则cout将显示指向的字符串
如果要显示的是字符串的地址，则必须将这种指针强制转换为另一种指针类型
eg : 
char name[10] = Lihua;
char *pn = name ;
char (*pn)[10] = &name;
cout << name ; //  输出：Lihua
cout << pn;   //输出 ：Lihua
cout << (int *) pn  //输出地址
cout << *pn ;   //输出L
cout << *pn1;   // 输出Lihua


*/

/*
动态结构：
1、定义结构
2、定义动态结构：   结构名 * 指针名 = new 结构名
3、访问：           指针名 -> 变量名    或      （*指针名).变量名
 eg: 
*/
// int main ()
// {
//     struct person 
//     {
//         char name[20];
//         int age;
//     };
//     person *pp = new person ;
//     cout << "input your name \n";
//     cin.get((*pp).name,20);
//     cout << "input your age \n";
//     cin >> pp -> age ;
//     cout << "name " << pp ->name << endl;
//     cout << "age " << (*pp).age << endl ;
//     delete pp ;
//     return 0 ;

// }
/*
结构数组：
格式：
1、定义结构
2、声明：   结构名 数组名[元素个数] 
3、访问： 数组名[下标].元素名
*/


/*
创建大小浮动的动态数组（节省内存）
eg:
char* getname()
{
    char name0[80];
    cout << "input name ";
    cin >> name0 ;
    char *pn = new char[strlen(name0) + 1] ;       //一定要+1 用来储存\0
    strcpy (pn,name0);
    return pn ;
}
*/


/*储存：
1、自动储存：
一般的函数中变量的储存，局部存在，用完即销毁

2、静态储存： 一直存在
定义方式：
1、 在函数外部定义
2、关键词static ：   eg : static int a = 10;

3、动态储存： new delete
*/

/*
vector类
模板类vector类似于string类，也是一种动态数组。您可以在运行阶
段设置vector对象的长度，可在末尾附加新数据，还可在中间插入新数
据。基本上，它是使用new创建动态数组的替代品。实际上，vector类确
实使用new和delete来管理内存，但这种工作是自动完成的。
这里不深入探讨模板类意味着什么，而只介绍一些基本的实用知
识。首先，要使用vector对象，必须包含头文件vector。其次，vector包
含在名称空间std中，因此您可使用using编译指令、using声明或
std::vector。第三，模板使用不同的语法来指出它存储的数据类型。第
四，vector类使用不同的语法来指定元素数。下面是一些示例：

格式：
#include<vector>
using namespace std ;
vector<元素类型> 名 （元素个数）        //个数可以是常量或变量
由
于vector对象在您插入或添加值时自动调整长度，因此可以将其初始
长度设置为零。但要调整长度，需要使用vector包中的各种方法）
*/

/*
array类：
与数组一样，array对象的长度也是固定的，也使用栈（静态内存分
配），而不是自由存储区，因此其效率与数组相同，但更方便，更安
全.要创建array对象，需要包含头文件array。array对象的创建语法与
vector稍有不同：
格式：
#include<array>
using namespace std;
array <数据类型，数组长度> 名字 = {……};
    *array 长度不能是变量
*/

/*
数组、vector array 的区别
首先，注意到无论是数组、vector对象还是array对象，都可使用标
准数组表示法来访问各个元素。其次，从地址可知，array对象和数组存
储在相同的内存区域（即栈）中，而vector对象存储在另一个区域（自
由存储区或堆）中。第三，注意到可以将一个array对象赋给另一个array
对象；而对于数组，必须逐元素复制数据

注意：
对于数组： a[-2] = *( &a[0] - 2 )       //此时地址在数组外
对于vector array :
可以用成员函数at()检查索引
eg:   vector <int> v1 (5);
v1.at(4) = 3
使用at()时，将在运行期间捕获非法索引，而程序默认将中断 
*/

/*
for 循环： 同C
*/

/*
，和 {}允许将应该放一条语句的地方放多条语句
同时： ， 是一个顺序点
*/

/*
字符串的比较：
相反，应使用C-风格字符串库中的
strcmp( )函数来比较。该函数接受两个字符串地址作为参数。这意味着
参数可以是指针、字符串常量或字符数组名。如果两个字符串相同，该
函数将返回零；如果第一个字符串按字母顺序排在第二个字符串之前，
则strcmp( )将返回一个负数值；如果第一个字符串按字母顺序排在第二
个字符串之后，则strcpm( )将返回一个正数值（ASC II比较）

不能用关系运算符比较字符串，但是可以用来比较字符
*/

/*
时间间隔：
头文件ctime（较早的实现中为time.h）提供了这些问题的解决方
案。首先，它定义了一个符号常量—CLOCKS_PER_SEC，该常量等于
每秒钟包含的系统时间单位数。因此，将系统时间除以这个值，可以得
到秒数。或者将秒数乘以CLOCK_PER_SEC，可以得到以系统时间单位
为单位的时间。其次，ctime将clock_t作为clock( )返回类型的别名（参
见本章后面的注释“类型别名”），这意味着可以将变量声明为clock_t类
型，编译器将把它转换为long、unsigned int或适合系统的其他类型
eg:
*/
// #include <iostream>
// #include<ctime>
// int main()
// {
// clock_t time_break = 1 * CLOCKS_PER_SEC ;
// for (int i = 0 ; i < 10 ; i++)
// {
//     cout << i << 's' <<endl ;
//     clock_t time_begin = clock();
//     while(clock() - time_begin < time_break)
//     ;
// }
//     return 0;
// }

/*
类型别名：
typedef 原类型名 类型别名
（使该类型名都用类型别名代替）

*/


/*

类：与结构类似，但更强大
关键词 class
格式：
class 类名
{
    访问说明符1:       // public ：公共可访问
                         private：内部可访问
                      protected ：内部和子类可访问
private
类内成员

public
（一般是接口）
……
};

构造函数：（新创建类时自动调用）
1、默认构造函数： 类名（）{初始化代码}
2、带参数的构造函数： 类名（参数，参数……）: 成员1（参数1），成员2（参数2）……
{构造函数调用时执行的代码}

析构函数：（释放内存用；自动调用）
～类名() {析构代码}

eg:
*/
/*
class student
{
    private:
    string name;
    int score;

    public:
    student(string n,int s) : name(n), score(s) 
    { cout << "构造完成" << endl;}   //构造函数
    
    int get_score()
    { return score;}  //类内函数（接口）

    string get_name()
    {return name;}

    void change_score(int ns);    //类内声明

    ~student()
    {}

};




//类外声明：

void student::change_score(int ns)       //要用域名解析符，在类定义后，main函数前
{
    score = ns;
}


int main ()
{
    // char *name = getname();
    // cout << name  << " 0"<< endl ;
    // char *name1 = getname();
    // cout << name1 << " 1" << endl;
    // cout << name << " 2"<< endl ;

//调用：

student s1("XiaoMing" , 85) ;  //类定义

cout << "name " << s1.get_name() << endl;
cout << "score " << s1.get_score() <<endl;

s1.change_score(100);

cout << "now his score is " << s1.get_score() <<endl;

} 

*/


/*
类的继承：

格式： 
class 子类名 : 继承方式 父类名
{
    构造（如果要用父类的构造函数，则要用参数列表显式构造）
    定义
    ……
}

继承方式： public.     继承父类public为public,protected为protected
            protected.    继承父类public ，protected 为protected
            private.      继承父类public,protected为 private

覆写：对象：父类的虚函数
要求：函数签名必须一致：重写时，子类函数的 函数名、参数列表、返回值类型 
必须与父类虚函数完全一致（否则会变成 “隐藏” 而非 “重写”）


隐藏： 对象无要求，无要求

eg:
*/
/*

#include <iostream>
using namespace std;

// 父类
class Animal {
public:
    // 虚函数：用 virtual 修饰
    virtual void eat() {
        cout << "动物吃食物" << endl;
    }

    // 普通非虚函数（对比用）
    void run() {
        cout << "动物跑步" << endl;
    }
};

// 子类 Dog 重写父类虚函数
class Dog : public Animal {
public:
    // 重写虚函数：可加 override（C++11+），编译器会检查是否真的重写了父类虚函数
    void eat() override {
        cout << "狗吃骨头" << endl;
    }

    // 隐藏父类非虚函数（不是重写）
    void run() {
        cout << "狗快速跑" << endl;
    }
};

// 子类 Cat 重写父类虚函数
class Cat : public Animal {
public:
    void eat() override {
        cout << "猫吃鱼" << endl;
    }
};

int main() {
    // 父类指针指向子类对象（触发多态的关键）
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    // 调用虚函数：运行时根据对象实际类型选择实现
    animal1->eat();  // 输出：狗吃骨头（实际对象是 Dog）
    animal2->eat();  // 输出：猫吃鱼（实际对象是 Cat）

    // 调用非虚函数：编译时根据指针类型选择实现（无多态）
    animal1->run();  // 输出：动物跑步（指针类型是 Animal）
    animal2->run();  // 输出：动物跑步（指针类型是 Animal）

    delete animal1;
    delete animal2;
    return 0;
}

*/
/*
虚函数：用virtural修饰
析构函数建议设为虚函数（重点！）：避免内存泄漏

错误示范（无虚析构）
class Animal {
public:
    ~Animal() { // 非虚析构
        cout << "Animal 析构" << endl;
    }
};

class Dog : public Animal {
private:
    int* arr; // 子类特有动态内存
public:
    Dog() { arr = new int[10]; }
    ~Dog() { // 子类析构：释放 arr
        delete[] arr;
        cout << "Dog 析构" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    delete a; // 仅调用 Animal 析构，Dog 的 arr 未释放 → 内存泄漏
    return 0;
}
// 输出：Animal 析构（Dog 析构未执行）




正确示范：

class Animal {
public:
    virtual ~Animal() { // 虚析构
        cout << "Animal 析构" << endl;
    }
};

class Dog : public Animal {
    // ... 同上面
};

int main() {
    Animal* a = new Dog();
    delete a; // 先调用 Dog 析构，再调用 Animal 析构 → 无内存泄漏
    return 0;
}
// 输出：
// Dog 析构
// Animal 析构

*/