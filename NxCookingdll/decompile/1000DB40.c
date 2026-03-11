/*
 * func-name: sub_1000DB40
 * func-address: 0x1000db40
 * callers: 0x1000df90, 0x100233c0
 * callees: 0x1000e560, 0x10014910, 0x10017de0
 */

int __thiscall sub_1000DB40(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int result; // eax
  int (__thiscall ***v5)(_DWORD, int); // ecx

  v2 = this[20];
  if ( v2 )
  {
    sub_1000E560(this[20]);
    v3 = sub_10014910();
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 12))(v3, v2);
    this[20] = 0;
  }
  this[1] = 0;
  result = sub_10017DE0(this + 2);
  v5 = (int (__thiscall ***)(_DWORD, int))this[72];
  if ( v5 )
  {
    result = (**v5)(v5, 1);
    this[72] = 0;
  }
  this[11] = 0;
  this[12] = 0;
  return result;
}
