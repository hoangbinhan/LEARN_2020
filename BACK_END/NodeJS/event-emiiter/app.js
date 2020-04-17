var Emitter = require('./emitter')

var emitter = new Emitter()

emitter.on('bad', function(){
    console.log("mot mon nao do bi diem kem")
})

emitter.on('bad', function(){
    console.log("da co diem kem, can phat den phu huynh")
})

var score = [10,4]

for(var s of score){
    if(s<5){
        console.log('diem thap qua')
        emitter.emit('bad')
    }
}