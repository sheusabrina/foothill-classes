var client = new Object ();
client.firstName = "Sabrina";
client.lastName = "Sheu";


function updateClient(client, number, contact) {
    client[number] = contact;
}

updateClient(client, "777-555-3333", "Mobile");
updateClient(client, "510-458-3957", "Fax");
updateClient(client, "777-328-3739", "Home");
updateClient(client, "510-482-5729", "Work");


for (property in client) {
    console.log (property, ": ", client[property]);
}
