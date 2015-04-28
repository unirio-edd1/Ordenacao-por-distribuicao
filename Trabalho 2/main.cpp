//
//  main.cpp
//  Trabalho 2
//
//  Created by Diogo Martins on 4/28/15.
//  Copyright (c) 2015 Diogo Martins. All rights reserved.
//

#include <iostream>
#include "lista.h"
#include "orddist.h"
#include <cstdlib>

int main(int argc, const char * argv[]) {
    orddist o;
    o.carrega();
    o.ordena();
    system("pause");
    return 0;
}
