/*
 * func-name: sub_10033B90
 * func-address: 0x10033b90
 * callers: 0x10034c30
 * callees: 0x10035e00, 0x10035e30, 0x100360e0, 0x101a2534
 */

int __thiscall sub_10033B90(_DWORD *this, unsigned int a2, const void *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  int v5; // ebp
  _DWORD *v6; // edi
  unsigned int v8; // edx
  int v9; // eax
  _DWORD *v11; // [esp+14h] [ebp-4h] BYREF

  v3 = this;
  if ( this[3] > a2 && (v4 = *(_DWORD **)(this[2] + 4 * a2)) != 0 )
  {
    while ( memcmp(a3, (const void *)(v3[5] + 32 * *v4), 0x20u) )
    {
      v4 = (_DWORD *)v4[1];
      if ( !v4 )
        goto LABEL_5;
    }
    return *v4;
  }
  else
  {
LABEL_5:
    v5 = v3[6];
    if ( (int)sub_10035E30(v5 + 1) >= 0 )
    {
      qmemcpy((void *)(v3[5] + 32 * v3[6]++), a3, 0x20u);
      v3 = this;
    }
    v6 = operator new(8u);
    v11 = v6;
    if ( v6 )
    {
      v8 = a2;
      *v6 = v5;
      v6[1] = 0;
      if ( v3[3] <= a2 )
      {
        a3 = 0;
        do
        {
          sub_100360E0(&a3);
          v8 = a2;
        }
        while ( this[3] <= a2 );
        v3 = this;
      }
      v9 = *(_DWORD *)(v3[2] + 4 * v8);
      if ( v9 )
      {
        for ( ; *(_DWORD *)(v9 + 4); v9 = *(_DWORD *)(v9 + 4) )
          ;
        *(_DWORD *)(v9 + 4) = v6;
        return v5;
      }
      else
      {
        sub_10035E00(v8, &v11);
        return v5;
      }
    }
    else
    {
      return -2147024882;
    }
  }
}
