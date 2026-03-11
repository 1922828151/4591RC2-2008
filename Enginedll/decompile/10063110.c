/*
 * func-name: sub_10063110
 * func-address: 0x10063110
 * callers: 0x10063200
 * callees: 0x10012400, 0x10062fe0
 */

int __thiscall sub_10063110(int this, int a2, int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v7; // edi
  int v8; // ebp
  int v9; // ecx
  int v10; // ecx
  int i; // eax
  int v12; // ecx
  char v13; // al
  char v15; // [esp-10h] [ebp-30h]

  v7 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = a5;
  *(_DWORD *)(this + 20) = a6;
  sub_10062FE0((int *)this, a2, v15, 0, 0, 0);
  if ( a2 > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)(this + 4);
      if ( !v9 || v7 >= (*(_DWORD *)(this + 8) - v9) >> 4 )
        invalid_parameter_noinfo();
      sub_10012400((_DWORD *)(v8 + *(_DWORD *)(this + 4)), a4, 0);
      ++v7;
      v8 += 16;
    }
    while ( (int)v7 < a2 );
  }
  v10 = 1;
  for ( i = 0; i < 32; ++i )
  {
    if ( v10 == a2 )
      break;
    v10 *= 2;
  }
  if ( i == 32 )
  {
    v13 = 0;
  }
  else
  {
    *(_DWORD *)(this + 28) = 0;
    if ( i > 0 )
    {
      v12 = 0;
      do
      {
        v12 = (2 * v12) | 1;
        --i;
      }
      while ( i );
      *(_DWORD *)(this + 28) = v12;
    }
    v13 = 1;
  }
  *(_BYTE *)(this + 24) = v13;
  return this;
}
