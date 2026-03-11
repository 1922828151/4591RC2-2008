/*
 * func-name: sub_10075210
 * func-address: 0x10075210
 * callers: 0x1001a4fb
 * callees: 0x1001a429, 0x102c9d50
 */

void __thiscall sub_10075210(_DWORD *this)
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
      GameClient::Group::~Group((GameClient::Group *)(v3 + 3));
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (_DWORD *)this[1] );
  }
}
