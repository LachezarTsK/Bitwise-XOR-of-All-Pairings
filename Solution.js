
/**
 * @param {number[]} inputOne
 * @param {number[]} inputTwo
 * @return {number}
 */
var xorAllNums = function (inputOne, inputTwo) {
    if (inputOne.length % 2 === 0 && inputTwo.length % 2 === 0) {
        return 0;
    }
    if (inputOne.length % 2 === 1 && inputTwo.length % 2 === 0) {
        return  inputTwo.reduce((subtotalXOR, n) => (subtotalXOR ^ n), 0);
    }
    if (inputOne.length % 2 === 0 && inputTwo.length % 2 === 1) {
        return inputOne.reduce((subtotalXOR, n) => (subtotalXOR ^ n), 0);
    }

    return  inputOne.reduce((subtotalXOR, n) => (subtotalXOR ^ n), 0)
            ^ inputTwo.reduce((subtotalXOR, n) => (subtotalXOR ^ n), 0);
};
