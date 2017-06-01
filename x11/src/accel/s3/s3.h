/* $XFree86: xc/programs/Xserver/hw/xfree86/accel/s3/s3.h,v 3.48.2.1 1997/05/06 13:25:37 dawes Exp $ */
/*
 * Copyright 1992 by Kevin E. Martin, Chapel Hill, North Carolina.
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Kevin E. Martin not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  Kevin E. Martin makes no
 * representations about the suitability of this software for any purpose.
 * It is provided "as is" without express or implied warranty.
 *
 * KEVIN E. MARTIN DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL KEVIN E. MARTIN BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 */

/*
 * Modified by Amancio Hasty and Jon Tombs
 *
*/
/* $XConsortium: s3.h /main/23 1996/10/23 18:42:39 kaleb $ */


#ifndef _S3_H_
#define _S3_H_

#define S3_PATCHLEVEL "0"

#ifndef LINKKIT
#include "s3name.h"

#include "X.h"
#include "Xmd.h"
#ifndef OSKIT
#include "input.h"
#include "pixmap.h"
#include "region.h"
#include "gc.h"
#include "gcstruct.h"
#include "colormap.h"
#include "colormapst.h"
#include "miscstruct.h"
#endif /* !OSKIT */
#include "scrnintstr.h"
#ifndef OSKIT
#include "mipointer.h"
#include "cursorstr.h"
#include "windowstr.h"
#endif /* !OSKIT */
#include "compiler.h"
#include "misc.h"
#include "xf86.h"
#ifndef OSKIT
#include "regionstr.h"
#endif /* !OSKIT */
#include "xf86_OSlib.h"
#ifndef OSKIT
#include "xf86bcache.h"
#include "xf86fcache.h"
#endif /* !OSKIT */
#include "xf86Procs.h"

#include "s3Cursor.h"
#include "regs3.h"

#include "vga.h"

#include <X11/Xfuncproto.h>

#if defined(S3_MMIO) && (defined(__STDC__) || defined(__GNUC__)) && !defined(__alpha__)
# define S3_OUTW(p,n) *(volatile unsigned short *)((char *)vgaBase+(p)) = \
			(unsigned short)(n)
# define S3_OUTL(p,n) *(volatile unsigned long *)((char *)vgaBase+(p)) = \
			(unsigned long)(n)
#else
# define S3_OUTW(p,n) outw(p, n)
# define S3_OUTL(p,n) outl(p, n)
#endif

#define outw32(p,n) \
  if (s3InfoRec.bitsPerPixel == 32) { \
    outw(p,n); \
    outw(p,(n)>>16); \
  } \
  else \
    outw(p,n)

#define S3_OUTW32(p,n) \
  if (s3InfoRec.bitsPerPixel == 32) { \
    S3_OUTW(p,n); \
    S3_OUTW(p,(n)>>16); \
  } \
  else \
    S3_OUTW(p,n)

#ifdef S3_NEWMMIO
#define CMD_REG_WIDTH  0x200  	/* select 32bit command register */
#else
#define CMD_REG_WIDTH  0  	/* select 16bit command register */
#endif

#define WaitQueue16_32(n16,n32) \
  	 if (s3InfoRec.bitsPerPixel == 32) { \
	    if (n32 < 8) { \
	       WaitQueue(n32+1); \
	       SET_MULT_MISC(CMD_REG_WIDTH); \
	    } else { \
	       WaitQueue(1); \
	       SET_MULT_MISC(CMD_REG_WIDTH); \
	       WaitQueue(n32); \
	    } \
	 } \
	 else \
	    WaitQueue(n16)

#else /* !LINKKIT */
#include "X.h"
#include "input.h"
#include "misc.h"
#include "xf86.h"
#include "xf86_OSlib.h"
#endif /* !LINKKIT */

#if !defined(__GNUC__) || defined(NO_INLINE)
#define __inline__ /**/
#endif

