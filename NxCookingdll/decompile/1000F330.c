/*
 * func-name: sub_1000F330
 * func-address: 0x1000f330
 * callers: 0x1000fc40, 0x10020740, 0x10030940
 * callees: 0x10014910
 */

void __thiscall sub_1000F330(_DWORD *this)
{
  int v2; // edi
  int v3; // eax

  v2 = this[1];
  if ( v2 )
  {
    v3 = sub_10014910();
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 12))(v3, v2 - 4);
    this[1] = 0;
  }
}
