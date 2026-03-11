/*
 * func-name: sub_10023100
 * func-address: 0x10023100
 * callers: 0x1001f4a0, 0x10020130, 0x10020f30, 0x10021c70, 0x10021cd0, 0x10022080, 0x10022290, 0x100223b0, 0x100225a0, 0x10022690, 0x100228d0, 0x10023030, 0x10023090, 0x100230d0
 * callees: 0x100234ec, 0x10023bb2
 */

int __usercall sub_10023100@<eax>(_DWORD *a1@<esi>)
{
  _DWORD *v1; // eax
  int v2; // ecx
  _DWORD *v3; // ecx
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // edx
  int v8; // ecx
  const void *v9; // eax
  _DWORD *v10; // edx
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int v14; // edi
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  _DWORD *v19; // eax
  _DWORD *v20; // edi
  _BYTE *v21; // eax
  _BYTE *v22; // ecx

  v1 = (_DWORD *)a1[1];
  if ( v1 )
  {
    v2 = a1[4];
    if ( !v2 )
    {
      *a1 = v1;
      v3 = (_DWORD *)*a1;
      a1[1] = *v1;
      *v3 = 0;
      v4 = (_DWORD *)*a1;
      v5 = *a1 + 8;
      a1[4] = v5;
      v6 = v5 + v4[1];
      a1[3] = v5;
      a1[2] = v6;
      return 1;
    }
    if ( a1[2] - v2 < v1[1] )
    {
      v8 = *v1;
      *v1 = *a1;
      *a1 = a1[1];
      v9 = (const void *)a1[4];
      v10 = (_DWORD *)*a1;
      a1[1] = v8;
      memcpy(v10 + 2, v9, a1[2] - (_DWORD)v9);
      v11 = (_DWORD *)*a1;
      a1[3] += *a1 - a1[4] + 8;
      a1[4] = v11 + 2;
      a1[2] = (char *)v11 + v11[1] + 8;
      return 1;
    }
  }
  v12 = (_DWORD *)*a1;
  if ( *a1 )
  {
    v13 = (_DWORD *)a1[4];
    if ( v13 == v12 + 2 )
    {
      v14 = 2 * (a1[2] - (_DWORD)v13);
      v15 = realloc(v12, v14 + 8);
      *a1 = v15;
      if ( v15 )
      {
        v15[1] = v14;
        v16 = *a1 + 8;
        a1[3] += *a1 - a1[4] + 8;
        a1[4] = v16;
        a1[2] = v14 + v16;
        return 1;
      }
      return 0;
    }
  }
  v17 = a1[2] - a1[4];
  v18 = 1024;
  if ( v17 >= 1024 )
    v18 = 2 * v17;
  v19 = malloc(v18 + 8);
  v20 = v19;
  if ( !v19 )
    return 0;
  v19[1] = v18;
  *v19 = *a1;
  v21 = (_BYTE *)a1[3];
  v22 = (_BYTE *)a1[4];
  *a1 = v20;
  if ( v21 != v22 )
    memcpy(v20 + 2, v22, v21 - v22);
  a1[3] += (char *)v20 - a1[4] + 8;
  a1[4] = v20 + 2;
  a1[2] = (char *)v20 + v18 + 8;
  return 1;
}
