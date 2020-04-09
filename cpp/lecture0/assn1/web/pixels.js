



function openFile() {
    let data;
    let input = document.createElement("input");
 
    input.type = "file";
    input.accept = "txt"; // 확장자가 xxx, yyy 일때, ".xxx, .yyy"
 
    input.onchange = function (event) {
        if(event.target.files[0].name !== "picture.txt") {
            alert("Invalid file name!! please upload \"picture.txt\"");
            return;
        }
        let file = event.target.files[0];
        let reader = new FileReader();
 
        reader.onload = function () {
            data = reader.result;
            drawPicture(data.split("\n").join(" ").split(" "));
        };
        reader.readAsText(file);
    };
 
    input.click();

}

function drawPicture(data) {
    let svg = d3.select("#main_svg");
    svg.selectAll("rect").remove();
    let index = 0;

    for(let i = 0; i < 300; i++) {
        for(let j = 0; j < 250; j++) {
            let r = data[index++];
            let g = data[index++];
            let b = data[index++];
            let a = data[index++];
            let string = "rgba(" + String(r) + ", " + String(g) + ", " + String(b) + "," + String(a) + ")";
            svg.append("rect")
               .attr("width", 2)
               .attr("height", 2)
               .attr("x", j * 2)
               .attr("y", i * 2)
               .style("fill", string);
        }
    }
    console.log(index);
}
