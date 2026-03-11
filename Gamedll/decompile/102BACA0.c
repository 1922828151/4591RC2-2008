/*
 * func-name: ?Clear@GUIConsole@@QAEXXZ_0
 * func-address: 0x102baca0
 * callers: 0x100172d8
 * callees: 0x1000df4e
 */

void __thiscall GUIConsole::Clear(GUIConsole *this)
{
  int v1[2]; // [esp-28h] [ebp-30h] BYREF
  char v2; // [esp-20h] [ebp-28h] BYREF
  int v3; // [esp-1Ch] [ebp-24h]
  int v4; // [esp-18h] [ebp-20h]
  int v5; // [esp-14h] [ebp-1Ch]
  int v6; // [esp-10h] [ebp-18h]
  int v7; // [esp-Ch] [ebp-14h]
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]
  int *v10; // [esp+4h] [ebp-4h]

  *((_DWORD *)this + 29) = 0;
  v10 = v1;
  std::string::string(&v2);
  sub_1000DF4E(0, v1[0], v1[1], v2, v3, v4, v5, v6, v7, v8, v9);
}
