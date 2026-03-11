/*
 * func-name: sub_10114C30
 * func-address: 0x10114c30
 * callers: 0x10115670, 0x101157a0
 * callees: 0x1000db00, 0x1000f380, 0x101a2500, 0x101a2522
 */

_DWORD *__cdecl sub_10114C30(CREControl *a1, CREControl *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  char *v4; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // ebx
  char *v10; // edi
  int v12; // [esp+0h] [ebp-30h] BYREF
  char v13[4]; // [esp+Ch] [ebp-24h] BYREF
  char *v14; // [esp+10h] [ebp-20h]
  char *v15; // [esp+14h] [ebp-1Ch]
  int v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h]
  int *v18; // [esp+20h] [ebp-10h]
  int v19; // [esp+2Ch] [ebp-4h]

  v3 = a3;
  v4 = 0;
  v18 = &v12;
  v17 = (int)a3;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v19 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v19) = 2;
    if ( v3 )
    {
      sub_1000F380((int)v3, (int)v13);
      v4 = v14;
    }
    v6 = v3[1];
    v3[1] = *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 1) = v6;
    v7 = v3[2];
    v3[2] = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 2) = v7;
    v8 = v3[3];
    v3[3] = *((_DWORD *)a1 + 3);
    v3 += 4;
    *((_DWORD *)a1 + 3) = v8;
    a1 = (CREControl *)((char *)a1 + 16);
  }
  v19 = -1;
  if ( v4 )
  {
    v9 = v15;
    v10 = v4;
    if ( v4 != v15 )
    {
      do
      {
        std::string::~string(v10);
        v10 += 28;
      }
      while ( v10 != v9 );
      v4 = v14;
    }
    operator delete(v4);
  }
  return v3;
}
