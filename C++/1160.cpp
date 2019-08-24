class Solution {
    public:
        int countCharacters(vector<string>& words, string chars) 
        {
            int res=0;                     //返回值，即单词数量总和
            string str;
            string w;
            for(int i=0;i<words.size();i++)//遍历容器词汇表
            {
                str=chars;          //复制字符串
                w=words[i];         //复制字符窜
                while(w.size()>0)
                {
                    if(str.find(w[0])==string::npos)//逐个寻找str中是不是存在有w的当前单词
                        break;                      //找不到就退出，不计入总数
                    else                           //否则查看下一个直到最后一个单词
                    {
                        str.erase(str.find(w[0]),1); //删除当前的迭代器坐标指向的字符
                        w.erase(0,1);              //删除坐标是0开始的一个单词 
                        if(w.size()==0)            //判断在删除之后是不是没有字符了
                            res+=words[i].size();      //没有的话就把该单词数量加入返回值中
                    }
                }
            }
            return res;
        }
};