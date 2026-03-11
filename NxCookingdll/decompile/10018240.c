/*
 * func-name: sub_10018240
 * func-address: 0x10018240
 * callers: none
 * callees: 0x10017de0, 0x10018330
 */

int __thiscall sub_10018240(int *this, int a2, int a3)
{
  int result; // eax
  int (__thiscall *v5)(int *, int); // edx

  result = sub_10018330(a2);
  if ( (_BYTE)result )
  {
    sub_10017DE0(this);
    v5 = *(int (__thiscall **)(int *, int))(*this + 28);
    this[1] = a2;
    return v5(this, a3);
  }
  return result;
}
