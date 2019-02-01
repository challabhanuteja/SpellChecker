# SpellChecker
This project is done in c language. This is a simple spell checker which will take a string as input from the user and shows the spelling mistakes in his string. This will also suggest the correct spellings of those words which are misspelled.For this project I have used files concept in c language.
let me explain my code, I have divided my project into three  functions main(), strcompare() and suggestions().

main(): here we are scanning the input string and we are splitting that string into words. We are calling other two functions when ever neccessary.

strcompare() : this function compares both strings given to it and returns 1 if both of them are equal else it will return 0.

suggestions(): this function will take string with wrong spelling as input and give suggestions correct spelling word from dictionary1000.txt .It will return the with same string length and starting with same letter. This is the constrain we are taking into consideration for giving suggestions.



how will we know that if the string is correctly spelt or not ?
first, I have created dictionary1000.txt file with 1000 correctly spelled words in it.
After scanning the input string we are splitting that string into words. Every word will be compared with every other word in dictionary1000txt. If it is present in that file then it is considered correct else we are giving suggestions for that word.
