/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1;
        int high=n;
        int res=5;
        while(low<=high)
        {
            int mid=low + (high - low) / 2;
            res=guess(mid);
            if(res==-1)
            {
                high=mid-1;
            }
            else if(res==1)
            {
                low=mid+1;
            }
            else if(res==0)
            {
                return mid;
            }
        }
        return 0;
        
    }
};