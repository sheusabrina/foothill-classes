$("document").ready(function() {
    getData();
    getXMLData();
});

//Append listings.html file to aboutUs div
function getData() {
    $("#aboutUs").load("listings.html");
}
      

//Append realtors.xml file to aboutUs div
function getXMLData() {
    $.ajax({url: "realtors.xml", type: "GET", dataType: "xml"})
    .done(successFn)
}

//Success function
function successFn (data) {
    $("#aboutUs").append("<p>")
    $(data).find('data').each(function(){
            var name = $(this).find('name').text();
            var phone = $(this).find('phone').text();
            $("#aboutUs").append( "<p>" + name + " : " + phone + "</p>")
    });      
    $("#aboutUs").append("</p>")
}
