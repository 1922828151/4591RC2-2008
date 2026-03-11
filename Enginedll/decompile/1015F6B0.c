/*
 * func-name: sub_1015F6B0
 * func-address: 0x1015f6b0
 * callers: 0x10169020
 * callees: 0x100977a0, 0x1015dc40, 0x1015f400, 0x101a252e
 */

char __thiscall sub_1015F6B0(int this, char a2, LPCSTR name, int a4, int a5, int a6, int a7, unsigned int a8)
{
  const CHAR *p_name; // eax
  int v10; // ebp
  HANDLE ImageA; // eax
  void *v12; // esi
  int v13; // eax
  int v14; // edi
  int i; // esi
  float v17; // [esp+0h] [ebp-40h]
  HANDLE v18; // [esp+18h] [ebp-28h]
  _BYTE pv[4]; // [esp+1Ch] [ebp-24h] BYREF
  int v20; // [esp+20h] [ebp-20h]
  int v21; // [esp+24h] [ebp-1Ch]
  int v22; // [esp+28h] [ebp-18h]
  __int16 v23; // [esp+2Eh] [ebp-12h]
  int v24; // [esp+30h] [ebp-10h]
  int v25; // [esp+3Ch] [ebp-4h]

  p_name = name;
  v10 = 0;
  v25 = 0;
  if ( a8 < 0x10 )
    p_name = (const CHAR *)&name;
  ImageA = LoadImageA(hInst, p_name, 0, 0, 0, 0x2010u);
  v12 = ImageA;
  v18 = ImageA;
  if ( !ImageA )
  {
    SeriousWarning("LoadImage failed.");
LABEL_18:
    v25 = -1;
    std::string::~string(&a2);
    return 0;
  }
  GetObjectA(ImageA, 24, pv);
  if ( (v20 - 1) % 64 || (v21 - 1) % 64 || v23 != 8 )
  {
    DeleteObject(v12);
    SeriousWarning((char *)&byte_101CE374, 64);
    goto LABEL_18;
  }
  if ( !sub_1015F400((void *)this, v20, v21) )
  {
    DeleteObject(v12);
    SeriousWarning("HMap.Create Failed.");
    goto LABEL_18;
  }
  if ( *(int *)(this + 12) > 0 )
  {
    v13 = *(_DWORD *)(this + 8);
    do
    {
      v14 = v24 + v10 * v22;
      for ( i = 0; i < v13; ++i )
      {
        v17 = (float)*(unsigned __int8 *)(i + v14);
        sub_1015DC40((_DWORD *)this, i, v10, v17);
        v13 = *(_DWORD *)(this + 8);
      }
      ++v10;
    }
    while ( v10 < *(_DWORD *)(this + 12) );
    v12 = v18;
  }
  DeleteObject(v12);
  memcpy(*(void **)(this + 24), *(const void **)(this + 20), 4 * *(_DWORD *)(this + 12) * *(_DWORD *)(this + 8));
  v25 = -1;
  std::string::~string(&a2);
  return 1;
}
