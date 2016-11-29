#
#		Fedora 24/25 set up to install Fenics
#
#		Carlos Eduardo Arango
#		carlos.arango.gutierrez@correounivalle.edu.co
#		  
#		Last updated: Nov 29, 2016
#		https://github.com/ArangoGutierrez
#

#!/bin/bash

echo "Fedora set up to install Fenics for a WorkStation"

# dnf update

#Instal visual toolkits 
dnf -y install vtk vtk-devel

# gnu-env-base
dnf group install 'Development Tools'
dnf -y update

# dev-env
dnf -y install \ htop git wget gcc gfortran openblas
dnf -y update

echo "Now you can install Fenics on your Fedora"
echo "https://fenicsproject.org/index.html"
echo "How do you fedora?"
echo "Visit https://fedoramagazine.org/"
