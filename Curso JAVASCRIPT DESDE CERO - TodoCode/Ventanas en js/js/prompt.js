var respuesta = window.prompt("¿Todo bien?","Sí")
if (respuesta.toLowerCase() === "sí" || respuesta.toLowerCase() === "si") {
    alert("¡Me alegra saber que todo va bien! 😄");
} else if (respuesta) {
    alert(`Gracias por compartir: "${respuesta}"`);
} else {
    alert("Parece que no escribiste nada 🤔");
}