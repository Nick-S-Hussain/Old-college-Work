var censory = require("censorify");
var getWords = require("censorify").getWord;
console.log(getWords());
console.log(censory.censor("Some very sad bad mad text"));
censory.addWord("dad");
console.log(getWords());
console.log(censory.censor("A very dad sad rad day"));
