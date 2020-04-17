var greeting = require('./greetings.json')

var sayHello = function(){
    console.log(greeting.en);
}

module.exports = sayHello;