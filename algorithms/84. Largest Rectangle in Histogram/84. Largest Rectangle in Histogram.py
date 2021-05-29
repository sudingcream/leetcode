class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        answer = 0
        stack = []
        heights = [0] + heights + [0]
        for i in range(len(heights)):
            while(stack and heights[stack[-1]] > heights[i]):
                basket = stack.pop()
                answer = max(answer, (i-stack[-1]-1) * heights[basket])
            stack.append(i)
        return answer
