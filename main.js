function recursiva(num) {
   if (num >= 10) return;
   num++
   recursiva(num)
   console.log(num)
}

recursiva(0)