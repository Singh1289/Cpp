#include<iostream>  
#include<stdlib.h>  
//#define MAX 10  
using namespace std;

class matrix
{
	int row, col, **mat;
    public:
	matrix()
	{
		row = col = 3;
		mat=new int*[row];
		for(int i=0;i<row;i++)
		   mat[i]=new int[col];
	//	cout<<"Constructor is called"<<endl;
	}

    matrix(int i,int j)
    {
    	row= i;
    	col =j;
    	mat=new int*[row];
		for(int i=0;i<row;i++)
		   mat[i]=new int[col];
    	
	}
	

	friend istream& operator >>(istream& din, matrix& m);
	friend ostream& operator <<(ostream& dout, matrix& m);

	matrix operator +(matrix m2);
	matrix operator -(matrix m2);
	matrix operator *(matrix m2);
	void transpose();
	void rotateClockWise();
	void rotateAntiClockWise();
	int sumDiagonal();
	int sumOuterElements();
	void setZeroRowColifAnyZero();
/*	int findLeader();
	matrix sumRowCol();*/
	void greatestSumof3x3in6x8();
	void printSpiral();
    matrix(const matrix &m);
    void operator =(matrix m);
    void swap(int *,int *);
    ~matrix();
    
	
};

matrix::~matrix()
{
	cout<<"Destructor is called";
	for(int i=0;i<3;i++)
	 delete []mat[i];
delete []mat;
}


int matrix::sumOuterElements()
{
	int i,j,sum = 0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if((i==0)||(j==0)||(i==3)||(j==3))
			  sum=sum+mat[i][j];
		}
	}
	return sum;
}

int matrix::sumDiagonal()
{
	int i,j,sum = 0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
			  sum=sum+mat[i][j];
		}
	}
	return sum;
}

void matrix::setZeroRowColifAnyZero()
{
        int *r = new int[row];
		int *c = new int[col];
		// Store the row and column index with value 0
		for (int i = 0; i < row; i++) {
		for (int j = 0; j < col;j++) {
			if (mat[i][j] == 0) {
			    r[i] = 1;
			    c[j] = 1;
			}
		}	
		}
		
			// Set arr[i][j] to 0 if either row i or column j has a 0
			for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
			if ((r[i] == 1 || c[j] == 1)) {
				mat[i][j] = 0; 	}
			}
			}
}

void matrix::printSpiral()
{
	
  int i,start,end;
  for(start=0,end=row-1; start<end;start++,end--)
  {
    for(i=start;i<=end;i++)
       printf(" %d",mat[start][i]);
    for(i=start+1;i<=end;i++)
       printf(" %d",mat[i][end]);
    for(i=end-1;i>=start;i--)
       printf(" %d",mat[end][i]);
    for(i=end-1;i>=start+1;i--)
       printf(" %d",mat[i][start]);
  }

}


void matrix::greatestSumof3x3in6x8()
{
  int starti=0,startj=0,resi=0,resj=0,sum=0,max=0;
  int i,j;
  while(starti<=(row-3))
  {
     startj=0;
     while(startj<=(col-3))
     {
       sum=0;
       for(i=starti;i<starti+3;i++)
       {
         for(j=startj;j<startj+3;j++)
         {
            if((i==starti)||(j==startj)||(i==starti 			+2)||(j==startj+2))
                sum=sum+mat[i][j];
         }
        }
        if(sum>max)
        {
            max=sum;
            resi=starti;
            resj=startj;
        }
        startj=startj+1;
      }
      starti=starti+1;
  }
  for(i=resi;i<resi+3;i++)
  {
     for(j=resj;j<resj+3;j++)
         printf(" %d",mat[i][j]);
  
     printf("\n");
  }
}

void matrix::transpose()
{
	// Transpose the matrix
	int N = row;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++) {
            swap(&mat[i][j], &mat[j][i]);
        }
    }
}

void matrix::rotateClockWise()
{
    // `N × N` matrix
    int N = row;
 
    // base case
    if (N == 0) {
        return;
    }
 
    transpose();
 
    // swap rows
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N/2; j++) {
            swap(&mat[i][j], &mat[i][N - j - 1]);
        }
    }
}


void matrix::rotateAntiClockWise()
{
    // `N × N` matrix
    int i,j,N = row;
 
    // base case
    if (N == 0) {
        return;
    }
    
    transpose();
    //swap columns
	for (i = 0; i < N; i++)
    {
        for (j = 0; j < N/2 ; j++) {
            swap(&mat[j][i], &mat[N-j-1][i]);
        }
    }
}

