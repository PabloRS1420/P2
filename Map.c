#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "point.h"
#include "types.h"

typedef struct _Map {
	Point *point [4096] [4096];
	int nRows, nCols;
}
 
Map *map_ini () {
	Map *m=NULL;
	m=(map*) malloc(siceof(map));
	if(m==NULL) return NULL;

	return m;
}

void map_destroy(map *map){
	if(map!=NULL) free(map);
}

int map_getNrows(const Map *map) {
	if(map==NULL) return NULL;

	return map.nRows;
}

int map_getNcols(const map *map) {
	if(map==NULL) return NULL;

	return map.nCols;
}

Point *map_getInput(const Map *map) {
	if(map==NULL) return NULL;
	
	for(i=0; i<map.nRows; i++)
		for(j=0; j<nCols; j++)
			if(point_isInput(map->point[i][j]) return map->point[i][j];
}

Point *map_getOutput(const Map *map) {
	if(map==NULL) return NULL;
	
	for(i=0; i<map.nRows; i++)
		for(j=0; j<nCols; j++)
			if(point_isOutput(map->point[i][j]) return map->point[i][j];
}
			   
Point * map_getNeighborPoint(const Map * map, const Point *p, const Move mov){
	if(map==NULL||p==NULL||mov<0||mov>4) return NULL;
	
	int x = point_getCoordinateX(p);
	int y = point_getCoordinateY(p);
	
	if(mov==0) return map->point[x][y+1];
	else if(mov==1) return map->point[x+1][y];
	else if(mov==2) return map->point[x][y-1];
	else if(mov==3) return map->point[x-1][y];
	else return p;
}
			
Status map_setSize(Map *map, int row, int col) {
	If ((map==NULL)||(row<0)||(col<0)||(row*col>4096)){
		Return NULL;
    }
	Map.nRows=row;
	Map.nCols=col;
	Return OK;
}

Status map_setPoint(Map *map, const Point *p){
	if((map==NULL)||(p==NULL)) return NULL;
	
	int i, j, x, y;
	char symbol;
	if(point_isInput(p)){
		for(i=0; i<Map.nRows; i++){
			for(j=0; j<Map.nCols; j++){
                if((point_getCoordenadaX(p)==point_getCoordenadaX(Map->point[i][j])) &&(point_getCoordenadaY(p)==point_getCoordenadaY(Map->point[i][j]))){
					Map.point[i][j]=point_copy(p)
				}
				if(point_isInput(Map->point[i][j]==TRUE){
					Point_destroy(Map->point[i][j]);
				}
			}
		}
	}
	else if(point_isOutput(p)){
		for(i=0; i<Map.nRows; i++){
			for(j=0; j<Map.nCols; j++){
				if((point_getCoordenadaX(p)==point_getCoordenadaX(Map->point[i][j])) &&(point_getCoordenadaY(p)==point_getCoordenadaY(Map->point[i][j]))){
					Map.point[i][j]=point_copy(p)
				}
				if(point_isOutput(Map->point[i][j]==TRUE){
					Point_destroy(Map->point[i][j]);
				}
			}
		}
	}
	else{
		for(i=0; i<Map.nRows; i++){
			for(j=0; j<Map.nCols; j++){
                if((point_getCoordenadaX(p)==point_getCoordenadaX(Map->point[i][j])) &&(point_getCoordenadaY(p)==point_getCoordenadaY(Map->point[i][j]))){
					Map.point[i][j]=point_copy(p)
				}
				else{
					x=point_getCoordenadaX(p);
					y=point_getCoordenadaY(p);
					symbol=point_getsymbol(p);
					Map->point[x][y]=point_ini(x, y, symbol);
				}
			}
		}
	}
	return OK;
}

int map_print(FILE *f, const map *map){
    return fprintf(f, "Filas: %d, Columnas: %d", map_getNrows(map), map_getNcols(map));
}
