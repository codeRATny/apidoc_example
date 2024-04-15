#!/usr/bin/python

import re 
import os
import sys
import copy
from pathlib import Path
from multiprocessing import Process

def grep (file, string_search):
    file = open(file, "r")
    for line in file:
        if re.search(string_search, line):
            return line

def replace(file_in, file_insert, str_replace, start, end):
    main=open(file_in, mode='r')
    insert=open(file_insert, mode='r')
    originText=main.read()
    insertText= '\n' + start + insert.read() + end + '\n'
    main.close()
    insert.close()

    newText = originText.replace(str_replace, insertText, 1)
    write_file=open(file_in, mode='w')
    write_file.write(newText)
    write_file.close()

file_index = sys.argv[1]
file_mode = sys.argv[2]
start = sys.argv[3]
end = sys.argv[4]

line = grep(file_index, file_mode)
result = list(Path("./").rglob(file_mode))
for file in result:
    replace(file_index, file, line, start, end)

