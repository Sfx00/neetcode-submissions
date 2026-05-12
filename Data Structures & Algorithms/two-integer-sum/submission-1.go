func twoSum(nums []int, target int) []int {
    m := make(map[int]int)
    lent := len(nums)
    for i:= 0; i < lent; i++{
        if v, ok := m[nums[i]]; ok{
            return []int{v,i}
        }
        m[target - nums[i]] = i
    }
    return []int{0.0}
}
