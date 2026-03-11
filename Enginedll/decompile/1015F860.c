/*
 * func-name: sub_1015F860
 * func-address: 0x1015f860
 * callers: 0x101613e0
 * callees: 0x1015dbd0, 0x101a24ac, 0x101a251c, 0x101a253a
 */

char __thiscall sub_1015F860(_DWORD *this, char a2, LPCSTR lpFileName, int a4, int a5, int a6, int a7, unsigned int a8)
{
  int v9; // ebp
  bool v10; // zf
  HBITMAP Bitmap; // eax
  HBITMAP v13; // edi
  char *v14; // esi
  int i; // edi
  const CHAR *p_lpFileName; // eax
  HANDLE FileA; // esi
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-34h] BYREF
  float v19; // [esp+10h] [ebp-30h] BYREF
  int v20; // [esp+14h] [ebp-2Ch]
  HBITMAP v21; // [esp+18h] [ebp-28h]
  _BYTE pv[4]; // [esp+1Ch] [ebp-24h] BYREF
  int v23; // [esp+20h] [ebp-20h]
  int v24; // [esp+24h] [ebp-1Ch]
  int v25; // [esp+28h] [ebp-18h]
  __int16 v26; // [esp+2Eh] [ebp-12h]
  LPCVOID lpBuffer; // [esp+30h] [ebp-10h]
  int v28; // [esp+3Ch] [ebp-4h]

  v9 = 0;
  v10 = this[5] == 0;
  v28 = 0;
  if ( v10 )
  {
    v28 = -1;
    std::string::~string(&a2);
    return 0;
  }
  Bitmap = CreateBitmap(this[2], this[3], 1u, 8u, 0);
  v13 = Bitmap;
  v21 = Bitmap;
  if ( !Bitmap )
    goto LABEL_34;
  GetObjectA(Bitmap, 24, pv);
  lpBuffer = operator new(v25 * v24);
  memset((void *)lpBuffer, 0, v25 * v24);
  if ( (v23 - 1) % 64 || (v24 - 1) % 64 || v26 != 8 )
  {
    if ( lpBuffer )
    {
      operator delete[]((void *)lpBuffer);
      lpBuffer = 0;
    }
    DeleteObject(v13);
LABEL_34:
    v28 = -1;
    std::string::~string(&a2);
    return 0;
  }
  if ( (int)this[3] > 0 )
  {
    do
    {
      v14 = (char *)lpBuffer + v25 * v9;
      for ( i = 0; i < this[2]; ++i )
      {
        if ( sub_1015DBD0(this, i, v9, &v19) )
        {
          v20 = (int)v19;
          v14[i] = v20;
        }
      }
      ++v9;
    }
    while ( v9 < this[3] );
    v13 = v21;
  }
  p_lpFileName = lpFileName;
  if ( a8 < 0x10 )
    p_lpFileName = (const CHAR *)&lpFileName;
  FileA = CreateFileA(p_lpFileName, 0x40000000u, 0, 0, 4u, 0, 0);
  if ( FileA == (HANDLE)-1 )
  {
    if ( lpBuffer )
    {
      operator delete[]((void *)lpBuffer);
      lpBuffer = 0;
    }
    DeleteObject(v13);
LABEL_30:
    v28 = -1;
    std::string::~string(&a2);
    return 0;
  }
  if ( !WriteFile(FileA, pv, 0x18u, &NumberOfBytesWritten, 0)
    || NumberOfBytesWritten != 24
    || !WriteFile(FileA, lpBuffer, v25 * v24, &NumberOfBytesWritten, 0)
    || NumberOfBytesWritten != v25 * v24 )
  {
    if ( lpBuffer )
    {
      operator delete[]((void *)lpBuffer);
      lpBuffer = 0;
    }
    DeleteObject(v13);
    CloseHandle(FileA);
    goto LABEL_30;
  }
  if ( lpBuffer )
  {
    operator delete[]((void *)lpBuffer);
    lpBuffer = 0;
  }
  DeleteObject(v13);
  v28 = -1;
  std::string::~string(&a2);
  return 1;
}
