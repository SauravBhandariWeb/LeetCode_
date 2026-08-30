/**
 Do not return anything, modify s in-place instead.
 */
function reverseString(s: string[]): void {
    let i:number=0,j:number=s.length-1;
    while(i<=j){
    let c:string=s[i];
    s[i]=s[j];
    s[j]=c;
    i++;
    j--;
    }
};