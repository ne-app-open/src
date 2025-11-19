#! /bin/sh

outputDir=dist/lib/

mkdir -p $outputDir

for f in *.hpp; do
baseName=`echo $f | cut -d "." -f 1`
echo "RUN:" cp --parents $f.hpp $outputDir$baseName
cp --parents $f.hpp $outputDir$baseName
done

