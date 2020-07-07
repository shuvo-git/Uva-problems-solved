int lcs(int i,int j)
{
    if(i>=l1||j>=l2)
        return 0;
    else if(dp[i][j]!=-1)
        return dp[i][j];
    else
        return dp[i][j]=(str[i]==str2[j])+max(lcs(i+(str[i]==str2[j]),j+1),lcs(i+1,j+(str[i]==str2[j])));
}
