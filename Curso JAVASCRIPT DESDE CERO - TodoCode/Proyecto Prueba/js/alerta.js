var nombre = "Gabriel";
var apellido = "Jiménez";
var edad = 19;
var presenteONo=true;
var estatura =1.71;
const texto = `${edad} ${edad ===1 ?"año" :  "años"} `;

console.log("Nombre: "+nombre +" " + typeof nombre);
console.log("Apellido: "+apellido +" " + typeof apellido);
console.log("Edad: "+edad +" " + typeof edad);
console.log("Presente: "+ `${presenteONo===true ? "Sí":"No"}` +" " + typeof presenteONo);
console.log("Estatura: "+ estatura +" " + typeof estatura);
//alert("Bienvenido, " + nombre + " " + apellido + ", tu edad es de "+texto);
