//https://www.google.com/?gws_rd=ssl

function anchorTotal () {
    var myTags = document.getElementsByTagName("a");
    console.log("Anchor Tags", myTags.length);
}

anchorTotal ();


console.log ("Anchor List:");
function anchorList () {
    var myTags = document.getElementsByTagName("a");
    for (i = 0; i < myTags.length; i++) {
        console.log (myTags [i])
    }
}

anchorList ();


console.log ("Anchor List in Reverse:");
function anchorReverse () {
     var myTags = document.getElementsByTagName("a");
     for (i = myTags.length - 1; i >= 0; i--) {
         console.log (myTags[i])
     }
}

anchorReverse ();
