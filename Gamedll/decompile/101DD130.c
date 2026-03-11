/*
 * func-name: sub_101DD130
 * func-address: 0x101dd130
 * callers: 0x10002ea0
 * callees: 0x10001bdb, 0x10004cc8, 0x10005e8e, 0x10008701, 0x1000c46e, 0x1001027b, 0x10016d4c, 0x102c9d98
 */

char __thiscall sub_101DD130(_DWORD *this)
{
  char result; // al
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-18h]

  result = sub_10004CC8();
  if ( result )
  {
    if ( operator new(0x64u) )
      v3 = sub_10005E8E(v10, v11);
    else
      v3 = 0;
    this[5] = v3;
    if ( operator new(0x1Cu) )
      v4 = sub_1000C46E();
    else
      v4 = 0;
    this[6] = v4;
    if ( operator new(0x10u) )
      v5 = sub_10016D4C();
    else
      v5 = 0;
    this[7] = v5;
    if ( operator new(0x20u) )
      v6 = sub_10008701();
    else
      v6 = 0;
    this[8] = v6;
    if ( operator new(0x20u) )
      v7 = sub_10001BDB();
    else
      v7 = 0;
    this[9] = v7;
    if ( operator new(0xCu) )
      v8 = sub_1001027B();
    else
      v8 = 0;
    v9 = this[5];
    this[10] = v8;
    this[4] = v9;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 4))(v9, 6);
    return 1;
  }
  return result;
}
