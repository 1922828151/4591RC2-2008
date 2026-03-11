/*
 * func-name: sub_1024ED80
 * func-address: 0x1024ed80
 * callers: 0x10015f8c
 * callees: 0x10015c67, 0x1001971d, 0x102c9d50
 */

void __cdecl sub_1024ED80(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // ebx
  bool v7; // zf
  int v8; // eax
  bool v9; // cc
  _DWORD *v10; // edi
  _DWORD *v11; // edi
  int v12; // [esp+0h] [ebp-20h]
  int v13; // [esp+4h] [ebp-1Ch]

  v4 = a2;
  v5 = (a2 - 1) / 2;
  if ( a3 < a2 )
  {
    do
    {
      if ( !(unsigned __int8)sub_10015C67(a1 + 4 * v5, (int)&a4) )
        break;
      v6 = *(_DWORD **)(a1 + 4 * v4);
      if ( v6 )
      {
        v7 = v6[9]-- == 1;
        if ( v7 )
        {
          sub_1001971D(v12, v13);
          operator delete(v6);
        }
      }
      v8 = *(_DWORD *)(a1 + 4 * v5);
      *(_DWORD *)(a1 + 4 * v4) = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 36);
      v4 = v5;
      v9 = a3 < v5;
      v5 = (v5 - 1) / 2;
    }
    while ( v9 );
  }
  v10 = *(_DWORD **)(a1 + 4 * v4);
  if ( v10 )
  {
    v7 = v10[9]-- == 1;
    if ( v7 )
    {
      sub_1001971D(v12, v13);
      operator delete(v10);
    }
  }
  v11 = a4;
  v7 = a4 == 0;
  *(_DWORD *)(a1 + 4 * v4) = a4;
  if ( !v7 )
    ++v11[9];
  if ( v11 )
  {
    v7 = v11[9]-- == 1;
    if ( v7 )
    {
      sub_1001971D(v12, v13);
      operator delete(v11);
    }
  }
}
