class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<String> s = new HashSet<>();
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                String r=""+i+"R"+board[i][j];
                String c=""+j+"C"+board[i][j];
                String b=""+i/3+"."+j/3+"R"+board[i][j];
                if(s.contains(r) || s.contains(c) || s.contains(b)){
                    return false;
                }
                s.add(r);
                s.add(c);
                s.add(b);
            }
        }
        return true;
    }
}