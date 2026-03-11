/*
 * func-name: sub_1002DFA0
 * func-address: 0x1002dfa0
 * callers: 0x1002e280
 * callees: 0x10001160
 */

int __userpurge sub_1002DFA0@<eax>(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int a5, int *a6)
{
  int result; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  unsigned int v10; // edx
  _DWORD *i; // ebx
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  unsigned int j; // eax
  int v17; // edi
  int v18; // eax
  unsigned int v19; // edx
  int *v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edi
  unsigned int k; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // edi
  unsigned int n; // eax
  int v32; // eax
  int v33; // ecx
  unsigned int m; // eax
  int v35; // [esp+20h] [ebp+4h]

  if ( !*a1
    && !byte_1005B47C
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
          35,
          &byte_1005B47C,
          "mesh",
          0)) )
  {
    __debugbreak();
  }
  result = *(_DWORD *)(*a1 + 4);
  if ( result )
  {
    v8 = (_DWORD *)(*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     12 * result,
                     269,
                     a3,
                     a2);
    v9 = *a1;
    v10 = 0;
    for ( i = v8; v10 < *(_DWORD *)(*a1 + 4); v8 += 3 )
    {
      v12 = (_DWORD *)(*(_DWORD *)(v9 + 12) + 12 * a6[v10]);
      *v8 = *v12;
      v8[1] = v12[1];
      v8[2] = v12[2];
      v9 = *a1;
      ++v10;
    }
    if ( *(_DWORD *)(*a1 + 12) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *(_DWORD *)(*a1 + 12));
      *(_DWORD *)(*a1 + 12) = 0;
    }
    *(_DWORD *)(*a1 + 12) = i;
    if ( *(_DWORD *)(*a1 + 76) )
    {
      v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
              dword_100580A0,
              2 * *(_DWORD *)(*a1 + 4),
              269);
      v14 = *a1;
      v15 = v13;
      for ( j = 0; j < *(_DWORD *)(*a1 + 4); ++j )
      {
        *(_WORD *)(v15 + 2 * j) = *(_WORD *)(*(_DWORD *)(v14 + 76) + 2 * a6[j]);
        v14 = *a1;
      }
      if ( *(_DWORD *)(*a1 + 76) )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *(_DWORD *)(*a1 + 76));
        *(_DWORD *)(*a1 + 76) = 0;
      }
      *(_DWORD *)(*a1 + 76) = v15;
    }
    v17 = (*(int (__cdecl **)(int, int))(*(_DWORD *)dword_100580A0 + 8))(4 * *(_DWORD *)(*a1 + 4), 271);
    v18 = *a1;
    v19 = 0;
    v35 = v17;
    if ( *(_DWORD *)(*a1 + 4) )
    {
      v20 = a6;
      v21 = v17 - (_DWORD)a6;
      do
      {
        v22 = *(_DWORD *)(v18 + 80);
        if ( v22 )
          v23 = *(_DWORD *)(v22 + 4 * *v20);
        else
          v23 = *v20;
        *(int *)((char *)v20 + v21) = v23;
        v18 = *a1;
        ++v19;
        ++v20;
      }
      while ( v19 < *(_DWORD *)(*a1 + 4) );
      v17 = v35;
    }
    if ( *(_DWORD *)(*a1 + 80) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *(_DWORD *)(*a1 + 80));
      *(_DWORD *)(*a1 + 80) = 0;
    }
    *(_DWORD *)(*a1 + 80) = v17;
    if ( *(_DWORD *)(*a1 + 32) )
    {
      v24 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
              dword_100580A0,
              2 * *(_DWORD *)(*a1 + 4),
              275);
      v25 = *a1;
      v26 = v24;
      for ( k = 0; k < *(_DWORD *)(*a1 + 4); ++k )
      {
        *(_WORD *)(v26 + 2 * k) = *(_WORD *)(*(_DWORD *)(v25 + 32) + 2 * a6[k]);
        v25 = *a1;
      }
      if ( *(_DWORD *)(*a1 + 32) )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *(_DWORD *)(*a1 + 32));
        *(_DWORD *)(*a1 + 32) = 0;
      }
      *(_DWORD *)(*a1 + 32) = v26;
    }
    result = *a1;
    if ( *(_DWORD *)(*a1 + 28) >= 0x100u )
    {
      if ( !*(_DWORD *)(result + 36) )
        return result;
      v32 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
              dword_100580A0,
              2 * *(_DWORD *)(result + 4),
              275);
      v33 = *a1;
      v30 = v32;
      for ( m = 0; m < *(_DWORD *)(*a1 + 4); ++m )
      {
        *(_WORD *)(v30 + 2 * m) = *(_WORD *)(*(_DWORD *)(v33 + 36) + 2 * a6[m]);
        v33 = *a1;
      }
    }
    else
    {
      if ( !*(_DWORD *)(result + 36) )
        return result;
      v28 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_100580A0 + 8))(
              dword_100580A0,
              *(_DWORD *)(result + 4),
              274);
      v29 = *a1;
      v30 = v28;
      for ( n = 0; n < *(_DWORD *)(*a1 + 4); ++n )
      {
        *(_BYTE *)(n + v30) = *(_BYTE *)(a6[n] + *(_DWORD *)(v29 + 36));
        v29 = *a1;
      }
    }
    result = *(_DWORD *)(*a1 + 36);
    if ( result )
    {
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                 dword_100580A0,
                 *(_DWORD *)(*a1 + 36));
      *(_DWORD *)(*a1 + 36) = 0;
    }
    *(_DWORD *)(*a1 + 36) = v30;
  }
  return result;
}
