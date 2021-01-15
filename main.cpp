#include <igl/opengl/glfw/Viewer.h>
#include <igl/read_triangle_mesh.h> 


int main(int argc, char *argv[])
{

  using namespace igl;

  Eigen::MatrixXi F;
  Eigen::MatrixXd V;

  read_triangle_mesh("/home/brend/BCCancer/meshes/1e4pts_just_linac.ply",V,F);

  // Plot the mesh
  igl::opengl::glfw::Viewer viewer;
  viewer.data().set_mesh(V, F);
  viewer.data().set_face_based(true);
  viewer.launch();
}
