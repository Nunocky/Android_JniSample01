package org.nunocky.jnisample01;

class Point {
    private int x;
    private int y;

    public Point() {
        x = 0;
        y = 0;
    }

    public Point(int x_, int y_) {
        x = x_;
        y = y_;
    }

    public int getX() {
        return x;
    }

    public void setX(int x_) {
        x = x_;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}
