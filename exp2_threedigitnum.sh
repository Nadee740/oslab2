for (( i = 1; i <=3; i++ )); do
  for (( j = 0; j < 4; j++ )); do
    for (( k = 0; k < 4; k++ )); do
      echo $(($i*100 + $j*10 + $k))
    done
  done
done