typedef struct {
   Bool (*ChipProbe)(
#if NeedNestedPrototypes
	void
#endif
   );
   char *(*ChipIdent)(
#if NeedNestedPrototypes
	int
#endif
   );
   void (*ChipEnterLeaveVT)(
#if NeedNestedPrototypes
	int,
	int
#endif
   );
   Bool (*ChipInitialize)(
#if NeedNestedPrototypes
	int		/* scr_index */,
	ScreenPtr	/* pScreen */,
	int		/* argc */,
	char **		/* argv */
#endif
   );
   void (*ChipAdjustFrame)(
#if NeedNestedPrototypes
	int		/* x */,
	int		/* y */
   );
#endif
   Bool (*ChipSwitchMode)(
#if NeedNestedPrototypes
	DisplayModePtr	/* modes */
   );
#endif
} s3VideoChipRec, *s3VideoChipPtr;

extern ScrnInfoRec s3InfoRec;
extern unsigned short s3ChipId;
extern unsigned int s3ChipRev;

#ifndef LINKKIT
_XFUNCPROTOBEGIN

extern void (*s3ImageReadFunc)(
#if NeedFunctionPrototypes
    int, int, int, int, char *, int, int, int, unsigned long
#endif
);
extern void (*s3ImageWriteFunc)(
#if NeedFunctionPrototypes
    int, int, int, int, char *, int, int, int, short, unsigned long
#endif
);
extern void (*s3ImageFillFunc)(
#if NeedFunctionPrototypes
    int, int, int, int, char *, int, int, int, int, int, short, unsigned long
#endif
);

extern int s3DisplayWidth;
extern int s3ScissB;
/* right scissor BL 0816150096 */
extern int s3ScissR;
extern int s3Bpp;    /* Bytes per pixel */
extern int s3BppDisplayWidth;
extern int s3Weight;
extern short s3alu[];
extern pointer s3VideoMem;
extern pointer s3MmioMem;
extern pointer vgaBase;
extern ScreenPtr s3savepScreen;
extern int s3CursorStartX, s3CursorStartY, s3CursorLines;
extern unsigned char s3LinApOpt, s3SAM256;

extern int vgaCRIndex;
extern int vgaCRReg;

extern int s3ValidTokens[];

extern int s3RamdacType;
extern Bool s3DAC8Bit;
extern Bool s3UsingPixMux;
extern Bool s3Bt485PixMux;
extern Bool s3ATT498PixMux;
extern int s3Trio32FCBug;
extern int s3_968_DashBug;

#define UNKNOWN_DAC       -1
#define NORMAL_DAC         0
#define S3_TRIO32_DAC      1
#define S3_TRIO64_DAC      2
#define TI3026_DAC         3
#define TI3030_DAC         4
#define TI3020_DAC         5
#define TI3025_DAC         6
#define BT485_DAC          7
#define ATT20C505_DAC      8
#define ATT22C498_DAC      9
#define ATT498_DAC        10
#define ATT20C498_DAC      ATT498_DAC
#define ATT20C409_DAC     11
#define SC15025_DAC       12
#define STG1700_DAC       13
#define STG1703_DAC       14
#define IBMRGB524_DAC     15
#define IBMRGB525_DAC     16
#define IBMRGB528_DAC     17
#define S3_SDAC_DAC       18
#define S3_GENDAC_DAC     19
#define ATT20C490_DAC     20
#define	SS2410_DAC	  21
#define SC1148x_M2_DAC    22
#define S3_TRIO64V2_DAC   23


#define SC1148x_M3_DAC    SC1148x_M2_DAC

typedef struct {
    char *DacName;
    int DacSpeed;
    Bool (*DacProbe)(
#if NeedNestedPrototypes
	void
#endif
    );
    int (*PreInit)(
#if NeedNestedPrototypes
	void
#endif
    );
    void (*DacRestore)(
#if NeedNestedPrototypes
	void
#endif
    );
    void (*DacSave)(
#if NeedNestedPrototypes
	void
#endif
    );
    int (*DacInit)(
#if NeedNestedPrototypes
	DisplayModePtr
#endif
	);
} s3RamdacInfo;

extern s3RamdacInfo s3Ramdacs[];


#define DAC_IS_BT485_SERIES	(s3RamdacType == BT485_DAC || \
				 s3RamdacType == ATT20C505_DAC)
