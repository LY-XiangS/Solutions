#ifndef TEST_HPP
#define TEST_HPP
#include <vector>
#include <map>
template <typename TIN, typename TOUT>
TOUT &Solution(const TIN &input, TOUT &output);
template <typename TIN, typename TOUT>
const std::map<TIN, TOUT> &GetData(const std::map<TIN, TOUT> &data);
#endif
