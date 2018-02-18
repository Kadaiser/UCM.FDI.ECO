#define N 600

double A[N][N];
double B[N][N];
double C[N][N];

int main ()
{
  int i, j, k;

  for (i = 0; i< N; i++) {
    for (j = 0; j< N; j++) {
      A[i][j] = (double) i;
      B[i][j] = (double) j;
    }
  }

  for (i = 0; i< N; i++) {
    for (j = 0; j< N; j++) {
      C[i][j] = 0.0;

    }
  }

  for (i = 0; i< N; i++) {
    for (k = 0; k< N; k++) {
      for (j = 0; j< N; j++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}
