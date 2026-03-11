/*
 * func-name: sub_10003340
 * func-address: 0x10003340
 * callers: none
 * callees: 0x10001610, 0x10001830, 0x10001d00, 0x10001dd0, 0x10002380, 0x10002880, 0x10034bd3
 */

void __thiscall sub_10003340(_DWORD **this, int a2, int a3, int a4, const char *a5, int a6)
{
  char v7; // bl
  const char *v8; // edi
  char *v9; // eax
  int v10; // eax
  _DWORD *v11; // ecx
  const char *v12; // [esp-Ch] [ebp-2Ch]
  void *v13[4]; // [esp+4h] [ebp-1Ch] BYREF
  void *Block; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[3])(this)
    && (a6 & (unsigned int)this[8217]) != 0
    && this[8215] )
  {
    v7 = a4;
    v8 = a5;
    v9 = (char *)a5;
    if ( !(_BYTE)a4 )
      v9 = byte_10049374;
    v12 = v9;
    v10 = sub_10001DD0(a5);
    sub_10001D00(v13, a3, 10, 4, v10, v12);
    sub_10002380(v13, this[8215]);
    v11 = this[8215];
    a4 = a2;
    sub_10001830(v11, (int)&a4, 4u);
    if ( !v7 )
      v8 = byte_10049374;
    v15 = 15;
    Block = 0;
    LOBYTE(v13[0]) = 0;
    v16 = 0;
    sub_10001610((char *)v13, v8);
    sub_10002880(this[8215], (int)v13);
    if ( Block )
      j__free(Block);
  }
}
