function Person(){
    this.message = "hello 3"
    this.sayHello = function(){
        console.log(this.message)
    }
}

module.exports = new Person()