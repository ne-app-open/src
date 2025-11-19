#! /bin/sh

outputDir=dist/

mkdir -p $outputDir

for f in *.hpp; do
baseName=`echo $f | cut -d "." -f 1`
echo "RUN:" ditto $baseName.hpp $outputDir$baseName
ditto $baseName.hpp $outputDir$baseName
done
