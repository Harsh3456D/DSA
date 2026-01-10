const { performance } = require('perf_hooks');

const setPass = "373905289";
const setPassLen = setPass.length;

const passCombi = Math.pow(10, setPassLen);

console.log(`Checking ${passCombi} Combinations`);
const starttime = performance.now()

for (let i = 0; i < passCombi; i++ ){
    let istr = i.toString().padStart(setPassLen,'0');

    if (istr == setPass){
        const endtime = performance.now()
        elapsed = (endtime - starttime) / 1000;
        console.log(`Password is -- ${istr}`);
        console.log(`It took ${elapsed} sec`);
        break;
    };
};
