#include "pch.h"
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int main() {
	BlockID stone = createBlock(BLOCK_STONE);
	int sx, sy, sz;
	int ex, ey, ez;
	int i = 0, j = 0, k = 0;
	int dx, dy, dz;
	printf("sx, sy, sz의 값을 입력");
	scanf_s("%d %d %d", &sx, &sy, &sz);
	printf("ex, ey, ez의 값을 입력");
	scanf_s("%d %d %d", &ex, &ey, &ez);
	if (sx > ex) {
		i = sx;
		sx = ex;
		ex = i;
	}
	if (sz > ez) {
		j = sz;
		sz = ez;
		ez = j;
	}
	if (sy > ey) {
		k = sy;
		sy = ey;
		ey = k;
	}
	for (dx = ex - sx; dx >= 0; dx--) {
		for (dy = ey - sy; dy >= 0; dy--) {
			for (dz = ez - sz; dz >= 0; dz--)
				locateBlock(stone, sx + dx, sy + dy, sz + dz);
		}
	}
}