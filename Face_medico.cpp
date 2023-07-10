/*Jack and Jill went to a carnival, there are many games counter in the carnival. And if you win you may get good prizes.

One of the games there was Check-and-win. The game was simple but a bit tricky. Below are the rules of the game:

• There will be a strip with N integers mentioned on it.

•Each player will get their respective number strips.Each time one player has to pick a number from the strip. The index chosen by the one player cannot be used further in the game. We will understand more in below example.

•The next player has to pick a number from another index from their respective strip. Once that index is used, it won't be used again in the game by either of the payers.

• At the end of the when all the indexes are checked. The sum will be calculated for each player.

• The player with the maximum sum will be the winner.

Jack decided a rule, that he will always start first. Print Jack if he wins, or Jill when Jill wins. If there is a tie, print Tie.

Considering that both the players are playing optimally. find the output.

Let us try to understand it with an example. Consider the strip of 3 integers. Means N = 3. Respective strip for Jack and Jill is as follows:

JK: [134]

JL: (531)

The rule says that Jack always plays first.

Step 1: Jack plays first and chooses the largest element his number-strip JK[3] = 4.

Now index 3 is checked.

Step 2: Jill plays next, now she has to find the largest number among index 1 and 2. Within these 2 indices she has the largest number at index 1. So, she chooses JL[1] Now index 1 is checked.

Step 3: Its Jack's turn now, and the only index left is 2. So, he chooses JK[2]

Sum of each:

Jack : 4 + 3 =7

Jill :5

Clearly jack wins.

Hence the answer is jack.

Input format

First Input -Accept value of Integer, N.

 Next 'N' Lines-Elements of sequence JK[]

Next 'N' Lines-Elements of sequence JI[]

Output format

The output is an integer value as per above logic. (Check the output in Example 1, Example 2).

additional messages in output will cause the failure of test cases.

Constraints

1<=N<=1000

1 <= Jk[], JL[]<=10000

Only integer values

Example 1:

Input:

2 ->Input integer , N

1 1->Input integer , Jk[]

2 2->Input integer , JL[]

Output:

Jill->output

Explanation:

Step 1: Jack plays first and chooses the largest element from his number-strip JK[1]=1 Now index 1 is checked.

step 2: Jill plays next, now she has to find the largest number only present at index 2. So, she chooses JL[2] Now index 2 is checked. Sum of each:

Jack=1

Jill=2

Clearly jill wins.

Hence the answer is jill

Example 2:

Input:

4-> Input integer , N

1 2 3 4->Input integer , Jk[]

4 3 2 1->Input integer , JL[]

 Output:

Tie->output

Explanation:

Step 1: Jack plays first and chooses the largest element from his number-strip JK[4] =4 Now index 4 is checked.

Step 2: Jill plays next, now she has to find the largest number among index 1, 2 and 3, So he chooses JL[1] = 4. Now index 1 is checked.

Step 3: jack plays next and now he has to find the large number among index 2 and 3. JK[3] =3 Now index 3 is checked.

Step 4: Jill plays next, now she has to find the largest number only present at index 2. So, he chooses JL[2] = 3 Now index 2 is checked. All indices are checked now. Sum of each.

Hence the sum is same for both .

Hence the answer is tie
*/

#include<bits/stdc++.h>
using namespace std;
int medico(vector<int> &v,int n,int day)
{
    int ans = (n/day);
    int mo = n%day;
    if(mo==0)
      return ans;
    else
      return ans+1;
}
int main(){
    int n;
    cin>>n;
    int day;
    cin>>day;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<medico(v,n,day)<<" Days"<<"\n";
}