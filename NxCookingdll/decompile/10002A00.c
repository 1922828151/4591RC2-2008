/*
 * func-name: sub_10002A00
 * func-address: 0x10002a00
 * callers: none
 * callees: 0x10002260, 0x100028d0, 0x10034bd3, 0x10034ca4
 */

void __thiscall sub_10002A00(_DWORD *this, int a2, char a3, const char *a4, int a5)
{
  _DWORD *v6; // esi
  _DWORD v7[8]; // [esp+8h] [ebp-30h] BYREF
  void *Block; // [esp+28h] [ebp-10h]

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 12))(this) && (a5 & this[8217]) != 0 )
  {
    sub_10002260(v7, a3, a2, a4);
    v6 = (_DWORD *)this[8215];
    if ( v6 )
      sub_100028D0(v7, v6);
    if ( Block )
      j__free(Block);
  }
}
