That app let you opportunity to create your 3D model by points. The first of all, you can obtain personal account and storage for your models in database. You can do the following operations on model: create new ( create new 3D model), show 3D model ( that will show your 3D model in separate window), remove ( remove selected model). 
3D model creation process:
You add new row (quantity row appropriate quantity edge that your model should have)
Then input coords the first point and the point that will link with current.

Example:

x	|	y	|	z	|	x2	|	y2	|	z2	|

0	|	0	|	0	|	1 	|	1	  |	1	  |

That mean point(0,0,0) will be connected with point(1,1,1) and when you click "show model" you'll see line.


Short guide:

The first of all you must have installed packages for work with postgresql database on your device.
1. Open Qt_3DModel(Linux) or Qt_3DModel.exe (Windows) then you'll see Log In form:
![Log_In_Form](https://github.com/TonyEastwood/Qt_3dMode_Storage/blob/master/img/1.jpg)
2. Input your username and password. If you don't have any account then try input following:

username: net

password: net3

3. Then the Main form will be opened:

![Main_Form](https://github.com/TonyEastwood/Qt_3dMode_Storage/blob/master/img/2.jpg)

You'll see the next one:

a) Quantity objects that your account have at the moment;

b) Name that has the currently selected model;

c) Object list - you can choose your model from list, if quantity more than zero;

d) Open form for model create;	(see item 4. )

e) Show 3D model that you choose from Objects list;

f) Remove 3D model that you choose from Objects list;

g) Update data on Main form ( if you added model, but can't see it)

4. 3D model creation:

![Form_Create](https://github.com/TonyEastwood/Qt_3dMode_Storage/blob/master/img/3.jpg)

a) Input name for your model ( default - object)

b) Add row that appropriate quantity edge that your model will have.

c) Enter the coords of pairs of points that will linked.

(if you leave empty cells, that mean coords will assign as zero)

d) Click "Submit" to add it to database.

5. On main form just click "Update" to see changes.

![Form_Update](https://github.com/TonyEastwood/Qt_3dMode_Storage/blob/master/img/4.jpg)

6. Then choose model from your list and click "Show 3D model" to see it in separate window.

![Show_Model](https://github.com/TonyEastwood/Qt_3dMode_Storage/blob/master/img/5.jpg)

Also you can rotate, do zoom in and zoom out model, for your convenience;

![Zoom_Out](https://github.com/TonyEastwood/Qt_3dMode_Storage/blob/master/img/6.jpg)




