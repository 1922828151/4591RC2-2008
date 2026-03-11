/*
 * func-name: sub_10018510
 * func-address: 0x10018510
 * callers: none
 * callees: 0x100175a0, 0x10018330
 */

char __thiscall sub_10018510(int *this, _DWORD *a2, int a3)
{
  char result; // al
  int (__thiscall *v5)(int *, int); // edx

  result = sub_10018330(a2);
  if ( result )
  {
    sub_100175A0(this);
    v5 = *(int (__thiscall **)(int *, int))(*this + 28);
    this[1] = (int)a2;
    return v5(this, a3);
  }
  return result;
}
