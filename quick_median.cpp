#include <type_traits>
#include <vector>
#include <algorithm>

/*
 * Simple C++ implementation to calculate the median
 * taking a numeric vector eturning a numeric value
 * of the given type very fast
 */
 template<typename T,
          typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
T quick_median(std::vector<T> &v)
{
        int v_size = v.size();
        // No elements
        if (v_size == 0) {
                return 0;
        } else if (v_size == 1) {
                // One element only
                return v[0];
        } else if (v_size == 2) {
                // Two elements
                return ((v[0] + v[1]) / 2);
        } else {
                int half;
                std::sort(v.begin(), v.end());
                // Check if number of elements is odd or even
                if ((v_size % 2) == 0) {  //Even
                        half = (v_size / 2) - 1;
                        return ((v[half] + v[half + 1]) / 2);
                } else { //Odd
                        half = (v_size / 2);
                        return v[half];
                }
        }

}
