/*
 * func-name: sub_100617F0
 * func-address: 0x100617f0
 * callers: 0x1005ff10
 * callees: 0x10061150, 0x100956d0
 */

unsigned __int16 __thiscall sub_100617F0(_WORD *this, char a2)
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
      sub_10061150((int)this, 1);
    v4 = this[10];
    this[10] = v4 + 1;
    if ( v4 == 0xFFFF )
      Error("CLinkedList overflow!\n");
  }
  else
  {
    v4 = this[8];
    this[8] = *(_WORD *)(*(_DWORD *)this + 12 * v3 + 10);
  }
  v5 = *(_DWORD *)this;
  v6 = 12 * v4;
  if ( a2 )
  {
    v8 = (_WORD *)(v6 + v5 + 8);
    *v8 = -1;
    *(_WORD *)(v6 + *(_DWORD *)this + 10) = *v8;
  }
  else
  {
    *(_WORD *)(v6 + v5 + 8) = v4;
    *(_WORD *)(v6 + *(_DWORD *)this + 10) = v4;
  }
  result = v4;
  *((_DWORD *)this + 6) = *(_DWORD *)this;
  return result;
}
