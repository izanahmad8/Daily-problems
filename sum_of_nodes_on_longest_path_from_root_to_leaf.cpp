
class Solution
{
public:

    
    int max_height=0;
    int ans=0;
    int sumOfLongRootToLeafPath(Node *root)
    {
        solve(root,0,0);
        return ans;
    }
    void solve(Node *root,int h,int sum){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            sum+=root->data;
            if(h>max_height){
                ans=sum;
                max_height=h;
            }
            else if(h==max_height){
                ans = max(ans,sum);
            }
            return;
        }
        sum+=root->data;
        solve(root->left,h+1,sum);
        solve(root->right,h+1,sum);
    }
};
