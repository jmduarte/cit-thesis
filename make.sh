pdflatex duarte_thesis
for f in *.mp; do mpost $f; done
bibtex duarte_tehsis
pdflatex duarte_thesis
pdflatex duarte_thesis