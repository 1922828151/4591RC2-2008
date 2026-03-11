/*
 * func-name: sub_10002FE0
 * func-address: 0x10002fe0
 * callers: none
 * callees: 0x10001610, 0x10001830, 0x10001cc0, 0x10001d00, 0x10001dd0, 0x10001e80, 0x10002380, 0x10002880, 0x10034bd3
 */

void __thiscall sub_10002FE0(_DWORD **this, int a2, int a3, char a4, const char *a5, size_t Size)
{
  char *v7; // eax
  int v8; // eax
  size_t v9; // edi
  const char *v10; // eax
  const char *v11; // [esp-10h] [ebp-54h]
  void *v12[4]; // [esp+4h] [ebp-40h] BYREF
  void *Block; // [esp+14h] [ebp-30h]
  int v14; // [esp+18h] [ebp-2Ch]
  int v15; // [esp+1Ch] [ebp-28h]
  void **v16; // [esp+20h] [ebp-24h] BYREF
  char v17; // [esp+24h] [ebp-20h]
  int v18; // [esp+28h] [ebp-1Ch]
  int v19; // [esp+2Ch] [ebp-18h]
  int v20; // [esp+30h] [ebp-14h]
  int v21; // [esp+34h] [ebp-10h]
  char v22; // [esp+38h] [ebp-Ch]
  int v23; // [esp+3Ch] [ebp-8h]
  char v24; // [esp+40h] [ebp-4h]

  if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[3])(this)
    && (Size & (unsigned int)this[8217]) != 0
    && this[8215] )
  {
    v22 = 1;
    v17 = 1;
    v23 = -1;
    v24 = 0;
    v16 = &meq::MemoryInputStream::`vftable';
    v20 = a2;
    v21 = 4;
    v18 = 4;
    v19 = 0;
    Size = 0;
    sub_10001E80(&v16, &Size);
    v7 = (char *)a5;
    v20 = 0;
    v21 = 0;
    v18 = 0;
    v19 = 0;
    if ( !a4 )
      v7 = byte_10049374;
    v11 = v7;
    v8 = sub_10001DD0(a5);
    v9 = Size;
    sub_10001D00(v12, a3, 7, Size, v8, v11);
    sub_10002380(v12, this[8215]);
    sub_10001830(this[8215], a2, v9);
    v10 = a5;
    if ( !a4 )
      v10 = byte_10049374;
    v14 = 15;
    Block = 0;
    LOBYTE(v12[0]) = 0;
    v15 = 0;
    sub_10001610((char *)v12, v10);
    sub_10002880(this[8215], (int)v12);
    if ( Block )
      j__free(Block);
    sub_10001CC0(&v16);
  }
}
