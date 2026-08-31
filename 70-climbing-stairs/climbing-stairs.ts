function climbStairs(n: number): number {
    if(n<=2) return n;
    let arr:number[] = new Array(n+1);
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    for(let i=3;i<arr.length;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    return arr[n];
};