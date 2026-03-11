/*
 * func-name: sub_1014C570
 * func-address: 0x1014c570
 * callers: 0x1000ec7d
 * callees: 0x1001a276, 0x102c9d50
 */

void __thiscall sub_1014C570(int *this, unsigned int a2, char a3)
{
  unsigned int v4; // eax
  int v5; // eax
  _DWORD **v6; // edi

  v4 = this[2];
  if ( a2 <= v4 )
  {
    if ( a2 < v4 )
    {
      do
      {
        v5 = this[1];
        v6 = *(_DWORD ***)(v5 + 4);
        if ( v6 == (_DWORD **)v5 )
          _invalid_parameter_noinfo();
        if ( v6 == (_DWORD **)this[1] )
        {
          _invalid_parameter_noinfo();
          if ( v6 == (_DWORD **)this[1] )
            continue;
        }
        *v6[1] = *v6;
        (*v6)[1] = v6[1];
        operator delete(v6);
        --this[2];
      }
      while ( a2 < this[2] );
    }
  }
  else
  {
    sub_1001A276((int)this, this[1], a2 - v4, (int)&a3);
  }
}
