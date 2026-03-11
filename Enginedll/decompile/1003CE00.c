/*
 * func-name: sub_1003CE00
 * func-address: 0x1003ce00
 * callers: none
 * callees: 0x1003cda0, 0x101a24ac, 0x101a252e, 0x101a2534
 */

int __stdcall sub_1003CE00(int a1, const char *a2, _DWORD *a3, void *Src, int a5, int a6, int a7, int a8, _DWORD *a9)
{
  int v9; // ebp
  bool v10; // zf
  int v12; // edi
  _DWORD *v13; // esi
  int v14; // edi
  int v15; // eax
  void *v16; // eax
  unsigned int i; // ebx
  _BYTE *v18; // eax
  char *v19; // edx
  _BYTE *v20; // edi
  char v21; // cl
  int v22; // [esp+4h] [ebp-4h] BYREF
  int v23; // [esp+14h] [ebp+Ch]

  v9 = 0;
  *a9 = 0;
  v10 = *a3 == 1;
  v22 = 0;
  if ( !v10 )
    return -2147467259;
  v12 = a3[1];
  v13 = operator new(0x24u);
  if ( v13 )
  {
    *v13 = 0;
    v13[1] = 0;
    v13[2] = 0;
    v13[3] = 0;
    v13[4] = 0;
    v13[5] = 0;
    v13[6] = 0;
    v13[7] = 0;
    v13[8] = 0;
    v15 = sub_1003CDA0(a2, v13);
    v23 = v15;
    if ( v15 < 0 )
    {
      v14 = v15;
    }
    else
    {
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v12 + 40))(v12, &v22);
      (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 16))(v12);
      v13[2] = v12;
      v13[1] = 1;
      (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12);
      v13[5] = a6;
      v16 = operator new(72 * a6);
      v10 = v13[5] == 0;
      v13[3] = v16;
      if ( !v10 )
        memcpy(v16, Src, 72 * a6);
      for ( i = 0; i < v13[5]; v9 += 72 )
      {
        v18 = operator new(0x104u);
        v19 = *(char **)(v13[3] + v9 + 68);
        if ( v19 )
        {
          v20 = v18;
          do
          {
            v21 = *v19;
            *v20++ = *v19++;
          }
          while ( v21 );
        }
        else
        {
          *v18 = 0;
        }
        *(_DWORD *)(v13[3] + v9 + 68) = v18;
        ++i;
      }
      if ( a8 )
      {
        v13[7] = a8;
        (*(void (__stdcall **)(int))(*(_DWORD *)a8 + 4))(a8);
      }
      v14 = v23;
      *a9 = v13;
      v13 = 0;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  if ( v22 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22);
    v22 = 0;
  }
  if ( v13 )
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)a1 + 12))(a1, v13);
  return v14;
}
