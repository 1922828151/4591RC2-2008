/*
 * func-name: sub_10003120
 * func-address: 0x10003120
 * callers: none
 * callees: 0x10001610, 0x10001d00, 0x10001dd0, 0x10002380, 0x10002880, 0x10034bd3
 */

void __thiscall sub_10003120(_DWORD **this, const char *a2, int a3, char a4, const char *a5, int a6)
{
  const char *v7; // ebp
  char *v8; // edx
  unsigned int v9; // esi
  int v10; // eax
  const char *v11; // eax
  const char *v12; // [esp-10h] [ebp-30h]
  void *v13[4]; // [esp+4h] [ebp-1Ch] BYREF
  void *Block; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[3])(this)
    && (a6 & (unsigned int)this[8217]) != 0
    && this[8215] )
  {
    v7 = a2;
    if ( !a2 )
      v7 = byte_10049374;
    v8 = (char *)a5;
    if ( !a4 )
      v8 = byte_10049374;
    v9 = strlen(v7);
    v12 = v8;
    v10 = sub_10001DD0(a5);
    sub_10001D00(v13, a3, 8, v9 + 4, v10, v12);
    sub_10002380(v13, this[8215]);
    v15 = 15;
    Block = 0;
    LOBYTE(v13[0]) = 0;
    v16 = 0;
    sub_10001610((char *)v13, v7);
    sub_10002880(this[8215], (int)v13);
    if ( Block )
      j__free(Block);
    v11 = a5;
    if ( !a4 )
      v11 = byte_10049374;
    v15 = 15;
    Block = 0;
    LOBYTE(v13[0]) = 0;
    v16 = 0;
    sub_10001610((char *)v13, v11);
    sub_10002880(this[8215], (int)v13);
    if ( Block )
      j__free(Block);
  }
}
