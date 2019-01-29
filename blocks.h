// This is the blocks that would come down the screen
// coordinates are from bottom left side of the block
struct Blocks{
	int sclale;
	int x[4];
	int y[4];
};

struct Blocks * getBlock(int type, int angle)
{
	switch (type)
	{
		case 0:
			// [][][][]
			if (angle == 0 || angle == 180)
			{
				x[0] = 0;
				y[0] = 0;
				x[1] = 1;
				y[1] = 0;
				x[2] = 2;
				y[2] = 0;
				x[3] = 3;
				y[3] = 0;
			}
			//[]
			//[]
			//[]
			//[]
			if (angle == 0 || angle == 180)
			{
				x[0] = 0;
				y[0] = 0;
				x[1] = 0;
				y[1] = 1;
				x[2] = 0;
				y[2] = 2;
				x[3] = 0;
				y[3] = 3;
			}
			break;
		case 1:
			// [][]
			// [][]
			x[0] = 0;
			y[0] = 0;
			x[1] = 1;
			y[1] = 0;
			x[2] = 0;
			y[2] = 1;
			x[3] = 1;
			y[3] = 1;
			break;
		case 2:
			case 0:
			//   [][]
			// [][]
			if (angle == 0 || angle == 180)
			{
				x[0] = 0;
				y[0] = 0;
				x[1] = 1;
				y[1] = 0;
				x[2] = 1;
				y[2] = 1;
				x[3] = 2;
				y[3] = 1;
			}
			//[]
			//[][]
			//  []
			if (angle == 0 || angle == 180)
			{
				x[0] = 1;
				y[0] = 0;
				x[1] = 0;
				y[1] = 1;
				x[2] = 1;
				y[2] = 1;
				x[3] = 1;
				y[3] = 2;
			}
			break;
		case 3:
			case 0:
			// [][][][]
			if (angle == 0 || angle == 180)
			{
				x[0] = 0;
				y[0] = 0;
				x[1] = 1;
				y[1] = 0;
				x[2] = 2;
				y[2] = 0;
				x[3] = 3;
				y[3] = 0;
			}
			//[]
			//[]
			//[]
			//[]
			if (angle == 0 || angle == 180)
			{
				x[0] = 0;
				y[0] = 0;
				x[1] = 0;
				y[1] = 1;
				x[2] = 0;
				y[2] = 2;
				x[3] = 0;
				y[3] = 3;
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}
