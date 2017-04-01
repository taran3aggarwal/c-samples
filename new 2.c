	// ROW SORTING 
/*	for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            for (k = (j + 1); k < N; k++) {
                if (mat[i][j] > mat[i][k]) {
                    temp = mat[i][j];
                    mat[i][j] = mat[i][k];
                    mat[i][k] = temp;
                }
            }
        }
	}
*/
	// COLUMN SORTING
	for(j = 0; j < N; j++) {
		for(i = 0; i < M; i++) {
			for(k = i + 1; k < M; k++) {
				if(mat[i][j] > mat[k][j]) {
					temp = mat[i][j];
					mat[i][j] = mat[k][j];
					mat[k][j] = temp;
				}
			}
		}
	}
