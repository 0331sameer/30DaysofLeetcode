class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows == 1 or len(s) == 1 or len(s) == 2 or len(s) <= numRows:
            return s
        x  = len(s) / (numRows)
        cols = int(x * (numRows))

        arr = [[' ' for _ in range(numRows)] for _ in range(cols)]

        y = 0  # Start character

        for i in range(cols):
            if len(s) == y:
                break
            if i % (numRows-1) == 0:
                for j in range(numRows):
                    if len(s) == y:
                        break
                    arr[i][j] = s[y]
                    y += 1
            else:
                arr[i][numRows - (i % (numRows - 1)) - 1] = s[y]
                y += 1

        arr = [row for row in arr if any(cell != ' ' for cell in row)]
        transpose = [list(row) for row in zip(*arr)]
        cc = ''
        for i in transpose:
            for j in range(0, len(i)):
                if i[j] != ' ':
                    cc = cc + i[j]
        
        return cc        


# s = "Ppp"
# numRows = 2

# x  = len(s) / (numRows + 1)
# cols = int(x * (numRows - 1))

# arr = [[' ' for _ in range(numRows)] for _ in range(cols)]

# y = 0  # Start character

# for i in range(cols):
#     if len(s) == y:
#         break
#     if i % (numRows-1) == 0:
#         for j in range(numRows):
#             if len(s) == y:
#                 break
#             arr[i][j] = s[y]
#             y += 1
#     else:
#         arr[i][numRows - (i % (numRows - 1)) - 1] = s[y]
#         y += 1

# arr = [row for row in arr if any(cell != ' ' for cell in row)]

# transpose = [[arr[j][i] for j in range(len(arr))] for i in range(len(arr[0]))]
# for row in transpose:
#     print(row)

# row_strings = []
# for row in transpose:
#     row_strings.append(''.join(row))
# cc = ''
# for row in row_strings:
#     cc += row

# print(cc)
