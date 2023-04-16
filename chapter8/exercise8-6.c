
/* Calculators, watches, and other electronic devices often rely on seven-segment displays for numerical output. To form
 * a digit, such devices "turn on" some of the seven segments while leaving others "off". Suppose that we want to set up
 * an array that remembers which segments should be "on" for each digit. Let's number the segments as follows:
 *   0
 *   _
 * 5|6|1
 *   _
 * 4|6|2
 *   _
 *   3
 * Here's what the array might look like, with each row representing one digit:
 * const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...}
 * I've given you the first row of the intialiser; fill in the rest.
 */

int main()
{
    /* finish initialiser so that electronic device would display 0 - 9 */
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1},
                                 {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                                 {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, 0, 1, 1}};
}
