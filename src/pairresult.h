// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2021 The Hempy Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HempyCoin_PAIRRESULT_H
#define HempyCoin_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //HempyCoin_PAIRRESULT_H
