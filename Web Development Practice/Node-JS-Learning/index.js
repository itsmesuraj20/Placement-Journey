const fss= require("fs");

fss.writeFile("message.txt" ,"The file is external saved here " ,(err) => {
    if(err) throw err;
    console.log("File Saved");
});
