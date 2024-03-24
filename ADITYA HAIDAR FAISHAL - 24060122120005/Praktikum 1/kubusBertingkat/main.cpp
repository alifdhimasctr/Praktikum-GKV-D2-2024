/*
Nama Program	: kubusBertingkat
Pembuat			: Aditya Haidar Faishal
NIM				: 24060122120005
Tanggal			: 22 Februari 2024
Deskripsi		: Membuat Gambar Kubus bertingkat dari objek primitif sekreatif mungkin. (minimal 5 kubus)
*/

#include <GL/glut.h>

void SapiDarman(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(-200, 200, -200, 200); 
    
/////////GUIDE Koordinat//////////////
//    //TOP
//	glColor3f(0.0f, 0.0f, 0.0f); //hitam
//	glRecti(-5,125 ,5,115);
//	
//	//MIDDDDD
//	glColor3f(1.0f, 0.0f, 0.0f); //meraaag
//	glRecti(-5,5 , 5,-5);
//	
//	//MIDDDDD kanan 1
//	glColor3f(0.0f, 0.0f, 0.0f); //meraaag
//	glRecti(5,5 , 15,-5);
//	
//	//MIDDDDD bawaah 1
//	glColor3f(0.0f, 0.0f, 0.0f); //meraaag
//	glRecti(-5,-5 , 5,-15);
//	
//	//BOT
//	glColor3f(1.0f, 0.0f, 0.0f); //meraaag
//	glRecti(-5,-115 , 5,-125);
//	
	
	
  	//urutan pixell kebaawah
  	
  	//1
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-35,125 , 35,115);
	
	//2
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(35,115 , 55,105);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-35,115 , -55,105);//miror
	
	glColor3f(1.0f, 0.0f, 0.0f); //meraaaah
	glRecti(-35,115 , 35,105);
	
	//3 dan 4
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(55,105 , 65,85);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-55,105 , -65,85);//miror
	
	glColor3f(1.0f, 0.0f, 0.0f); //mrah
	glRecti(-55,105 , 55,85);
	
	
	//5
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(35,85 , 55,75);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-35,85 , -55,75);//mirror
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah 1 pixel
	glRecti(55,85 , 65,75);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah 1 pixel
	glRecti(-55,85 , -65,75);//mirror
	
	glColor3f(1.0f, 0.0f, 0.0f); //meraaah fill
	glRecti(-35,85 , 35,75);
	
	//6
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(55,75 , 65,65);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-55,75 , -65,65);//mirror
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(25,75 , 35,65);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-25,75 , -35,65);//mirror
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah fill
	glRecti(-25,75 , 25,65);
	
	//7
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(15,65 , 25,55);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-15,65 , -25,55);//mirror
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah fill
	glRecti(-15,65 , 15,55);
	
	
	//8
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(5,55 , 15,45);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-5,55 , -15,45);//mirror
	
	glColor3f(1.0f, 0.0f, 0.0f); //fiolll m,erah
	glRecti(5,55 , -5,45);
	
	
	//panjangm samping
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(65,85 ,75,25);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-65,85 ,-75,25);//mirror
	
	//panjang tengh/ 9 daan 10
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-5,45 , 5,25);
	
	//11
	glColor3f(1.0f, 0.0f, 0.0f); //merah fill
	glRecti(-5,25 , 5,15);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(5,25 , 15,15);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-5,25 , -15,15);//mirror

	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(45,25 , 65,15);	
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-45,25 , -65,15);	
	
	//12
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(55,15 , 65,5);	
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-55,15 , -65,5);//mirro

	glColor3f(1.0f, 0.0f, 0.0f); //merrah ipixell
	glRecti(45,15 , 55,5);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merrah
	glRecti(-45,15 , -55,5);//mirror
	
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(15,15 , 45,5);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-15,15 , -45,5);//mirror
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah fill
	glRecti(-15,15 , 15,5);
	
	//13
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(45,5 , 55,-5);	
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-45,5 , -55,-5);	//mirror	
	
	glColor3f(1.0f, 0.0f, 0.0f); //merrh fill
	glRecti(-45,5 , 45,-5);	

	//14
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(25,-5 , 45,-15);	

	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-25,-5 , -45,-15);	//mirror	
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah fill
	glRecti(-25,-5 , 25,-15);	
	
	//15
	glColor3f(0.0f, 0.0f, 0.0f); //hitam line dagu
	glRecti(-25,-15 , 25,-25);
	
	glColor3f(1.0f, 0.0f, 0.0f); //meraah
	glRecti(25,-15 , 45,-25);
	
	glColor3f(1.0f, 0.0f, 0.0f); //meraah
	glRecti(-25,-15 , -45,-25);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(45,-15 , 55,-25);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-45,-15 , -55,-25);//mirror	
	
	//16
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(55,-25 , 65,-35);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-55,-25 , -65,-35);
	
	glColor3f(1.0f, 0.0f, 0.0f); //meraah 1 line
	glRecti(-55,-25 , 55,-35);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-5,-25 , 5,-35);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(15,-25 , 25,-35);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-15,-25 , -25,-35);//mirror
	
	//17
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(65,-35 , 75,-45);

	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-65,-35 , -75,-45);//mirror
	
	glColor3f(0.0f, 0.0f, 1.0f); //biru 1line
	glRecti(-65,-35 , 65,-45);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah bwh dagu
	glRecti(-25,-35 , 25,-45);
	
	glColor3f(0.0f, 0.0f, 0.0f); //item tengah
	glRecti(-15,-35 , 15,-45);
	
	
	//Lining badaan samping
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(35,-35 , 45,-75);

	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-35,-35 , -45,-75);//mirror	
	
	
	//tangan
	glColor3f(0.0f, 0.0f, 1.0f); //biru
	glRecti(45,-45 , 55,-55);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(45,-55 , 55,-65);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah kotak
	glRecti(55,-45 , 75,-65);
	
	glColor3f(0.0f, 0.0f, 0.0f); //line item bawah
	glRecti(55,-65 , 75,-75);
	
	glColor3f(0.0f, 0.0f, 0.0f); //line item kanan
	glRecti(75,-45 , 85,-65);
	
	//tangan satunnya lagi dimiror
	glColor3f(0.0f, 0.0f, 1.0f); //biru
	glRecti(-45,-45 , -55,-55);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-45,-55 , -55,-65);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah kotak
	glRecti(-55,-45 , -75,-65);
	
	glColor3f(0.0f, 0.0f, 0.0f); //line item bawah
	glRecti(-55,-65 , -75,-75);
	
	glColor3f(0.0f, 0.0f, 0.0f); //line item kanan
	glRecti(-75,-45 , -85,-65);
	
	
	//fill badan
	glColor3f(0.0f, 0.0f, 1.0f); //biru fill 1line
	glRecti(-35,-45 , 35,-55);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam line 
	glRecti(-25,-45 , 25,-55);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah
	glRecti(15,-45 , 5,-55);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah
	glRecti(-15,-45 , -5,-55);//mirror
	
	glColor3f(1.0f, 0.0f, 0.0f); //merh fill 1line
	glRecti(-35,-55 , 35,-65);
	
	glColor3f(0.0f, 0.0f, 1.0f); //biru fill 1line
	glRecti(-35,-65 , 35,-75);
	
	
	//kaki atas
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-45,-75 , -55,-95);//miror
	
	glColor3f(0.0f, 0.0f, 1.0f); //biru line
	glRecti(-45,-75 , 45,-95);
	
	glColor3f(0.0f, 0.0f, 0.0f); //item bawah kaki
	glRecti(-15,-85 , 15,-95);
	
	//kaki bawah [kanan]
	glColor3f(0.0f, 0.0f, 0.0f); //item kiri
	glRecti(15,-95 , 25,-115);
	
	glColor3f(0.0f, 0.0f, 0.0f); //item kanan
	glRecti(55,-95 , 65,-115);
	
	glColor3f(0.0f, 0.0f, 0.0f); //item bawah
	glRecti(15,-115 , 65,-125);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah fill
	glRecti(25,-95 , 55,-115);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(45,-75 , 55,-105);
	
	//kaki bawah [kiri]
	glColor3f(0.0f, 0.0f, 0.0f); //item kiri
	glRecti(-15,-95 , -25,-115);
	
	glColor3f(0.0f, 0.0f, 0.0f); //item kanan
	glRecti(-55,-95 , -65,-115);
	
	glColor3f(0.0f, 0.0f, 0.0f); //item bawah
	glRecti(-15,-115 , -65,-125);
	
	glColor3f(1.0f, 0.0f, 0.0f); //merah fill
	glRecti(-25,-95 , -55,-115);
	
	glColor3f(0.0f, 0.0f, 0.0f); //hitam
	glRecti(-45,-75 , -55,-105);

   	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800,800);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("SapiDarman");
    glutDisplayFunc(SapiDarman);
    
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Putih
    
    glutMainLoop();
    return 0;
}

