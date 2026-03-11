/*
 * func-name: sub_101F07F0
 * func-address: 0x101f07f0
 * callers: 0x1000d391
 * callees: 0x10006e74, 0x102c9d50
 */

int __thiscall sub_101F07F0(_DWORD *this)
{
  _DWORD **v2; // ecx
  _DWORD *v3; // eax
  bool v4; // zf
  _DWORD *v5; // edi
  int result; // eax
  _DWORD v7[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = (_DWORD **)this[2];
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(this[2] + 4) = this[2];
  v4 = v3 == (_DWORD *)this[2];
  this[3] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (_DWORD *)this[2] );
  }
  v7[1] = this[2];
  v7[0] = this + 1;
  sub_10006E74(9, (int)v7);
  result = 1;
  this[8] = 1;
  this[9] = 1;
  return result;
}
