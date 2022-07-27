for u in "$@"
    do 
	  tr '[a-z]' '[A-Z]' < "$u"
    done
