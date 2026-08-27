bool judgeCircle(char* moves) {
    int x = 0, y = 0;
    
    while (*moves) {
        if (*moves == 'U') y++;
        else if (*moves == 'D') y--;
        else if (*moves == 'R') x++;
        else if (*moves == 'L') x--;
        moves++; 
    }

    return (x == 0 && y == 0);

}


