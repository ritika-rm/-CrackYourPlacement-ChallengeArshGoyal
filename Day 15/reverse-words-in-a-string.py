class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        list=s.split()
        rlist=list[::-1]
        str=" "
        return (str.join(rlist))   
        
 giving space is important lol, learnt that the hard way
 
 
 class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        list=s.split()
        rlist=list[::-1]
        listtostr=' '.join([str(elem) for elem in rlist])
        return listtostr    
        
        
or else ,have to do this, try in cpp later        
