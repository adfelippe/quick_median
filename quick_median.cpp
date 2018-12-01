/* 
 * Simple CPP implementation to calculate median
 * returning a double from a double vector
 * This code is based on the Welford's method
 */
double quick_median(vector<double> &v)
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
                sort(v.begin(), v.end());
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

