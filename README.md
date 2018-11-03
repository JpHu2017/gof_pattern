1. 讨论简单工厂，工厂模式以及抽象工厂的区别。
简单工厂：多种产品共用一个工厂类，不同产品的创建，通过关键字（或参数）传入工厂类，并通过switch...case...或if...else...的方式做选择。
工厂模式：每种产品都有一个具体工厂类（继承自抽象工厂），通过指定具体工厂类，创建不同种类的产品。其相对于简单工厂的优势是：符合开闭原则，
当新增一种产品时，不需要对工厂类进行修改（添加case选项）；缺点为：每种产品都需要具体工厂类，当产品种类过多时，类的数量会变得庞大。
抽象工厂：当需要创建多族产品时，且工厂只能创建同族产品时，采用抽象工厂模式。具体工厂类的个数等于产品种类的个数，抽象产品的个数等于产品族的个数，
也等于工厂类中创建产品函数createProductX()的个数。
2. 建造者模式：产品的构件步骤在builder类定义，产品搭建在director类中进行；注意这里定义acer和dell的产品都为desktop类，是因为二者组成部分一致，但
要注意的是建造者模式并不要求不同种类的产品的组成部分完全一致。也就是说最后的产品可不一致。拿程序实例而言，就是acer_desktop_builder和dell_desktop_builder类
所生成的产品可以不都是desktop，而可以是acer_desktop_builder生成acer_desktop，而dell_desktop_builder生成dell_desktop，不过那样的话，产品不应该由director返回，而
应该由具体desktop_builder类产生（例如acer_desktop由acer_desktop_builder建造）
```
gof::DesktopBuilder::Ptr builder_ptr;
builder_ptr.reset(new gof::DellDesktopBuilder());
gof::Director::Ptr director_ptr(new gof::Director(builder_ptr));
gof::Desktop::Ptr desktop_ptr = director_ptr->createDesktop();
```
可改写为
```
//define at the beginning of program
gof::DesktopBuilder::Ptr builder_ptr;
builder_ptr.reset(new gof::DellDesktopBuilder());
gof::AcerDesktop::Ptr desktop_ptr;
gof::Director::Ptr director_ptr(new gof::Director(builder_ptr));
...
//use part
director_ptr->createDesktop();
desktop_ptr = builder_ptr->getDesktop();
```