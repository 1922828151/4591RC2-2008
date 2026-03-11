/*
 * func-name: sub_10061C70
 * func-address: 0x10061c70
 * callers: 0x1005ff10
 * callees: 0x100619e0
 */

int __thiscall sub_10061C70(_WORD *this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v4; // eax
  int v5; // ecx
  int result; // eax

  sub_100619E0(this, a3);
  v4 = *(_DWORD *)this + 12 * a3;
  *(_WORD *)(v4 + 10) = a2;
  if ( a2 == 0xFFFF )
  {
    *(_WORD *)(v4 + 8) = this[7];
    this[7] = a3;
  }
  else
  {
    v5 = *(_DWORD *)this + 12 * a2;
    *(_WORD *)(v4 + 8) = *(_WORD *)(v5 + 8);
    *(_WORD *)(v5 + 8) = a3;
  }
  result = *(unsigned __int16 *)(v4 + 8);
  if ( (_WORD)result == 0xFFFF )
  {
    ++this[9];
    this[6] = a3;
  }
  else
  {
    result = 3 * (unsigned __int16)result;
    *(_WORD *)(*(_DWORD *)this + 4 * result + 10) = a3;
    ++this[9];
  }
  return result;
}
