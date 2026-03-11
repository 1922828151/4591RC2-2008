/*
 * func-name: sub_10293400
 * func-address: 0x10293400
 * callers: 0x100019f1
 * callees: 0x1000a6ff, 0x100188ef
 */

char __thiscall sub_10293400(int this, int *a2, int a3, char a4)
{
  int v4; // eax
  int v6; // ecx
  int v8; // eax
  unsigned int v9; // edi
  int i; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // [esp-Ch] [ebp-14h]
  int v22; // [esp-4h] [ebp-Ch]

  v4 = a2[1];
  v6 = *(_DWORD *)(a3 + 44);
  if ( v4 < v6 || v4 > v6 + *(_DWORD *)(this + 684) )
  {
    if ( *(_BYTE *)(a3 + 108) )
    {
      v9 = 0;
      for ( i = 0; ; i += 76 )
      {
        v11 = *(_DWORD *)(a3 + 76);
        if ( !v11 || v9 >= (*(_DWORD *)(a3 + 80) - v11) / 76 )
          break;
        v12 = *(_DWORD *)(a3 + 76);
        if ( !v12 || v9 >= (*(_DWORD *)(a3 + 80) - v12) / 76 )
          _invalid_parameter_noinfo();
        v13 = *(_DWORD *)(a3 + 76);
        v14 = a2[1];
        v15 = *(_DWORD *)(v13 + i + 64);
        v16 = i + v13;
        if ( v14 >= v15 && v14 <= v15 + 30 )
        {
          CREDialog::SendEvent(
            *(CREDialog **)(this + 112),
            0x2003u,
            1,
            (struct CREControl *)this,
            *(_DWORD *)(v16 + 56),
            0);
          return 1;
        }
        ++v9;
      }
      v17 = *(_DWORD *)(this + 644);
      if ( v17 )
      {
        v18 = a2[1];
        v19 = *(_DWORD *)(a3 + 60);
        if ( v18 >= v19 && v18 <= v19 + *(_DWORD *)(v17 + 108) && *a2 >= 104 && *a2 <= *(_DWORD *)(v17 + 96) + 104 )
        {
          v21 = *(_DWORD *)(sub_1000A6FF(*(_DWORD *)(a3 + 112)) + 72);
          v20 = sub_1000A6FF(*(_DWORD *)(a3 + 112));
          CREDialog::SendEvent(
            *(CREDialog **)(this + 112),
            0x2004u,
            1,
            (struct CREControl *)this,
            *(_DWORD *)(v20 + 56),
            v21);
        }
      }
    }
    return 0;
  }
  else if ( a4 )
  {
    if ( !(unsigned __int8)sub_100188EF() )
    {
      v22 = *(_DWORD *)(sub_1000A6FF(0) + 72);
      v8 = sub_1000A6FF(0);
      CREDialog::SendEvent(
        *(CREDialog **)(this + 112),
        0x2004u,
        1,
        (struct CREControl *)this,
        *(_DWORD *)(v8 + 56),
        v22);
    }
    return 1;
  }
  else
  {
    CREDialog::SendEvent(
      *(CREDialog **)(this + 112),
      0x2002u,
      1,
      (struct CREControl *)this,
      *(_DWORD *)(a3 + 68),
      *(unsigned __int8 *)(a3 + 108));
    return 1;
  }
}