#define DAC_IS_TI3020_SERIES	(s3RamdacType == TI3020_DAC || \
				 s3RamdacType == TI3025_DAC)
#define DAC_IS_TI3020		(s3RamdacType == TI3020_DAC)
#define DAC_IS_TI3025		(s3RamdacType == TI3025_DAC)
#define DAC_IS_TI3026		(s3RamdacType == TI3026_DAC)
#define DAC_IS_TI3030		(s3RamdacType == TI3030_DAC)
#define DAC_IS_ATT20C498	(s3RamdacType == ATT20C498_DAC)
#define DAC_IS_ATT22C498	(s3RamdacType == ATT22C498_DAC)
#define DAC_IS_ATT498		(DAC_IS_ATT20C498 || DAC_IS_ATT22C498)
#define DAC_IS_ATT490		(s3RamdacType == ATT20C490_DAC)
#define DAC_IS_SC15025		(s3RamdacType == SC15025_DAC)
#define DAC_IS_STG1703          (s3RamdacType == STG1703_DAC)
#define DAC_IS_STG1700          (s3RamdacType == STG1700_DAC || DAC_IS_STG1703)
#define DAC_IS_SDAC             (s3RamdacType == S3_SDAC_DAC)
#define DAC_IS_GENDAC           (s3RamdacType == S3_GENDAC_DAC)
#define DAC_IS_TRIO32           (s3RamdacType == S3_TRIO32_DAC)
#define DAC_IS_TRIO64           (s3RamdacType == S3_TRIO64_DAC)
#define DAC_IS_TRIO64V2         (s3RamdacType == S3_TRIO64V2_DAC)
#define DAC_IS_TRIO             (DAC_IS_TRIO32 || DAC_IS_TRIO64 || DAC_IS_TRIO64V2)
#define DAC_IS_IBMRGB524        (s3RamdacType == IBMRGB524_DAC)
#define DAC_IS_IBMRGB525        (s3RamdacType == IBMRGB525_DAC)
#define DAC_IS_IBMRGB528        (s3RamdacType == IBMRGB528_DAC)
#define DAC_IS_IBMRGB           (DAC_IS_IBMRGB524 || DAC_IS_IBMRGB525 || DAC_IS_IBMRGB528 )
#define DAC_IS_SC1148x_M2	(s3RamdacType == SC1148x_M2_DAC)
#define DAC_IS_SC1148x_M3	(s3RamdacType == SC1148x_M3_DAC)
#define DAC_IS_SC1148x_SERIES	(DAC_IS_SC1148x_M2 || DAC_IS_SC1148x_M3)
#define DAC_IS_ATT20C409	(s3RamdacType == ATT20C409_DAC)
#define DAC_IS_SS2410		(s3RamdacType == SS2410_DAC )

/* Vendor BIOS types */

#define UNKNOWN_BIOS		-1
#define ELSA_BIOS		 1
#define MIRO_BIOS		 2
#define SPEA_BIOS		 3
#define GENOA_BIOS		 4
#define STB_BIOS		 5
#define NUMBER_NINE_BIOS	 6
#define HERCULES_BIOS		 7
#define DIAMOND_BIOS		 8


/* Function Prototypes */

/* s3Conf.c */
/* s3.c */
void s3PrintIdent(
#if NeedFunctionPrototypes
    void
#endif
);
Bool s3Probe(
#if NeedFunctionPrototypes
    void
#endif
);
#ifdef PC98
void s3ConnectPCI(
#if NeedFunctionPrototypes
	CARD16,
	CARD16
#endif
);

void s3DisconnectPCI(
#if NeedFunctionPrototypes
	CARD16,
	CARD16
#endif
);
#endif
/* s3misc.c */
Bool s3Initialize(
#if NeedFunctionPrototypes
    int,
    ScreenPtr,
    int,
    char **
#endif
);
void s3EnterLeaveVT(
#if NeedFunctionPrototypes
    Bool,
    int 
#endif
);
Bool s3CloseScreen(
#if NeedFunctionPrototypes
    int,
    ScreenPtr
#endif
);
Bool s3SaveScreen(
#if NeedFunctionPrototypes
    ScreenPtr,
    Bool 
#endif
);
Bool s3SwitchMode(
#if NeedFunctionPrototypes
    DisplayModePtr 
#endif
);
void s3DPMSSet(
#if NeedFunctionPrototypes
    int PowerManagementMode
#endif
);
void s3AdjustFrame(
#if NeedFunctionPrototypes
    int,
    int 
#endif
);

