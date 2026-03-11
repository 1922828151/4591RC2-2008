/*
 * func-name: sub_10002F00
 * func-address: 0x10002f00
 * callers: none
 * callees: 0x10001610, 0x10001d00, 0x10001dd0, 0x10001ff0, 0x10002380, 0x10002880, 0x10034bd3
 */

void __thiscall sub_10002F00(_DWORD **this, int a2, int a3, char a4, const char *a5, int a6)
{
  char *v7; // eax
  int v8; // eax
  const char *v9; // eax
  const char *v10; // [esp-Ch] [ebp-2Ch]
  void *v11[4]; // [esp+4h] [ebp-1Ch] BYREF
  void *Block; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[3])(this)
    && (a6 & (unsigned int)this[8217]) != 0
    && this[8215] )
  {
    v7 = (char *)a5;
    if ( !a4 )
      v7 = byte_10049374;
    v10 = v7;
    v8 = sub_10001DD0(a5);
    sub_10001D00(v11, a3, 6, 36, v8, v10);
    sub_10002380(v11, this[8215]);
    sub_10001FF0(this[8215], a2);
    v9 = a5;
    if ( !a4 )
      v9 = byte_10049374;
    v13 = 15;
    Block = 0;
    LOBYTE(v11[0]) = 0;
    v14 = 0;
    sub_10001610((char *)v11, v9);
    sub_10002880(this[8215], (int)v11);
    if ( Block )
      j__free(Block);
  }
}
