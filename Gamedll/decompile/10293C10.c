/*
 * func-name: sub_10293C10
 * func-address: 0x10293c10
 * callers: 0x10002ec3
 * callees: 0x100019f1
 */

char __thiscall sub_10293C10(CREDialog **this, int a2, int a3, char a4)
{
  int v4; // eax
  int v6; // ecx
  unsigned int v8; // edi
  int i; // ebx
  int v10; // ecx

  v4 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a3 + 36);
  if ( v4 < v6 || v4 > v6 + 27 )
  {
    if ( *(_BYTE *)(a3 + 28) )
    {
      v8 = 0;
      for ( i = 0; ; i += 128 )
      {
        v10 = *(_DWORD *)(a3 + 48);
        if ( !v10 || v8 >= (*(_DWORD *)(a3 + 52) - v10) >> 7 )
          break;
        if ( (unsigned __int8)sub_100019F1(a2, i + *(_DWORD *)(a3 + 48), a4) )
          return 1;
        ++v8;
      }
    }
    return 0;
  }
  else
  {
    CREDialog::SendEvent(
      this[28],
      0x2001u,
      1,
      (struct CREControl *)this,
      *(_DWORD *)(a3 + 32),
      *(unsigned __int8 *)(a3 + 28));
    return 1;
  }
}
