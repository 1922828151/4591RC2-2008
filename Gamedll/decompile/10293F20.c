/*
 * func-name: sub_10293F20
 * func-address: 0x10293f20
 * callers: 0x10002793
 * callees: 0x10007266
 */

void __thiscall sub_10293F20(int *this, int a2, float a3)
{
  int v4; // ebp
  unsigned int v5; // edi
  int i; // ebx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  bool v13; // cc
  int v14; // [esp+14h] [ebp-8h] BYREF
  int v15; // [esp+18h] [ebp-4h] BYREF

  v4 = this[167];
  v14 = this[42];
  v15 = v4;
  v5 = 1;
  for ( i = 60; ; i += 60 )
  {
    v7 = this[134];
    if ( !v7 || v5 >= (this[135] - v7) / 60 )
      break;
    v8 = this[134];
    if ( !v8 || v5 >= (this[135] - v8) / 60 )
      _invalid_parameter_noinfo();
    if ( v4 < *(_DWORD *)(i + this[134] + 36) )
      break;
    ++v5;
  }
  v9 = v5 - 1;
  if ( v14 < this[44] )
  {
    v10 = 60 * v9;
    do
    {
      v11 = this[134];
      if ( !v11 || v9 >= (this[135] - v11) / 60 )
        break;
      v12 = this[134];
      if ( !v12 || v9 >= (this[135] - v12) / 60 )
        _invalid_parameter_noinfo();
      sub_10007266(v10 + this[134], (int)&v15, (int)&v14, this[44], a2, a3);
      v15 += 5;
      ++v9;
      v10 += 60;
      v13 = v14 + 5 < this[44];
      v14 += 5;
    }
    while ( v13 );
  }
}
