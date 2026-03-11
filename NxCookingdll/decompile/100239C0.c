/*
 * func-name: sub_100239C0
 * func-address: 0x100239c0
 * callers: 0x10023e50
 * callees: 0x1000d700, 0x1000f700, 0x10014910, 0x1002b2e0, 0x1002b5a0, 0x1002b5c0
 */

char __thiscall sub_100239C0(_DWORD *this)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int (__stdcall ***v4)(size_t, int); // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // [esp+8h] [ebp-10h]
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( this[48] > 0xFFu )
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
      544,
      0,
      "The hull has more than 255 polygons. This is invalid.",
      v7);
    return 0;
  }
  if ( this[42] > 0xFFu )
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
      550,
      0,
      "The hull has more than 255 vertices. This is invalid.",
      v7);
    return 0;
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this[72];
  if ( v3 )
  {
    (**v3)(v3, 1);
    this[72] = 0;
  }
  if ( this[42] > 0x20u )
  {
    v4 = sub_10014910();
    v5 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v4)(v4, 36, 10);
    if ( v5 )
      v6 = sub_1000F700(v5, (int)(this + 39));
    else
      v6 = 0;
    this[72] = v6;
    sub_1002B5A0(v6);
    sub_1002B2E0(16);
    sub_1002B5C0(v8);
  }
  return 1;
}
