class Solution {
    func minPathSum(_ grid: [[Int]]) -> Int {
        var m = grid.count
        var n = grid[0].count
        var tmp = Array(repeating:Array(repeating:0,count:n),count:m)
        
        for i in 0..<m{
            for j in 0..<n{
                tmp[i][j] = grid[i][j]  
                 
                if i > 0 && j > 0{
                    tmp[i][j] += min(tmp[i-1][j], tmp[i][j-1])
                }else if i > 0 && j == 0{
                    tmp[i][j] += tmp[i-1][j]
                }else if j > 0 && i == 0{
                    tmp[i][j] += tmp[i][j-1]
                }
            }
        }// end for 

        return tmp[m-1][n-1]
    }
}
