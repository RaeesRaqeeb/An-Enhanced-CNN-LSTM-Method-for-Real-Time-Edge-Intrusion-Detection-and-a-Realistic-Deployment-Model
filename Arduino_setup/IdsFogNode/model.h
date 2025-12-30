#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[33] <= 63.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[8] <= 0.17999999970197678) {
                                if (x[32] <= 771.0) {
                                    if (x[33] <= 317.1600036621094) {
                                        if (x[36] <= 0.005820714170113206) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[36] <= 0.00016720056009944528) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[31] <= 57.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[16] <= 0.5949999988079071) {
                                    if (x[35] <= 921.7900085449219) {
                                        if (x[30] <= 9497.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[8] <= 0.6500000059604645) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #2
                        if (x[30] <= 36121.0) {
                            if (x[2] <= 72.9900016784668) {
                                if (x[16] <= 0.07500000111758709) {
                                    if (x[7] <= 0.07000000029802322) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[33] <= 76.57999992370605) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[33] <= 63.31500053405762) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[28] <= 0.4599999934434891) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 13.34000015258789) {
                                    if (x[17] <= 0.32500000298023224) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[16] <= 0.009999999776482582) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[30] <= 24433.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 1469.5701293945312) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[26] <= 0.5900000035762787) {
                                if (x[37] <= 289663.203125) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[22] <= 0.7100000083446503) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #3
                        if (x[22] <= 0.17999999970197678) {
                            if (x[32] <= 497.5) {
                                if (x[34] <= 11.482932567596436) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 2.9000000953674316) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[7] <= 0.0400000000372529) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[37] <= 293135.9375) {
                                    if (x[3] <= 19431.2158203125) {
                                        if (x[32] <= 1808.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[36] <= 0.00026553274074103683) {
                                if (x[35] <= 65.64500045776367) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= 0.004999999888241291) {
                                        if (x[35] <= 259.6000061035156) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[11] <= 21.0) {
                                    if (x[16] <= 0.05000000074505806) {
                                        if (x[23] <= 0.15500000584870577) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[7] <= 0.009999999776482582) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[33] <= 63.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[22] <= 0.08999999985098839) {
                                if (x[1] <= 9.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[30] <= 10605.0) {
                                        if (x[3] <= 556.638786315918) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[31] <= 61.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 0.2500000074505806) {
                                    if (x[11] <= 11.0) {
                                        if (x[5] <= 0.5799999907612801) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[36] <= 0.0007256889366544783) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #5
                        if (x[32] <= 64.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[30] <= 36121.0) {
                                if (x[36] <= 0.00032938837830442935) {
                                    if (x[31] <= 63.0) {
                                        if (x[30] <= 3330.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[31] <= 134.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[29] <= 0.4599999934434891) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[30] <= 6000.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[37] <= 289663.203125) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[34] <= 639.8645935058594) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[11] <= 42.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }