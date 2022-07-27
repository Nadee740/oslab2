ls | echo "The Directory has" $(wc -l) "files"
echo "All extensions in the file are: -->"
find . -type f | perl -ne 'print $1 if m/\.([^.\/]+)$/' | sort -u
echo "The no of files with the corresponding extension:-->"
find . -type f | sed 's/.*\.//' | sort | uniq -c
