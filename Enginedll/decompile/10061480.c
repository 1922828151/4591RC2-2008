/*
 * func-name: sub_10061480
 * func-address: 0x10061480
 * callers: 0x100624c0
 * callees: 0x100611d0, 0x100956d0
 */

unsigned __int16 __thiscall sub_10061480(_WORD *this, char a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // di
  int v5; // ecx
  int v6; // eax
  unsigned __int16 result; // ax
  _WORD *v8; // ecx

  v3 = this[8];
  if ( v3 == 0xFFFF )
  {
    if ( (unsigned __int16)this[10] == *((_DWORD *)this + 1) )
      sub_100611D0((int)this, 1);
    v4 = this[10];
    this[10] = v4 + 1;
    if ( v4 == 0xFFFF )
      Error("CLinkedList overflow!\n");
  }
  else
  {
    v4 = this[8];
    this[8] = *(_WORD *)(44 * v3 + *(_DWORD *)this + 42);
  }
  v5 = *(_DWORD *)this;
  v6 = 44 * v4;
  if ( a2 )
  {
    v8 = (_WORD *)(v6 + v5 + 40);
    *v8 = -1;
    *(_WORD *)(v6 + *(_DWORD *)this + 42) = *v8;
  }
  else
  {
    *(_WORD *)(v6 + v5 + 40) = v4;
    *(_WORD *)(v6 + *(_DWORD *)this + 42) = v4;
  }
  result = v4;
  *((_DWORD *)this + 6) = *(_DWORD *)this;
  return result;
}
