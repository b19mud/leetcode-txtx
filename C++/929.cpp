class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        size_t size=emails.size();
        vector<string> b_emails(size);
        vector<string> hash;
        int flag=0;
        for(int i=0;i<size;i++)
        {
            size_t eve_size = emails[i].size();
            string str1 = emails[i].substr(0,emails[i].find('@'));    
            string str2 = emails[i].substr(emails[i].find('@')+1,eve_size-emails[i].find('@')-1);
            int str1_sum_position;
            
            if(str1.find('+')!= -1)
            {
                str1_sum_position = str1.find('+');
                str1 = str1.erase(str1_sum_position,str1.size()-str1_sum_position);
            }
            
            while(true)
            {
                if(str1.find('.')!= -1)
                {
                    str1 = str1.erase(str1.find('.'),1);
                }
                else{
                    break;
                }
            }
            
         
            b_emails[i] = str1+'@'+str2;
        }
        
        for(int j=0;j<size;j++)
        {
            if(!count(hash.begin(),hash.end(),b_emails[j]))
            {
                flag++;
                hash.push_back(b_emails[j]);
            }else{
                continue;
            }
        }
        return flag;
    }
};