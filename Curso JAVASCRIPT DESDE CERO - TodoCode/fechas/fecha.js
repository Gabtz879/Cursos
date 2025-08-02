let fecha = new Date();
let actual = {
    año: fecha.getFullYear(),
    mes: fecha.getMonth()+1,
    dia: fecha.getDate()
}
alert(`La fecha de hoy es ${String(actual.dia).padStart(2,"0")}/${String(actual.mes).padStart(2,"0")}/${String(actual.año)}`)