/*
 * func-name: sub_10003250
 * func-address: 0x10003250
 * callers: none
 * callees: 0x10001610, 0x10001830, 0x10001d00, 0x10001dd0, 0x10002380, 0x10002880, 0x10034bd3
 */

void __thiscall sub_10003250(_DWORD **this, _BYTE *a2, int a3, bool a4, const char *a5, int a6)
{
  bool v7; // bl
  const char *v8; // edi
  char *v9; // eax
  int v10; // eax
  const char *v11; // [esp-Ch] [ebp-2Ch]
  void *v12[4]; // [esp+4h] [ebp-1Ch] BYREF
  void *Block; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[3])(this)
    && (a6 & (unsigned int)this[8217]) != 0
    && this[8215] )
  {
    v7 = a4;
    v8 = a5;
    v9 = (char *)a5;
    if ( !a4 )
      v9 = byte_10049374;
    v11 = v9;
    v10 = sub_10001DD0(a5);
    sub_10001D00(v12, a3, 9, 1, v10, v11);
    sub_10002380(v12, this[8215]);
    a4 = *a2 != 0;
    sub_10001830(this[8215], (int)&a4, 1u);
    if ( !v7 )
      v8 = byte_10049374;
    v14 = 15;
    Block = 0;
    LOBYTE(v12[0]) = 0;
    v15 = 0;
    sub_10001610((char *)v12, v8);
    sub_10002880(this[8215], (int)v12);
    if ( Block )
      j__free(Block);
  }
}
