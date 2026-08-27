function maxRotateFunction(nums: number[]): number {
    const n: number = nums.length;
    const sum = nums.reduce((total: number, value: number) => total + value, 0); // sum
    let curr = nums.reduce((total: number, value: number, i: number) => total + i * value, 0);// index wise sum
    let ans = curr;
    for (let i = n - 1; i > 0; i--) {
        curr = curr + sum - n * nums[i];
        ans = Math.max(ans, curr);
    }
    return ans;
};