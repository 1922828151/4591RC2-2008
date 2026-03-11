/*
 * func-name: sub_100F8D10
 * func-address: 0x100f8d10
 * callers: none
 * callees: 0x100956d0, 0x100f8a00, 0x1017eaef
 */

int __cdecl sub_100F8D10(int a1, float **a2)
{
  int v2; // edi
  void (__stdcall *v3)(int, _DWORD, _BYTE *); // edx
  unsigned int v4; // ebx
  int v5; // eax
  void (**v6)(void *, const char *, ...); // esi
  int v7; // eax
  double v8; // st7
  int v9; // edi
  unsigned int i; // esi
  int v12; // [esp+0h] [ebp-64h] BYREF
  _BYTE v13[24]; // [esp+Ch] [ebp-58h] BYREF
  unsigned int v14; // [esp+24h] [ebp-40h]
  unsigned int v15; // [esp+28h] [ebp-3Ch]
  float v16; // [esp+2Ch] [ebp-38h] BYREF
  float v17; // [esp+30h] [ebp-34h]
  float v18; // [esp+34h] [ebp-30h]
  float v19; // [esp+38h] [ebp-2Ch]
  _DWORD v20[2]; // [esp+3Ch] [ebp-28h] BYREF
  __int64 v21; // [esp+44h] [ebp-20h]
  int v22; // [esp+4Ch] [ebp-18h]
  int *v23; // [esp+54h] [ebp-10h]
  int v24; // [esp+60h] [ebp-4h]

  v2 = a1;
  v3 = *(void (__stdcall **)(int, _DWORD, _BYTE *))(*(_DWORD *)a1 + 68);
  v23 = &v12;
  v4 = 0;
  v24 = 0;
  v3(a1, 0, v13);
  v5 = (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 76))(v2, 0, v20, 0, 0);
  if ( v5 < 0 )
  {
    v6 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
    v7 = sub_1017EAEF(v5);
    (*v6)(dword_11249F38, " Error: %s, in: tex->LockRect( 0, &LockedRect, 0, 0 )", v7);
  }
  v8 = 0.0;
  v22 = v20[1];
  while ( v4 < v15 )
  {
    v9 = v22;
    for ( i = 0; i < v14; ++i )
    {
      v16 = v8;
      v17 = v8;
      v18 = v8;
      v19 = v8;
      sub_100F8A00(&v16, i, v4, a2);
      v9 += 4;
      v21 = (__int64)(255.0 * v18);
      *(_DWORD *)(v9 - 4) = v21
                          | (((unsigned int)(__int64)(v17 * 255.0)
                            | (((unsigned int)(__int64)(v16 * 255.0) | ((unsigned int)(__int64)(v19 * 255.0) << 8)) << 8)) << 8);
      v8 = 0.0;
    }
    v2 = a1;
    v22 += 4 * (v20[0] >> 2);
    ++v4;
  }
  return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 80))(v2, 0);
}
