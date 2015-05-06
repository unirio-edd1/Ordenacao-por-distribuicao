Uma aplicação interessante de fila é a **ordenação por distribuição**, descrita a seguir. Seja uma lista L composta de n chaves, cada qual representada por um número inteiro em uma base b > 1. O problema consiste em ordenar essa lista. O algoritmo utiliza b filas, denotadas por fi, 0 ≤ i ≤ b − 1. Seja d o comprimento máximo da representação das chaves na base b. O algoritmo efetua d iterações, em cada uma das quais a lista L é percorrida. A primeira iteração considera o dígito da posição 1 (unidade) da chave. Se este for igual a k, a chave correspondente será removida da lista L e inserida na fila fk. Ao terminar o percurso da lista L, esta se encontra vazia e distribuída pelas filas. Em seguida, deve-se incluir na lista L os elementos das filas em sequencia, isto é, primeiro os elementos de f0, depois os de f1, f2, etc. Para a nova lista L, em ordem diferente da original, o processo deve ser repetido levando-se em consideração o segundo dígito da chave, e assim sucessivamente até que tenham sido feitas tantas distribuições quantos são os d ́ıgitos na chave de ordenação. Note que é necessário conhecer d, o número máximo de dígitos da lista L.
