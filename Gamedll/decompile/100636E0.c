/*
 * func-name: sub_100636E0
 * func-address: 0x100636e0
 * callers: 0x1001a546
 * callees: 0x102c9d50
 */

void __thiscall sub_100636E0(_DWORD *this)
{
  void **v2; // eax
  void **v3; // esi
  bool v4; // zf
  void **v5; // ebx

  v2 = (void **)this[1];
  v3 = (void **)*v2;
  *v2 = v2;
  *(_DWORD *)(this[1] + 4) = this[1];
  v4 = v3 == (void **)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (void **)*v3;
      if ( v3[4] )
        operator delete(v3[4]);
      v3[4] = 0;
      v3[5] = 0;
      v3[6] = 0;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (void **)this[1] );
  }
}
