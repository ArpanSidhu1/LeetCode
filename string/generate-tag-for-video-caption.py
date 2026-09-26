class Solution(object):
    def generateTag(self, caption):
        """
        :type caption: str
        :rtype: str
        """
        result = '#'
        for i in range (0,len(caption)):
            if(len(result)==100):
                return result
            if (i == 0 and caption[0].isalpha()) or (result == '#' and caption[i].isalpha()):
                result+=(caption[i].lower())
                continue
            elif(caption[i-1]==' ' and (caption[i].isalpha())):
                result+=(caption[i].upper())
                continue

            if((caption[i].isalpha())): 
                result+=(caption[i].lower())

        return result
                