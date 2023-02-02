#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

using namespace Eigen;

BOOST_AUTO_TEST_SUITE(MatrixIOTests)

BOOST_AUTO_TEST_CASE(LoadMatrix)
{
  MatrixXd expected(3, 3);
  expected << 1, 2, -3,
              -6, 7.5, 8,
              0, -0, -0.12;

  MatrixXd matrix = matrixIO::openData("testmatrix.csv", 3);
  BOOST_TEST(expected == matrix);
}

BOOST_AUTO_TEST_SUITE_END()
