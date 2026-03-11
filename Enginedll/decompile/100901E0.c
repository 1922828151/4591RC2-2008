/*
 * func-name: sub_100901E0
 * func-address: 0x100901e0
 * callers: 0x1002f5f0, 0x1002ffd0, 0x10030e80, 0x100372d0, 0x1008b740, 0x100f4e90, 0x101b9250, 0x101b92a0, 0x101b92f0, 0x101b9340, 0x101b9390, 0x101b93e0, 0x101b9430
 * callees: 0x101a2500
 */

void __thiscall sub_100901E0(_DWORD *this)
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
