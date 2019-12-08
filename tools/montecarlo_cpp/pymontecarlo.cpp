/*
<%
cfg['dependencies'] = ['Montecarlo.h']
setup_pybind11(cfg)
%>
*/


#include <pybind11/pybind11.h>

#include <pybind11/stl.h>
#include <pybind11/complex.h>,
#include <pybind11/functional.h>
#include <pybind11/chrono.h>

#include "Montecarlo.h"

namespace py = pybind11;
using namespace pybind11::literals;


PYBIND11_MODULE(pymontecarlo, m) {
	m.def("montecarlo", &montecarlo);
}