#ifndef __MODEL_H__
#define __MODEL_H__

#include <vector>
#include "geometry.h"

class Model {
private:
    // The vertices of the model, each vertex has 3 coordinates
	std::vector<Vec3f> verts_;
	// The faces of the model, each face has 3 vertices, each vertex has 3 coordinates
	std::vector<std::vector<int> > faces_;
public:
	Model(const char *filename);
	~Model();
	int nverts();
	int nfaces();
	Vec3f vert(int i);
	std::vector<int> face(int idx);
};

#endif //__MODEL_H__
