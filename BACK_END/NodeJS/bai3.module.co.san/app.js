var ulti = require('util')

var name = 'Hoa'
var message = ulti.format('Hello, %s', name)
console.log(message)
ulti.log(message)