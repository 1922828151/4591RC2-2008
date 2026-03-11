/*
 * func-name: sub_100FB650
 * func-address: 0x100fb650
 * callers: 0x100fb650, 0x100fb800, 0x100fc250, 0x100fccd0
 * callees: 0x100ed460, 0x100fa890, 0x100fb650, 0x100fdc40, 0x100fec50, 0x10100ae0, 0x101a2500
 */

void __thiscall sub_100FB650(
        _DWORD *this,
        int a2,
        int *a3,
        int a4,
        int a5,
        unsigned __int8 (__thiscall ***a6)(_DWORD, int, int, int),
        int a7)
{
  int v7; // esi
  int v8; // ebx
  unsigned __int8 (__thiscall ***v9)(_DWORD, int, int, int); // ebp
  int v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // eax
  int *v16; // edx
  int v17; // esi
  int *v18; // [esp-10h] [ebp-48h]
  int v19; // [esp+0h] [ebp-38h]
  _DWORD v20[2]; // [esp+14h] [ebp-24h] BYREF
  int v21; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v22; // [esp+20h] [ebp-18h]
  int v23; // [esp+24h] [ebp-14h]
  int v24; // [esp+28h] [ebp-10h]
  int v25; // [esp+34h] [ebp-4h]

  v7 = a2;
  v20[1] = this;
  if ( a2 && !*(_BYTE *)(a2 + 48) )
  {
    v18 = (int *)a2;
    v20[0] = 0;
    a2 = 0;
    sub_100FA890(this, v18, a3, v20, &a2, a5);
    v8 = v20[0];
    v9 = a6;
    v10 = a4;
    if ( v20[0] && *(_DWORD *)(v20[0] + 52) != -1 && (**a6)(a6, v7, v20[0], a7) )
    {
      v11 = (_DWORD *)sub_100FDC40(*(_DWORD *)(v8 + 52));
      sub_100ED460(v11, (int *)(v7 + 56));
      *(_DWORD *)(v7 + 52) = *(_DWORD *)(v8 + 52);
    }
    if ( a2 && *(_DWORD *)(a2 + 52) != -1 && (**v9)(v9, v7, a2, a7) )
    {
      v12 = (_DWORD *)sub_100FDC40(*(_DWORD *)(a2 + 52));
      sub_100ED460(v12, (int *)(v7 + 56));
      *(_DWORD *)(v7 + 52) = *(_DWORD *)(a2 + 52);
    }
    if ( *(_DWORD *)(v7 + 52) == -1 )
    {
      v13 = *(_DWORD *)(v10 + 4);
      if ( v13 )
        v14 = (*(_DWORD *)(v10 + 8) - v13) >> 4;
      else
        v14 = 0;
      *(_DWORD *)(v7 + 52) = v14;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      sub_10100AE0(v10, &v21);
      v25 = -1;
      if ( v22 )
        operator delete(v22);
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v15 = (_DWORD *)sub_100FEC50(v10);
      sub_100ED460(v15, (int *)(v7 + 56));
    }
    v16 = a3;
    v19 = a7;
    *(_BYTE *)(v7 + 48) = 1;
    v17 = a5;
    sub_100FB650(v8, v16, v10, a5, v9, v19);
    sub_100FB650(a2, a3, v10, v17, v9, a7);
  }
}
