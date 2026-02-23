/*
Problem: 2114. Maximum Number of Words Found in Sentences

Approach:
Count spaces in each sentence.
Number of words = spaces + 1.
Return maximum word count among all sentences.

Time Complexity: O(n * m)
Space Complexity: O(1)

Language: C
*/

int mostWordsFound(char** sentences, int sentencesSize) {
    int len;
    int maxlen=0;
   for(int i=0;i<sentencesSize;i++)
    {
        int j=0;len=1;
        while(sentences[i][j]!='\0')
        {
         if(sentences[i][j]==' ')
         {
            len++;
         }j++;
        }
        if(len>maxlen)maxlen=len;

    }
    return maxlen;
}