void s3SetVidPage(
#if NeedFunctionPrototypes
    int
#   endif
);

/* s3cmap.c */
int s3ListInstalledColormaps(
#if NeedFunctionPrototypes
    ScreenPtr,
    Colormap *
#endif
);
void s3RestoreDACvalues(
#if NeedFunctionPrototypes
    void
#endif
);
int s3GetInstalledColormaps(
#if NeedFunctionPrototypes
    ScreenPtr,
    ColormapPtr *
#endif
);
void s3StoreColors(
#if NeedFunctionPrototypes
    ColormapPtr,
    int,
    xColorItem *
#endif
);
void s3InstallColormap(
#if NeedFunctionPrototypes
    ColormapPtr 
#endif
);
void s3UninstallColormap(
#if NeedFunctionPrototypes
    ColormapPtr 
#endif
);
void s3RestoreColor0(
#if NeedFunctionPrototypes
    ScreenPtr 
#endif
);
#ifndef OSKIT
/* s3gc.c */
Bool s3CreateGC(
#if NeedFunctionPrototypes
    GCPtr 
#endif
);
/* s3gc16.c */
Bool s3CreateGC16(
#if NeedFunctionPrototypes
    GCPtr 
#endif
);
/* s3gc24.c */
Bool s3CreateGC24(
#if NeedFunctionPrototypes
    GCPtr 
#endif
);
/* s3gc32.c */
Bool s3CreateGC32(
#if NeedFunctionPrototypes
    GCPtr 
#endif
);
/* s3fs.c */
void s3SolidFSpans(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    DDXPointPtr,
    int *,
    int 
#endif
);
void s3TiledFSpans(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    DDXPointPtr,
    int *,
    int 
#endif
);
void s3StipFSpans(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    DDXPointPtr,
    int *,
    int 
#endif
);
void s3OStipFSpans(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    DDXPointPtr,
    int *,
    int 
#endif
);
/* s3ss.c */
void s3SetSpans(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    char *,
    DDXPointPtr,
    int *,
    int,
    int 
#endif
);
/* s3gs.c */
void s3GetSpans(
#if NeedFunctionPrototypes
    DrawablePtr,
    int,
    DDXPointPtr,
    int *,
    int,
    char *
#endif
);
/* s3win.c */
void s3CopyWindow(
#if NeedFunctionPrototypes
    WindowPtr,
    DDXPointRec,
    RegionPtr 
#endif
);
#endif /* !OSKIT */
/* s3init.c */
void s3CleanUp(
#if NeedFunctionPrototypes
    void
#endif
);
Bool s3Init(
#if NeedFunctionPrototypes
    DisplayModePtr 
#endif
);
void s3InitEnvironment(
#if NeedFunctionPrototypes
    void
#endif
);
void s3Unlock(
#if NeedFunctionPrototypes
    void
#endif
);
/* s3im.c */
void s3ImageInit(
#if NeedFunctionPrototypes
    void
#endif
);
void s3ImageWriteNoMem(
#if NeedFunctionPrototypes
    int,
    int,
    int,
    int,
    char *,
    int,
    int,
    int,
    short,
    unsigned long
#endif
);
#ifndef OSKIT
void s3ImageStipple(
#if NeedFunctionPrototypes
    int,
    int,
    int,
    int,
    char *,
    int,
    int,
    int,
    int,
    int,
    Pixel,
    short,
    unsigned long
#endif
);
void s3ImageOpStipple(
#if NeedFunctionPrototypes
    int,
    int,
    int,
    int,
    char *,
    int,
    int,
    int,
    int,
    int,
    Pixel,
    Pixel,
    short,
    unsigned long 
#endif
);
/* s3bstor.c */
void s3SaveAreas(
#if NeedFunctionPrototypes
    PixmapPtr,
    RegionPtr,
    int,
    int,
    WindowPtr 
#endif
);
void s3RestoreAreas(
#if NeedFunctionPrototypes
    PixmapPtr,
    RegionPtr,
    int,
    int,
    WindowPtr 
#endif
);
#endif /* !OSKIT */
/* s3scrin.c */
Bool s3ScreenInit(
#if NeedFunctionPrototypes
    ScreenPtr,
    pointer,
    int,
    int,
    int,
    int,
    int 
#endif
);
#ifndef OSKIT
/* s3blt.c */
RegionPtr s3CopyArea(
#if NeedFunctionPrototypes
    DrawablePtr,
    DrawablePtr,
    GC *,
    int,
    int,
    int,
    int,
    int,
    int
#endif
);
void s3FindOrdering(
#if NeedFunctionPrototypes
    DrawablePtr,
    DrawablePtr,
    GC *,
    int,
    BoxPtr,
    int,
    int,
    int,
    int,
    unsigned int *
#endif
);
RegionPtr s3CopyPlane(
#if NeedFunctionPrototypes
    DrawablePtr,
    DrawablePtr,
    GCPtr,
    int,
    int,
    int,
    int,
    int,
    int,
    unsigned long 
#endif
);
/* s3plypt.c */
void s3PolyPoint(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    int,
    xPoint *
#endif
);
/* s3line.c */
void s3Line(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    int,
    DDXPointPtr 
#endif
);
/* s3seg.c */
void s3Segment(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    xSegment *
#endif
);
/* s3frect.c */
void s3PolyFillRect(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    xRectangle *
#endif
);
void s3InitFrect(
#if NeedFunctionPrototypes
    int,
    int,
    int
#endif
);
/* s3text.c */
int s3NoCPolyText(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    int,
    int,
    char *,
    Bool 
#endif
);