void matrix::operator=(matrix m)
{
	cout<<"Assignment operator is called\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		  mat[i][j] = m.mat[i][j];
	}
}

matrix::matrix(const matrix &m)
{
	row=m.row;
	col=m.col;
	mat=new int*[row];
	
	for(int i=0;i<row;i++)
		   mat[i]=new int[col];
		   
		   cout<<"Copy Constructor";
	for (int i = 0; i<row; i++)
			for (int j = 0; j<col; j++)
				mat[i][j] = m.mat[i][j];	   
}

istream& operator >>(istream& din, matrix& m)
{
	//cout << "Enter the size\n";
	//din >> m.row >> m.col;

	cout << "Enter the elements\n";
	for (int i = 0; i<m.row; i++)
		for (int j = 0; j<m.col; j++)
			din >> m.mat[i][j];

	return din;
}


ostream& operator <<(ostream& dout, matrix& m)
{
	for (int i = 0; i<m.row; i++)
	{
		for (int j = 0; j<m.col; j++)
		{
			dout << m.mat[i][j] << "\t";
		}
		dout << endl;
	}
	return dout;
}



matrix matrix :: operator +(matrix m2)
{
	matrix m3;
	m3.row = m3.col = row;
   //cout<<m2; 
   //cout<<"Operator +";
	for (int i = 0; i<row; i++)
		for (int j = 0; j<col; j++)
			m3.mat[i][j] = mat[i][j] + m2.mat[i][j];
			
	//cout<<m3;
	return m3;
}


matrix matrix :: operator -(matrix m2)
{
	matrix m3;
	m3.row = m3.col = row;

	for (int i = 0; i<row; i++)
		for (int j = 0; j<col; j++)
			m3.mat[i][j] = mat[i][j] - m2.mat[i][j];
	return m3;
}


matrix matrix :: operator *(matrix m2)
{
	matrix m3;
	m3.row = m3.col = row;

	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			m3.mat[i][j] = 0;
			for (int k = 0; k<m2.row; k++)
				m3.mat[i][j] += mat[i][k] * m2.mat[k][j];
		}
	}
	return m3;
}

void matrix::swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
 } 


int main()
{
	matrix m1, m2, m3;
	

/*	cout << "Matrix 1\n";
	cin >> m1;

	cout << "\nMatrix 2\n";
	cin >> m2;

	cout<<m1<<endl<<endl; 
	cout<<m2<<endl<<endl;
*/	
	int ch, rows;
	//cout << "\n====Menu====\n";
	//cout << "1.Addition\n2.Subtraction\n3.Multiplication\n";
	//cin >> ch;
while(1)
{
	cout << "\n====Menu====\n";
	cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.ClockWiseRotation\n6.AntiClockWiseRotation\n";
    cout << "7.SumDiagonal\n8.SumOuter\n";
	cin >> ch;
   if(ch>8)
     break;
	switch (ch)
	{
	case 1:
		cout << "\nAddition\n";
		m3 = m1 + m2;
		cout << m3 << endl;
		break;

	case 2:
		cout << "\nSubtraction\n";
		m3 = m1 - m2;
		cout << m3 << endl;
		break;

	case 3:
		cout << "\nMultiplication\n";
		m3 = m1*m2;
		cout << m3 << endl;
		break;
	case 4:
		cout<<m1<<endl;
		m1.transpose();
		cout<<m1<<endl;
		break;
	case 5:
		{
			cout<<"Rows: ";
			cin>>rows;
			matrix t(rows,rows);
			cin>>t;
			cout<<"\n"<<t<<"\n";
			t.rotateClockWise();
			cout<<t<<endl;
        }
		break;
	case 6:
		{
		cout<<"Rows: ";
		cin>>rows;
		matrix t1(rows,rows);
		cin>>t1;
		cout<<"\n"<<t1<<"\n";
		t1.rotateAntiClockWise();
		cout<<t1<<endl;
		}
		break;
	case 7:
	{
		matrix t2;
	
		cin >> t2;
		cout<<t2.sumDiagonal();
		break;
	}
	case 8:
	{
		matrix t3;
		cin>>t3;
		cout<<t3.sumOuterElements();
		break;
	}	
	default: cout << "Invalid choice\n";
	}
}
cout<<"\n The end..";
	//system("PAUSE");
return(0); 	
}
