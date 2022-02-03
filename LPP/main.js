//Declaração de variáveis

var a = 10;
var b = "10";
var resultado = a * b; //coerção de string para number

console.log("resultado de 10 * '10' => ", resultado);

//comparação de valor
console.log("10 == '10' =>", a==b);

//comparação de valor e tipo
console.log("10 === '10' =>", a===b);

var c =  null;
var d = true;
var e = false;
var f = undefined;

//representação numérica de null e boolean
console.log("\nisNaN(null) => ", isNaN(c));
console.log("isNaN(true) => ", isNaN(d));
console.log("isNaN(false) => ", isNaN(e));
console.log("isNaN(undefined) => ", isNaN(f));

var g = {
    nome: "fulano",
    idade: 20
}

var h = [1,2,3]

//array possui tipo object
console.log("\ng: ", g, "tipo de g: ", typeof(g));
console.log("h: ", h, "tipo de h: ", typeof(h));

console.log("tipo de 'a':", typeof(a))
console.log(a.toString()) //método aplicável a números
//console.log(a.toLowerCase()) linha com erro pois toLowerCase é aplicável somente a strings

a = 'ABC'
console.log("tipo de 'a':", typeof(a))
//console.log(a.toFixed(5)) linha com erro pois toFixed é aplicável somente a números
console.log(a.toLowerCase()) //método aplicável a strings