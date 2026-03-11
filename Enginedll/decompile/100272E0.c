/*
 * func-name: sub_100272E0
 * func-address: 0x100272e0
 * callers: 0x1002f7d0, 0x10030ef0, 0x10033040, 0x10172c10
 * callees: 0x101a2500
 */

void __thiscall sub_100272E0(_DWORD *this)
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
      std::string::~string(v3 + 4);
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (_DWORD *)this[1] );
  }
}
