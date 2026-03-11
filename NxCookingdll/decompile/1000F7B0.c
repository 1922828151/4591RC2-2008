/*
 * func-name: sub_1000F7B0
 * func-address: 0x1000f7b0
 * callers: none
 * callees: 0x1000f620, 0x10014910, 0x10016380
 */

char __thiscall sub_1000F7B0(_DWORD *this, int a2)
{
  int v2; // edi
  int v5; // eax
  int (__thiscall ***v6)(_DWORD, int, int); // eax
  int v7; // eax
  int v8; // ecx
  _BYTE v9[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  if ( !(unsigned __int8)sub_10016380(83, 85, 80, 77, v9, &a2, a2) )
    return 0;
  if ( !sub_1000F620(this, v2) )
    return 0;
  v5 = this[2];
  this[4] = this[1];
  this[5] = v5;
  v6 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v7 = (**v6)(v6, 2 * this[2], 55);
  this[3] = v7;
  if ( !v7 )
    return 0;
  v8 = this[2];
  this[7] = v8 + v7;
  this[6] = v7;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 24))(v2, v7, 2 * v8);
  return 1;
}
