/*
 * func-name: sub_10162C30
 * func-address: 0x10162c30
 * callers: 0x10162ce0, 0x10167810, 0x10169020
 * callees: 0x1016af80
 */

char __thiscall sub_10162C30(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  _DWORD *v9; // eax
  void *v10; // edi
  int v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h] BYREF

  v6 = a2;
  this[13] = a4;
  this[11] = a2;
  this[12] = a3;
  this[14] = a5;
  if ( a3 )
  {
    v13 = a3;
    do
    {
      if ( v6 )
      {
        v14 = 0;
        v12 = v6;
        do
        {
          v7 = this[1];
          if ( v7 )
            v8 = (int)(this[2] - v7) >> 2;
          else
            v8 = 0;
          if ( v7 && v8 < (int)(this[3] - v7) >> 2 )
          {
            v9 = (_DWORD *)this[2];
            *v9 = 0;
            this[2] = v9 + 1;
          }
          else
          {
            v10 = (void *)this[2];
            if ( v7 > (unsigned int)v10 )
              invalid_parameter_noinfo();
            sub_1016AF80((int)&v15, (int)this, v10, (int)&v14);
          }
          --v12;
        }
        while ( v12 );
        v6 = a2;
      }
      --v13;
    }
    while ( v13 );
  }
  return 1;
}
