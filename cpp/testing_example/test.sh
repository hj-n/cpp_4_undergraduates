file="fibo.cpp"

g++ -o program $file

index=1
for item in $PWD/in/*
do
    input=$(cat $item)
    result=$(cat $item | ./program)
    fileName="$PWD/out/$index.out"
    answer=$(cat $fileName)
    echo "========================="
    if (($result == $answer));
    then
        echo "Test #$index: Right!!"
    else
        echo "Test #$index: Wrong!!"
        echo "------ INPUT ------"
        echo "$input"
        echo "--- YOUR RESULT ---"
        echo "$result"
        echo "------ ANSWER -----"
        echo "$answer"
    fi
    let "index += 1"
done


rm program