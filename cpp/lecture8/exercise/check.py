import os;

# write down your compiler / output
compiler = "g++"
output = "./a.out"

cpp_files = ["v1", "v2", "v3", "v4", "v5", "v6",
             "s1", "s2", "s3", "s4",
             "c1", "c2"]

for file in cpp_files:
    file_name = "./code/" + file + ".cpp"
    os.system(compiler + " " + file_name)
    result_raw = os.popen(output)
    result = result_raw.read()
    answer_file_name = "./answer/" + file + ".txt"
    f = open(answer_file_name, "r")
    answer = f.read()
    f.close()
    
    file_num = file[1]
    if file[0] == "v":
        test = "Vector Test   "
    elif file[0] == "s":
        test = "Stack Test    "
    else:
        test = "Combined Test "
    
    result_str = test + file_num + " (" + file + ".cpp" +")" +  ": " 
    if (answer == result):
        result_str = result_str + "PASS!!"
    else:
        result_str = result_str + "Wrong"
        
    print(result_str);
            
        