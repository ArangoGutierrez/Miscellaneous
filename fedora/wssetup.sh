#
#		Fedora base-dev set up for a WorkStation
#
#		Carlos Eduardo Arango
#		carlos.arango.gutierrez@correounivalle.edu.co
#		  
#		Last updated: Nov 29, 2016
#		https://github.com/ArangoGutierrez
#

#!/bin/bash

echo "Fedora base-dev set up for a WorkStation"

# Update Vi
dnf -y install vim

# Activate RPMFusion Repository is you come from a fresh install ( Uncomment) 
# rpm -ivh http://download1.rpmfusion.org/free/fedora/rpmfusion-free-release-24.noarch.rpm
# dnf update

# Install Spotify (Uncomment if you come from a fresh install)
# dnf config-manager --add-repo=http://negativo17.org/repos/fedora-spotify.repo
# dnf install spotify-client

# Install Google Chrome (Uncomment if you come from a fresh install)
#cat << EOF > /etc/yum.repos.d/google-chrome.repo
#[google-chrome]
#name=google-chrome - \$basearch
#baseurl=http://dl.google.com/linux/chrome/rpm/stable/\$basearch
#enabled=1
#gpgcheck=1
#gpgkey=https://dl-ssl.google.com/linux/linux_signing_key.pub
#EOF
#dnf install google-chrome-stable

#Instal visual toolkits 
dnf -y install \ vlc gimp vtk

# Add Java support
dnf -y install java-openjdk icedtea-web

# gnu-env-base
dnf group install 'Development Tools'
dnf -y update


# dev-env
dnf -y install \ htop git wget gcc gfortran openblas vtk-devel unzip
dnf -y update

echo "You now have a working Fedora WorkStation!!"
echo "Congrats!!"
echo "How do you fedora?"
echo "Visit https://fedoramagazine.org/"
