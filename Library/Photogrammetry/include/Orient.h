
/*
    Copyright 2010 University of Twente and Delft University of Technology
 
       This file is part of the Mapping libraries and tools, developed
  for research, education and projects in photogrammetry and laser scanning.

  The Mapping libraries and tools are free software: you can redistribute it
    and/or modify it under the terms of the GNU General Public License as
  published by the Free Software Foundation, either version 3 of the License,
                   or (at your option) any later version.

 The Mapping libraries and tools are distributed in the hope that it will be
    useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                GNU General Public License for more details.

      You should have received a copy of the GNU General Public License
          along with the Mapping libraries and tools.  If not, see
                      <http://www.gnu.org/licenses/>.

----------------------------------------------------------------------------*/



/*
 * $Log$
 * Revision 1.3  2010/07/09 08:40:02  WINDOWSNT\rutzinger
 * update of folders Library and Tools
 * - removal of NR tags in Makefiles and dev-files
 * - adding GNU Licence header to *.dev, *.cc, *.cpp, *.c, *.win, *.linux, *.h
 *
 * Revision 1.2  2010/06/15 14:41:21  WINDOWSNT\vosselman
 * Prepared for adding copyright texts
 *
 * Revision 1.1  2006/04/06 14:08:00  WINDOWSNT\vosselman
 * *** empty log message ***
 *
 * Revision 1.1.1.1  2005/09/22 11:35:58  vosselm
 * Initial creation of TU Delft - ITC module
 *
 * Revision 1.1  2005/07/07 07:21:13  WINDOWSNT\heuel
 * first release
 *
 * Revision 1.1  2005/07/04 13:43:43  WINDOWSNT\heuel
 * first release, modified version for MinGW (SH)
 *
 * Revision 1.1.1.1  2003/04/09 11:07:37  rabbani
 * basic photogrammetric classes and functions (orientation, in/output, matrices, ...
 *
 * Revision 1.1.1.1  2003/03/07 13:17:28  pfeifer
 * Orientation of images
 *
 * Revision 1.1.1.1  2003/03/03 14:11:29  rabbani
 * Routines for image orientation
 *
 */
 
/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>> <<<<<<<<<<<<<<<<<<<<<<<<<<
   >>>>
   >>>>       Purpose: Definitions and prototypes for library Orient
   >>>>
   >>>>       Toolbox: $PHOTOGRAMMETRY
   >>>>
   >>>>    Written By: Your name goes here!
   >>>>
   >>>>          Date: 
   >>>>
   >>>> Modifications:
   >>>>
   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>> <<<<<<<<<<<<<<<<<<<<<<<<<< */

#ifndef _Orient_h_
#define _Orient_h_


	/*-------------------------------------*
	|       #include
	---------------------------------------*/


	/*-------------------------------------*
	|       #defines
	---------------------------------------*/


	/*-------------------------------------*
	|       typedefs
	---------------------------------------*/


	/*-------------------------------------*
	|       global variable declarations
	---------------------------------------*/


	/*-------------------------------------*
	|       macros
	---------------------------------------*/


	/*-------------------------------------*
	|       routine definitions
	---------------------------------------*/



	/* Ghostwriter Prototypes:  Do Not Erase This Comment */

int lext2abs PROTO((Exterior *, Exterior *, Exterior *, Exterior *, Absolute *));

int lintor PROTO((ImgPts *, CamPts *, Interior *, float, float ));

int labs2ext PROTO((Exterior *, Exterior *, Absolute *, Exterior *, Exterior *));

int labsor PROTO((CtrlPts *, ModelPts *, Absolute *, int));


#endif /* _Orient_h_ */
/* Don't add after this point */
