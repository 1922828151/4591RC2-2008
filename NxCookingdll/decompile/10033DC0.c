/*
 * func-name: sub_10033DC0
 * func-address: 0x10033dc0
 * callers: 0x10030940
 * callees: 0x10014c80, 0x10014d30, 0x10015160, 0x10033d20
 */

char __thiscall sub_10033DC0(int *this)
{
  int *v2; // ebx
  int *v3; // eax
  int *v4; // eax
  _DWORD *v5; // edi
  unsigned int v6; // eax
  int v7; // ecx

  v2 = this + 2;
  *this = 0;
  v3 = sub_10015160(this + 2, 0);
  sub_10014C80((int)v3);
  v4 = sub_10015160(v2, 0);
  sub_10014C80((int)v4);
  v5 = (_DWORD *)(*(int (__stdcall **)(int, int))(*(_DWORD *)dword_100580A0 + 8))(4 * this[1], 1);
  v6 = 0;
  if ( this[1] )
  {
    v7 = 0;
    do
    {
      v5[v6++] = v7 + this[9];
      v7 += 40;
    }
    while ( v6 < this[1] );
  }
  sub_10033D20(this, v5, this[1]);
  sub_10014D30(v2, 0);
  sub_10014D30(v2, *this);
  if ( v5 )
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v5);
  return 1;
}
