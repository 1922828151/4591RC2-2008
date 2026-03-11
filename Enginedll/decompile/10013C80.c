/*
 * func-name: sub_10013C80
 * func-address: 0x10013c80
 * callers: 0x10014f60, 0x100154c0, 0x1008bd00, 0x1008f580
 * callees: 0x1000f2e0, 0x101a2500
 */

void __thiscall sub_10013C80(_DWORD *this)
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
      sub_1000F2E0((int)(v3 + 2));
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (_DWORD *)this[1] );
  }
}
