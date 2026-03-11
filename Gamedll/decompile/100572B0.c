/*
 * func-name: sub_100572B0
 * func-address: 0x100572b0
 * callers: 0x100018c5
 * callees: 0x102c9d50
 */

void __thiscall sub_100572B0(_DWORD *this)
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
      std::string::~string(v3 + 2);
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (_DWORD *)this[1] );
  }
}
