## Imagenes 
Las imajenes se guardan digitalmente de dos maneras:

-Por un lado (Raster) Podemos hacer una Matriz de puntos (Mapa de bits) y a cada punto le asignamos un color (Pixel)

## Resolucion
Un mapa de bits tiene un tamaño concreto de A * B 
La resolucion se puede expresar de diferentes formas.
-N Total de pixeles , normalmente MP (megapixeles)
Esto es el numero que resulta de A * B en millones de pixeles.

## lineas horizontales
-Lineas Horizontales . En video se utiliza la cantidad de lineas horizontales , normalmente se asume una proporcion concreta entre A y B , po ejemplo 4/3 o 16/9
Las lineas horizontales suelen ser 
240 p (240 pixeles de alta )
480 p 
1080 p (1080 pixeles de alta)
2 k 
4 k 

## Arhivo
-Un archivo puede expresar su resolucion pidiendo A* D 
Por ejemlo una imajen de 350 * 250 pixeles, se utiliza cuando hablamos de archivo concretos 
NO CONFUNDIR con la resolucion de impresion 
medida en puntos por pulgada.

## Sistema para detallar los colores 
 
-RyG(RealGreenBlue) para pantalla
-CMYK para imprimir 
-Colores inscapes


## Formatos communes 
 -JPG
 -GIF 
 -PNG
 -TIFF
 
 Otros particulares 
 -PSD
 
 
 ### imagen png:
 ![](https://www.footyrenders.com/render/ansu-fati-21.png)
 
 ### GIF:
 ![](https://1.bp.blogspot.com/-mSaKiXhGEP4/XbBFzwyTqkI/AAAAAAAAA38/ad94ZhjQ9KAYRUCiF1tKmySF8aRc4J_oQCLcBGAsYHQ/s1600/697b023b-64a5-49a0-8059-27b963453fb1.gif)
 
 ## Imagenes Vectoriales
  Se define la imagen como un conjunto de formas (lineas,puntos...) cada una de estas formas esta definido matematicamente.
  
  ### Formatos 
  .SVG (SCALABLE VECTOR GRAPHIC)
  
  .EPS 
  
  Especificos:
  
  .DWG 
 
  Formato Mezcla , Raster y Vectorial.
  
  .PDF (Portable Document Format)
  
  ### Rasterizar imagen:
 (jpg,gif,png)=Imagen Raster-------> Vectorizar-----> Imagen vectorial=(SVG,EPS)
 Imagen vectorial-------->Rasterizar------>Imagen Raster.
 
 Rasterizamos una imagen, cuando pasamos de una imagen a una imagen raster (mapa de bits).
 
 Vectorizar es pasar de un mapa de bits (Imagen Raster) a formato vectorial.
 
 
 ### Ejercicio Vectorizacion 
 
 Vamos a tomar la imagen del cuadro del leon de Rosa Bonheur.
 
 Esta es la imagen Rasterizada original.
 
 
 ![imagen](https://user-images.githubusercontent.com/90753272/138074710-53badcb6-dfa7-4d82-9460-6af0782a6536.png)
 
 [Fuente](https://www.museodelprado.es/coleccion/obra-de-arte/el-cid/19984271-9cb6-476d-8655-f012e1fec1bf)
 
### Inskape
abrimos inskape , Tamaño Personalizado

anchop 600 alto 1000

Añadimos la imagen de internet 

Archivo ---> Importar

Arastrar la imagen

copiar y pegar la imagen 

clic derecho en la imagen ------> vectorizar mapa de bits


### Explicacion del cuadro de vectorizar 

![imagen leon ](https://user-images.githubusercontent.com/90753272/138080528-ca0bf132-20bf-4fe4-8e2f-6913103fd397.png)

Existen varias opciones :

Lo primero es decir ;

 Si el programa hara una o mas pasadas.
 
 Con una unica pasada SIEMRE obtendremos 
 
 una imagen en blanco y negro (que podremos colorear despues)
 
 .Una unica pasada 
 
 Tenemos corte  de luminosidad ----> cuantinizacion de colores ---> zonas en color similares 
 
 Deteccion de bordes :
 
 -Revisa el contraste entre pixeles.
  
  
 ### Varias pasadas
 
 Nos permite hacer una imagen vectorial mas compleja , con varios grises o colores.
 Esto necesita mas capacidad de proceso
 
 Leon 1.![imagen](https://user-images.githubusercontent.com/90753272/138083031-43490172-6e75-4fe7-a316-5824001a6ab7.png)

Despues de importar el leon vamos a ajustar ,el lienzo .

Para ello vamos a propiedades de documento a tamaño vamos a ajustar pagina a contenido 

Seleccionamos la imagen y pulsamos el boton ajustar pagina a contenido o seleccion 

(captura)![captura leon ](https://user-images.githubusercontent.com/90753272/138083530-5c11df9f-0e2e-4274-9bbe-c51018ac87a3.png)










