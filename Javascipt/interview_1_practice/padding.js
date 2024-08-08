// The character given will be added to the empty space to complete the length of the string

function padding(char, str, len) {
    let str_len = str.length;
    if (len > str_len) {
        let sub_value = len - str_len;
        console.log(String(char).repeat(sub_value) + str)
    } else {
        console.log("There is no spare space for padding to occupy")
    }
};

module.exports = padding;

padding(0, "23", 4)
