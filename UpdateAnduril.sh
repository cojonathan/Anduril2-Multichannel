#!/bin/bash

upgrade (){
    local bzrRepositoryRoot=$1
    local gitRepositoryRoot=$2
    local cleaningList=$3
    xargs -a $cleaningList -I{} -d'\n' rm -rf $bzrRepositoryRoot/anduril2/ToyKeeper/{}
    sed -i 's/..\/..\/..\/bin\/build.sh/..\/..\/bin\/build.sh/g' $bzrRepositoryRoot/anduril2/ToyKeeper/spaghetti-monster/anduril/build-all.sh
    sed -i 's/echo "FAIL:$FAILED"/echo "FAIL:$FAILED"\n  exit 1/g' $bzrRepositoryRoot/anduril2/ToyKeeper/spaghetti-monster/anduril/build-all.sh
    mv -f $bzrRepositoryRoot/anduril2/bin/ $bzrRepositoryRoot/anduril2/ToyKeeper/
    mv -f $bzrRepositoryRoot/anduril2/ToyKeeper/COPYING $bzrRepositoryRoot/LICENSE
    cd $bzrRepositoryRoot/anduril2/ToyKeeper/
    cp -rf * $gitRepositoryRoot
    git add
    git commit -m $gitmessage
    }
    

if [[ -z $1 ]];
then 
    echo "Too few arguments."
else
    case $1 in

        update | pull)
            if [ -z $2 ];
            local bzrRepositoryRoot=$2
            then 
                echo "Missing directory."
            else
            mkdir -p $bzrRepositoryRoot
            cd $bzrRepositoryRoot
            bzr branch lp:~toykeeper/flashlight-firmware/anduril2
            fi
        ;;
        upgrade)
            if  [ -z $2 ] || [ -z $3 ] || [ -z $4 ];
            then 
                echo "Missing directory/s."
            else
                local bzrRepositoryRoot=$2
                local gitRepositoryRoot=$3
                local cleaningList=$4

                if [-s revno]
                    cd $bzrRepositoryRoot
                    export gitmessage=$(bzr log --short -l $(expr $(bzr revno) - $(cat revno))
                    bzr revno > revno

                elif [bzr revno > cat revno 2>/dev/null]
                    cd $bzrRepositoryRoot
                    export gitmessage=$(bzr log --short -l 1)
                    bzr revno > revno
                    
                elif [bzr revno == cat revno]
                    echo "No need for update."
                    exit 0
                else
                    echo "unknown error"
                    exit 1
                fi
            fi
        ;;
    esac
fi