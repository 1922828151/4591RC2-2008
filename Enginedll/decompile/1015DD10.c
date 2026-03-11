/*
 * func-name: sub_1015DD10
 * func-address: 0x1015dd10
 * callers: 0x10161f10, 0x10169700
 * callees: 0x101a24ac
 */

char __thiscall sub_1015DD10(_DWORD *this, char a2, LPCSTR name, int a4, int a5, int a6, int a7, unsigned int a8)
{
  const CHAR *p_name; // eax
  int v10; // edi
  HANDLE ImageA; // eax
  void *v12; // ebp
  int v14; // eax
  int v15; // ecx
  void *v16; // eax
  bool v17; // cc
  int v18; // ecx
  int i; // eax
  char v20; // bl
  _BYTE pv[4]; // [esp+Ch] [ebp-24h] BYREF
  int v22; // [esp+10h] [ebp-20h]
  int v23; // [esp+14h] [ebp-1Ch]
  int v24; // [esp+18h] [ebp-18h]
  __int16 v25; // [esp+1Eh] [ebp-12h]
  int v26; // [esp+20h] [ebp-10h]
  int v27; // [esp+2Ch] [ebp-4h]

  p_name = name;
  v10 = 0;
  v27 = 0;
  if ( a8 < 0x10 )
    p_name = (const CHAR *)&name;
  ImageA = LoadImageA(hInst, p_name, 0, 0, 0, 0x2010u);
  v12 = ImageA;
  if ( !ImageA )
    goto LABEL_6;
  GetObjectA(ImageA, 24, pv);
  if ( v25 != 8 )
  {
    DeleteObject(v12);
LABEL_6:
    v27 = -1;
    std::string::~string(&a2);
    return 0;
  }
  v14 = v23;
  v15 = v22;
  this[9] = v23;
  this[8] = v15;
  v16 = operator new(v15 * v14);
  v17 = this[9] <= 0;
  this[10] = v16;
  if ( !v17 )
  {
    do
    {
      v18 = v26 + v10 * v24;
      for ( i = 0; i < this[8]; *(_BYTE *)(this[10] + v10 * this[8] + i - 1) = v20 )
      {
        v20 = *(_BYTE *)(i + v18);
        ++i;
      }
      ++v10;
    }
    while ( v10 < this[9] );
  }
  DeleteObject(v12);
  std::string::operator=(this + 1, &a2);
  v27 = -1;
  std::string::~string(&a2);
  return 1;
}
