#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

class Solution
{
public:
    vector<int> constructLowerArray(vector<int> &arr)
    {
        vector<int> ans(arr.size(), 0);
        ordered_set o_set;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            ans[i] = o_set.order_of_key(arr[i]);
            o_set.insert(arr[i]);
        }
        return ans;
    }
};