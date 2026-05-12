import "slices"
func isAnagram(s string, t string) bool {
    ss := []rune(s)
    tt := []rune(t)
    if len(ss) != len(tt){
        return false
    }
    
    slices.Sort(ss)
    slices.Sort(tt)

    for i := range ss {
        if(ss[i] != tt[i]){
            return false
        }
    }
    return true
}
