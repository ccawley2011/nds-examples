{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Courier New;}}
{\*\generator Msftedit 5.41.15.1507;}\viewkind4\uc1\pard\f0\fs20 typedef struct \{\par
   unsigned short int type;                 /* Magic identifier            */\par
   unsigned int size;                       /* File size in bytes          */\par
   unsigned short int reserved1, reserved2;\par
   unsigned int offset;                     /* Offset to image data, bytes */\par
\} HEADER;\par
\par
typedef struct \{\par
   unsigned int size;               /* Header size in bytes      */\par
   int width,height;                /* Width and height of image */\par
   unsigned short int planes;       /* Number of colour planes   */\par
   unsigned short int bits;         /* Bits per pixel            */\par
   unsigned int compression;        /* Compression type          */\par
   unsigned int imagesize;          /* Image size in bytes       */\par
   int xresolution,yresolution;     /* Pixels per meter          */\par
   unsigned int ncolours;           /* Number of colours         */\par
   unsigned int importantcolours;   /* Important colours         */\par
\} INFOHEADER;\par
\par
}
 