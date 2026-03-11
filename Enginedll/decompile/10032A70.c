/*
 * func-name: sub_10032A70
 * func-address: 0x10032a70
 * callers: 0x10032d10, 0x10033210, 0x10172c10
 * callees: 0x10031ec0, 0x101a2500
 */

void __thiscall sub_10032A70(_DWORD *this)
{
  _DWORD **v2; // eax
  _DWORD *v3; // esi
  bool v4; // zf
  _DWORD *v5; // ebx

  v2 = (_DWORD **)this[1];
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(this[1] + 4) = this[1];
  v4 = v3 == (_DWORD *)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      sub_10031EC0(v3 + 3);
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (_DWORD *)this[1] );
  }
}
