fswatch -o ./ | xargs -n1 -I{} ./build.sh
