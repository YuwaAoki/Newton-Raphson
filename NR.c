#include <stdio.h>
#include <math.h>

double get_y1( double x1 )
{
	return( x1 * x1 + 4 * x1 + 4);
}

double get_dy1( double x1 )
{
	return( 2 * x1 + 4);
}

double get_y2( double x2 )
{
	return( x2 * x2 - 4 );
}

double get_dy2( double x2)
{
	return( 2 * x2 );
}

double get_y3( double x3 )
{
	return( x3 * x3 * x3 + x3 * x3 + x3 + 1);
}

double get_dy3( double x3)
{
	return( 3 * x3 * x3 + 2 * x3 + 1);
}

int main()
{
	double y, dy, x, d;
	double e = 0.000001;
	int n = 0;
	int nM = 30;
	x = 1;

	do{
		n++;
		y = get_y1( x );
		y *= -1;
		dy = get_dy1( x );
		d = y / dy;
		x += d;
		printf("x^2+4*x+4, 試行%d, x=%lf\n", n, x);
	}while(n <= nM && fabs(d) > e );

	x = 1;
	n = 0;
	do{
		n++;
		y = get_y2( x );
		y *= -1;
		dy = get_dy2( x );
		d = y / dy;
		x += d;
		printf("x^2-4, 試行%d, x=%lf\n", n, x);
	}while(n <= nM && fabs(d) > e );

	x = 1;
	n = 0;
	do{
		n++;
		y = get_y3( x );
		y *= -1;
		dy = get_dy3( x );
		d = y / dy;
		x += d;
		printf("x^3+x^2+x+1, 試行%d, x=%lf\n", n, x);
	}while(n <= nM && fabs(d) > e );


	return 0;
}
