/*
 * func-name: sub_10061BF0
 * func-address: 0x10061bf0
 * callers: 0x1005ff10
 * callees: 0x10061a80
 */

int __thiscall sub_10061BF0(_WORD *this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v4; // eax
  int v5; // ecx
  int result; // eax

  sub_10061A80(this, a3);
  v4 = *(_DWORD *)this + 6 * a3;
  *(_WORD *)(v4 + 4) = a2;
  if ( a2 == 0xFFFF )
  {
    *(_WORD *)(v4 + 2) = this[7];
    this[7] = a3;
  }
  else
  {
    v5 = *(_DWORD *)this + 6 * a2;
    *(_WORD *)(v4 + 2) = *(_WORD *)(v5 + 2);
    *(_WORD *)(v5 + 2) = a3;
  }
  result = *(unsigned __int16 *)(v4 + 2);
  if ( (_WORD)result == 0xFFFF )
  {
    ++this[9];
    this[6] = a3;
  }
  else
  {
    result = 3 * (unsigned __int16)result;
    *(_WORD *)(*(_DWORD *)this + 2 * result + 4) = a3;
    ++this[9];
  }
  return result;
}
