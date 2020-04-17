var module1 = require('./module/module1')
module1()

var module2 = require('./module/module2')
module2.sayHello()

var module3 = require('./module/module3')
module3.sayHello()
module3.message = "cak"

var module32 = require('./module/module3')
module32.sayHello()

var module4 = require('./module/module4')
var modul4 = new module4();
modul4.sayHello()

var hello5 = require('./module/module5')
hello5.sayHello()