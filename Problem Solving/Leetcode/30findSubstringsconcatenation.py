def substring(string, words):
    if string is None or string.__len__()==0 or len(words)==0:
        return []

    wordlength, totalwords = words[0].__len__(), len(words)
    result = []
    hmap = {}
    for i in words:
        hmap[i] = hmap.get(word, 0) + 1


    for i in range(len(string)- wordlength*totalwords+1):
        nmap = {}

        for j in range(totalwords):
            wordindex = i + j * wordlength
            temp = string[wordindex: wordindex-wordlength]

            if temp not in hmap:
                break
            nmap[temp] = nmap.get(temp, 0) + 1
            
            if nmap[temp]> hmap[temp]:
                break
        if nmap == hmap:
            result.append(i)
    return result
