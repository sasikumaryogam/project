#!/bin/bash
echo files
for project in *
do
if [ -x $project ]
then
echo $project
#ls -lashr $project
#du -a -h $project
fi
done 
