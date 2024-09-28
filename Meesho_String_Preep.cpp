/* The problem is: A string s is good if it is possible to rearrange the characters of s such that the new string formed contains “prep” as substring. So the string “proper” is good but “poor” is not. Given an integer n, find the number of only lowercase English characters. As this number might be too large, return it modulo (10^9 +7)

Example:
let n=4 (input)
output:12
Explanation:
A string of 4 characters must have letters p,r,e and p. There are 12 distinct strings where this is the case and 12 modulo(10^9+7)=12
ppre
prep
repp
eppr
perp
erpp
rppe
pper
rpep
pepr
eprp
prpe

Example 2:
let n(input)=5
output: 1460
Explanation
One good string of length 5 is “preep” and there are a total of 1460 of them.
Example 3:
let n(input) = 10
output : 526083947580 modulo (10^9+7) = 83943898

*/
#include<bits/stdc++.h>
using namespace std;









