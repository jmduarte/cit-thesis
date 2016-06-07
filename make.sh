pdflatex duarte_thesis
for f in *.mp; do mpost $f; done
biber duarte_thesis
pdflatex duarte_thesis
pdflatex duarte_thesis