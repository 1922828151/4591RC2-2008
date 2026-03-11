/*
 * func-name: ?EnumFrame@AnimationModal@@IAEXPAUModelFrame@@@Z_0
 * func-address: 0x100db530
 * callers: 0x10002a95
 * callees: 0x10002a95, 0x10004d22, 0x10010249, 0x100145c9, 0x10016b58, 0x102c9d62
 */

void __thiscall AnimationModal::EnumFrame(AnimationModal *this, struct ModelFrame **a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+0h] [ebp-9Ch]
  int v8; // [esp+0h] [ebp-9Ch]
  int v9; // [esp+4h] [ebp-98h]
  int v10; // [esp+4h] [ebp-98h]
  _BYTE v11[120]; // [esp+14h] [ebp-88h] BYREF
  int v12; // [esp+98h] [ebp-4h]

  if ( a2 )
  {
    if ( std::string::find(a2 + 11, "_TL", 0) != std::string::npos )
    {
      sub_100145C9(v7, v9);
      v12 = 0;
      sub_10004D22(v11);
      v3 = *((_DWORD *)this + 350);
      if ( v3 )
        v3 = (*((_DWORD *)this + 351) - v3) / 120;
      v4 = sub_10010249(v3 - 1);
      std::string::operator=(v4 + 56, a2 + 11);
      v5 = *((_DWORD *)this + 350);
      if ( v5 )
        v5 = (*((_DWORD *)this + 351) - v5) / 120;
      v6 = sub_10010249(v5 - 1);
      std::string::operator=(v6, (char *)this + 1340);
      v12 = -1;
      sub_10016B58(v8, v10);
    }
    AnimationModal::EnumFrame(this, a2[89]);
    AnimationModal::EnumFrame(this, a2[90]);
  }
}