void s3FontStipple(
#if NeedFunctionPrototypes
    int,
    int,
    int,
    int,
    unsigned char *,
    int,
    Pixel
#endif
);


int s3NoCImageText(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    int,
    int,
    char *,
    Bool 
#endif
);
/* s3font.c */
Bool s3RealizeFont(
#if NeedFunctionPrototypes
    ScreenPtr,
    FontPtr 
#endif
);
Bool s3UnrealizeFont(
#if NeedFunctionPrototypes
    ScreenPtr,
    FontPtr 
#endif
);
/* s3fcach.c */
void s3FontCache8Init(
#if NeedFunctionPrototypes
    void
#endif
);
void s3GlyphWrite(
#if NeedFunctionPrototypes
    int,
    int,
    int,
    unsigned char *,
    CacheFont8Ptr,
    GCPtr,
    BoxPtr,
    int
#endif
);
/* s3bcach.c */
void s3CacheMoveBlock(
#if NeedFunctionPrototypes
    int,
    int,
    int,
    int,
    int,
    int,
    unsigned int
#endif
);
/* s3Cursor.c */
Bool s3CursorInit(
#if NeedFunctionPrototypes
    char *,
    ScreenPtr 
#endif
);
void s3ShowCursor(
#if NeedFunctionPrototypes
    void
#endif
);
void s3HideCursor(
#if NeedFunctionPrototypes
    void
#endif
);
void s3RestoreCursor(
#if NeedFunctionPrototypes
    ScreenPtr 
#endif
);
void s3RepositionCursor(
#if NeedFunctionPrototypes
    ScreenPtr 
#endif
);
void s3RenewCursorColor(
#if NeedFunctionPrototypes
    ScreenPtr 
#endif
);
void s3WarpCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    int,
    int 
