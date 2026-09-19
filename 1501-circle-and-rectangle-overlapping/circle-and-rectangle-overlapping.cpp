class Solution {
public:
    bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
        //finding closest point of rectangle to the circle
        int closestx = max(x1,min(xc,x2));
        int closesty = max(y1,min(yc,y2));

        //calculate diatance
        int dx = xc - closestx;
        int dy = yc - closesty;

        if((dx*dx + dy*dy) <= r*r) return true;
        return false;
    }
};