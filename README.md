Restore IP Addresses


Given a digit string, return all possible IP Addresses that can be formed from the string.

A valid IP Address contains four integers each in the range of [0, 255]. The four numbers are separated by a '.'. The integers do not have any leading zeros unless the number is itself 0.

Examples
str: "25525511135"
IP: [
    "255.255.11.135",
    "255.255.111.35"
]
str: "8888"
IP: [
    "8.8.8.8"
]
str: "0000"
IP: [
    "0.0.0.0"
]
str: "002500"
IP: [
    "0.0.250.0"
]
The resultant list should be sorted lexicographically. Consider that '.' < '0'.

Testing
Input Format
The first line contains an integer ‘T’, denoting the number of test cases.

For each test case, the input has string str.

Output Format
For each test case, the output has the following lines:

The first line contains an integer ‘m’ denoting the total no of IP addresses.
The next line contains m space-separated strings denoting the IP addresses.
Sample Input
4
25525511135
8888
0000
002500
Expected Output
2
255.255.11.135 255.255.111.35
1
8.8.8.8
1
0.0.0.0
1
0.0.250.0