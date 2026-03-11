/*
 * func-name: sub_1024EF10
 * func-address: 0x1024ef10
 * callers: 0x100142db
 * callees: 0x10015c67, 0x10015f8c, 0x1001971d, 0x102c9d50
 */

void __cdecl sub_1024EF10(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  int v6; // edi
  int v7; // ebp
  int v8; // esi
  bool v9; // zf
  _DWORD *v10; // ebp
  int v11; // eax
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // [esp+0h] [ebp-20h]
  int v15; // [esp+4h] [ebp-1Ch]

  v6 = a2;
  v7 = a3;
  v8 = 2 * a2 + 2;
  v9 = v8 == a3;
  if ( v8 < a3 )
  {
    do
    {
      if ( (unsigned __int8)sub_10015C67(a1 + 4 * v8, a1 + 4 * v8 - 4) )
        --v8;
      v10 = *(_DWORD **)(a1 + 4 * v6);
      if ( v10 )
      {
        v9 = v10[9]-- == 1;
        if ( v9 )
        {
          sub_1001971D(v14, v15);
          operator delete(v10);
        }
      }
      v11 = *(_DWORD *)(a1 + 4 * v8);
      *(_DWORD *)(a1 + 4 * v6) = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 36);
      v6 = v8;
      v8 = 2 * v8 + 2;
    }
    while ( v8 < a3 );
    v7 = a3;
    v9 = v8 == a3;
  }
  if ( v9 )
  {
    v12 = *(_DWORD **)(a1 + 4 * v6);
    if ( v12 )
    {
      v9 = v12[9]-- == 1;
      if ( v9 )
      {
        sub_1001971D(v14, v15);
        operator delete(v12);
      }
    }
    v13 = *(_DWORD *)(a1 + 4 * v7 - 4);
    *(_DWORD *)(a1 + 4 * v6) = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 36);
    v6 = v7 - 1;
  }
  if ( a4 )
    ++a4[9];
  sub_10015F8C(a1, v6, a2, a4, a5);
  if ( a4 )
  {
    v9 = a4[9]-- == 1;
    if ( v9 )
    {
      sub_1001971D(v14, v15);
      operator delete(a4);
    }
  }
}