#endif
);
void
s3RecolorCursor(
#if NeedFunctionPrototypes
     ScreenPtr,
     CursorPtr,
     Bool
#endif
);
void s3QueryBestSize(
#if NeedFunctionPrototypes
    int,
    unsigned short *,
    unsigned short *,
    ScreenPtr 
#endif
);
#endif /* !OSKIT */
/* s3BtCursor.c */
void s3OutBtReg(
#if NeedFunctionPrototypes
    unsigned short,
    unsigned char,
    unsigned char 
#endif
);
unsigned char s3InBtReg(
#if NeedFunctionPrototypes
    unsigned short 
#endif
);
void s3OutBtRegCom3(
#if NeedFunctionPrototypes
    unsigned char,
    unsigned char 
#endif
);
unsigned char s3InBtRegCom3(
#if NeedFunctionPrototypes
    void
#endif
);
unsigned char s3InBtStatReg(
#if NeedFunctionPrototypes
    void
#endif
);
#ifndef OSKIT
Bool s3BtRealizeCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr 
#endif
);
void s3BtCursorOn(
#if NeedFunctionPrototypes
    void
#endif
);
void s3BtCursorOff(
#if NeedFunctionPrototypes
    void
#endif
);
void s3BtMoveCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    int,
    int 
#endif
);
void s3BtRecolorCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr 
#endif
);
void s3BtLoadCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr,
    int,
    int 
#endif
);
/* s3dline.c */
void s3Dline(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    int,
    DDXPointPtr 
#endif
);
/* s3dseg.c */
void s3Dsegment(
#if NeedFunctionPrototypes
    DrawablePtr,
    GCPtr,
    int,
    xSegment *
#endif
);
/* s3gtimg.c */
void s3GetImage(
#if NeedFunctionPrototypes
    DrawablePtr,
    int,
    int,
    int,
    int,
    unsigned int,
    unsigned long,
    char * 
#endif
);
#endif /* !OSKIT */
/* s3TiCursor.c */
void s3OutTiIndReg(
#if NeedFunctionPrototypes
    unsigned char,
    unsigned char,
    unsigned char 
#endif
);
unsigned char s3InTiIndReg(
#if NeedFunctionPrototypes
    unsigned char 
#endif
);
#ifndef OSKIT
Bool s3TiRealizeCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr 
#endif
);
void s3TiCursorOn(
#if NeedFunctionPrototypes
    void
#endif
);
void s3TiCursorOff(
#if NeedFunctionPrototypes
    void
#endif
);
void s3TiMoveCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    int,
    int 
#endif
);
void s3TiRecolorCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr 
#endif
);
void s3TiLoadCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr,
    int,
    int 
#endif
);
#endif /* !OSKIT */
void s3OutTi3026IndReg(
#if NeedFunctionPrototypes
    unsigned char,
    unsigned char,
    unsigned char 
#endif
);
unsigned char s3InTi3026IndReg(
#if NeedFunctionPrototypes
    unsigned char 
#endif
);
#ifndef OSKIT
Bool s3Ti3026RealizeCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr 
#endif
);
void s3Ti3026CursorOn(
#if NeedFunctionPrototypes
    void
#endif
);
void s3Ti3026CursorOff(
#if NeedFunctionPrototypes
    void
#endif
);
void s3Ti3026MoveCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    int,
    int 
#endif
);
void s3Ti3026RecolorCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr 
#endif
);
void s3Ti3026LoadCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr,
    int,
    int 
#endif
);
#endif /* !OSKIT */

void s3OutIBMRGBIndReg(
#if NeedFunctionPrototypes
    unsigned char,
    unsigned char,
    unsigned char 
#endif
);
unsigned char s3InIBMRGBIndReg(
#if NeedFunctionPrototypes
    unsigned char 
#endif
);
#ifndef OSKIT
Bool s3IBMRGBRealizeCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr 
#endif
);
void s3IBMRGBCursorOn(
#if NeedFunctionPrototypes
    void
#endif
);
void s3IBMRGBCursorOff(
#if NeedFunctionPrototypes
    void
#endif
);
void s3IBMRGBMoveCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    int,
    int 
#endif
);
void s3IBMRGBRecolorCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr 
#endif
);
void s3IBMRGBLoadCursor(
#if NeedFunctionPrototypes
    ScreenPtr,
    CursorPtr,
    int,
    int 
#endif
);
#endif /* !OSKIT */

_XFUNCPROTOEND

#endif /* !LINKKIT */
#endif /* _S3_H_ */

