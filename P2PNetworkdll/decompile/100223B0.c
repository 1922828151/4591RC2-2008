/*
 * func-name: sub_100223B0
 * func-address: 0x100223b0
 * callers: 0x1001f4a0, 0x10020f30, 0x10021ad0
 * callees: 0x10022250, 0x10022450, 0x10022fa0, 0x10023030, 0x10023100
 */

int __fastcall sub_100223B0(int a1, int a2, int a3)
{
  _BYTE *v4; // edi

  if ( *(_DWORD *)(a3 + 56) )
  {
    if ( sub_10023030(a2 + 4 * *(_DWORD *)(a1 + 64))
      && (*(_DWORD *)(a3 + 448) != *(_DWORD *)(a3 + 444) || sub_10023100())
      && (**(_BYTE **)(a3 + 448) = 0, v4 = *(_BYTE **)(a3 + 452), ++*(_DWORD *)(a3 + 448), v4) )
    {
      sub_10022250(v4);
      (*(void (__cdecl **)(_DWORD, _BYTE *))(a3 + 56))(*(_DWORD *)(a3 + 4), v4);
      sub_10022FA0(a3 + 436);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a3 + 68) )
      sub_10022450(a2);
    return 1;
  }
}
