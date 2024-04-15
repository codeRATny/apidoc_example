apidoc -i ../src/ -f ".*\\.h$" -f ".*\\.hpp$" -f ".*\\.cpp$" -o apidoc -p

cp apidoc/index.html index.html
python3 index.py index.html assets/bootstrap.min.css '<style>' '</style>'
python3 index.py index.html assets/prism.css '<style>' '</style>'
python3 index.py index.html assets/prism-toolbar.css '<style>' '</style>'
python3 index.py index.html assets/prism-diff-highlight.css '<style>' '</style>'
python3 index.py index.html assets/main.css '<style>' '</style>'
python3 index.py index.html assets/main.bundle.js '<script>' '</script>'

rm -rf apidoc