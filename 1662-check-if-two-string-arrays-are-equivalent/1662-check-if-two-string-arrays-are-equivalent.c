bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
   int i,j,k,l;
   i = j = k = l = 0;

   while(i < word1Size && j < word2Size)
   {
        if(word1[i][k] == '\0'){
            i++;
            k = 0;
            continue;
        }

        if(word2[j][l] == '\0'){
            j++;
            l = 0;
            continue;
        }

        if(word1[i][k] != word2[j][l]){
            return false;
        }
        k++;
        l++;
   }
   
    while(i < word1Size && word1[i][k] == '\0'){
        i++;
        k = 0;
    }

    while(j < word2Size && word2[j][l] == '\0'){
        j++;
        l = 0;
    }

    return i == word1Size && j == word2Size;

}