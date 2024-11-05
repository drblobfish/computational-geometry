#include <iostream>
#include <random>
#include <vector>

struct Point2d{
        double x;
        double y;
};

void fill_random_points(std::vector<Point2d>& points,int nb){
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> urd(0.0,1.0);
        int i;
        for (i = 0; i < nb; ++i) {
                Point2d p;
                p.x = urd(gen);
                p.y = urd(gen);
                points.push_back(p);
        }
}

void print_points(std::vector<Point2d>& points){
        for (Point2d& p : points){
                std::cout << '(' << p.x << ' ' << p.y << ")\n";
        }
}

int main(int argc, char** argv){
        std::vector<Point2d> points;

        fill_random_points(points,100);

        print_points(points);

}
