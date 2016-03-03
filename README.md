# Prediccion-Dolar
Herramienta que pretende realizar una predicción precisa, a corto plazo, sobre el valor del peso Argentino, a partir del análisis en la evolución del peso desde el 2002

###Librerías
Para realizar el análisis gráfico usamos [mathgl](http://mathgl.sourceforge.net/doc_en/Main.html)
```	
Ubuntu/Debian/MacOs
[descargamos mathgl](https://sourceforge.net/projects/mathgl/)
cmake .
cmake .
make
sudo make install
sudo ldconfig
```
Luego en caso de trabajar con eclipse, agregamos la librería en el linker
```
Eclipse
	Projects -> Properties -> C/C++ Build -> Settings -> GCC C++ Linker -> Libraries -> add -> mgl
```
