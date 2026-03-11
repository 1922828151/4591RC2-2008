/*
 * func-name: sub_1010FC10
 * func-address: 0x1010fc10
 * callers: 0x10111bb0, 0x101b9480
 * callees: 0x101a2500
 */

void __thiscall sub_1010FC10(_DWORD *this)
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
      std::wstring::~wstring(v3 + 9);
      std::wstring::~wstring(v3 + 2);
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (_DWORD *)this[1] );
  }
}
